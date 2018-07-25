#include <iostream>
#include <string>

//https://github.com/elnormous/HTTPRequest
#include "HTTPRequest.hpp"

//https://github.com/mrtazz/restclient-cpp
#include "restclient-cpp/restclient.h"

int main() {
    http::Request request("http://127.0.0.1:10001/");

    //https://github.com/elnormous/HTTPRequest
    // way 1. http only
    http::Response response = request.send("GET");

    auto data =  std::string((char*)response.body.data());
    std::cout << response.body.data() << std::endl; // print the result

    //https://github.com/mrtazz/restclient-cpp
    //way 2.
    RestClient::Response r = RestClient::get("http://127.0.0.1:10001/");
    std::cout << r.body << std::endl; // print the result


    return 0;
}