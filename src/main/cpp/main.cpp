#include "main.h"
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "Hello, Gradle C++!" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
