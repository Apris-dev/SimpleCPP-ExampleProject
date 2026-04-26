cmake_minimum_required(VERSION 3.11...4.2)

include(third_party/simplecpp/cmake/Setup_vcpkg.cmake)

# Ensures vcpkg is installed on computer
# Install locally to skip
setup_vcpkg()

project(
        ExampleProject
        VERSION 1.0.0
        LANGUAGES CXX C
)

set(CMAKE_CXX_STANDARD 23)

find_package(fmt CONFIG REQUIRED)

add_subdirectory(third_party/simplecpp)

add_executable(ExampleProject src/Main.cpp)

target_link_libraries(ExampleProject PRIVATE fmt::fmt)
target_link_libraries(ExampleProject PRIVATE SimpleCPP)