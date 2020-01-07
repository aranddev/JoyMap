cmake_minimum_required(VERSION 3.10)

# set the project name
project(JoyMap)

include_directories(include external)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)

file(GLOB SrcFiles "./src/*.cpp")

# add the executable

add_executable(JoyMap ${SrcFiles})