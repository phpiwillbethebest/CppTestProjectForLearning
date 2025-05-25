#include <iostream>
#include "io.h"

int main() {
    std::cout << "Please enter your first number: ";
    int num1 = readNumber();

    std::cout << "Please enter your second number: ";
    int num2 = readNumber();

    writeAnswer(num1 + num2);

    return 0;
}
