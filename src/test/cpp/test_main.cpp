#include "test_main.h"
#include "main.h"
#include <cassert> // 使用 C++ 标准断言
#include <iostream>

void testAdd() {
    assert(add(2, 3) == 5);
    assert(add(-1, -1) == -2);
    assert(add(0, 0) == 0);
}

void testSubtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(0, 1) == -1);
    assert(subtract(-1, -1) == 0);
}

int main() {
    std::cout << "Hello 设计！\n";
    testAdd();
    testSubtract();
    return 0;
}
