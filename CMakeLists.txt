cmake_minimum_required(VERSION 3.29)
project(ImcCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(ImcCalculator main.cpp
        cmake-build-debug/strings.cpp
        cmake-build-debug/strings.h
)
