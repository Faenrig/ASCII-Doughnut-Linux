# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.1)

# Project's name
project(doughnut)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
set(PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src)
message("source directory: ${CMAKE_SOURCE_DIR})")

add_executable(doughnut ${PROJECT_SOURCE_DIR}/doughnut.cpp)
#${PROJECT_SOURCE_DIR}/harmonic_series.cpp)
