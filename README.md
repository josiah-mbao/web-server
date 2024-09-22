# Simple C++ HTTP Server

## Overview
This project is a simple HTTP server implemented in C++. It is designed as a learning exercise to understand how servers work and to explore the capabilities and strengths of C++ as a programming language. Over time, this project aims to evolve into a more robust server that showcases the ability to build highly performant applications.

## Features
- Basic HTTP server functionality
- Handles incoming HTTP requests and responds with a simple message
- Designed for learning and experimentation with C++

## Setup and Installation
To build and run the server, follow these steps:

### Prerequisites
- C++ compiler (e.g., g++)
- Boost libraries (specifically Boost.Asio)

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/simple-cpp-server.git
   cd simple-cpp-server

2. Install Boost:
   ```bash
   brew install boost

3. Compile the server:
   ```bash
   g++ -o simple_server simple_server.cpp -I /opt/homebrew/opt/boost/include -L /opt/homebrew/opt/boost/lib -lboost_system -pthread -std=c++11

4. Run the server:
   ```bash
   ./simpl_server

## Usage
Once the server is running, you can send requests using a web browser or curl:
   ```bash
   curl http://localhost:8080
You should see a response showing that the server is up and running

## Contributing
I welcome contributions to this project! If you’d like to contribute, please fork the repository and submit a pull request. Feel free to suggest features or improvements.

## Future Plans
- Enhance the server with more features and capabilities.
- Explore concurrency and multithreading in C++.
- Optimize performance for handling multiple client requests.

## License
This project is open-source and available under the MIT License.
