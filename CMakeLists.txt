cmake_minimum_required(VERSION 3.25)
project(OpenCV_Face_Tracking)

set(CMAKE_CXX_STANDARD 14)

include_directories(bin/headers)

add_executable(OpenCV_Face_Tracking
        bin/headers/ConfigParser.h
        bin/sources/ConfigParser.cpp
        bin/sources/main.cpp)
