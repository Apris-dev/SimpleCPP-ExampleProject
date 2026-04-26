#include <iostream>

#include <fmt/format.h>

int main() {

    // Fmt currently has bug with MinGW ;(
    std::cout << fmt::format("Hello {}!", "World") << std::endl;
    return 0;
}