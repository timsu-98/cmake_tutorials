#include <iostream>
#include <Adder.hpp>

int main() {
    std::cout << "Let's use CMake!\n";

    cmake_tutorials::Adder adder;
    
    std::cout << "Add one and two here: " << adder.add(1.0, 2.0) << '\n';

    return 0;
}