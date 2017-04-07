cmake_minimum_required(VERSION 3.7)
project(uxb)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES library.cpp library.h Connector.cpp Connector.h)
add_library(uxb ${SOURCE_FILES})