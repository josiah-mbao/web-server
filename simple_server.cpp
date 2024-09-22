#include <iostream>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

const std::string http_response =
    "HTTP/1.1 200 OK\r\n"
    "Content-Type: text/plain\r\n"
    "Content-Length: 13\r\n"
    "Connection: close\r\n"
    "\r\n"
    "Hello, world!";

int main() {
    try {
        boost::asio::io_context io_context;

        // Create a listening socket
        tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 8080));
        std::cout << "Server is running on port 8080..." << std::endl;

        while (true) {
            tcp::socket socket(io_context);
            acceptor.accept(socket);

            // Read the request
            char request[1024];
            socket.read_some(boost::asio::buffer(request));
            std::cout << "Received request:\n" << request << std::endl;

            // Send the response
            boost::asio::write(socket, boost::asio::buffer(http_response));
        }
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
