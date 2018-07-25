cmake_minimum_required(VERSION 3.7)
project(http)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)


add_executable(http ${SOURCE_FILES})

target_link_libraries(http restclient-cpp)
