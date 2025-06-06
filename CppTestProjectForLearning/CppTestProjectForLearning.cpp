﻿#include <iostream>
#include "io.h"

int main() {
    std::cout << "Please enter your first number: ";
    int num1{ readNumber() };

    std::cout << "Please enter your second number: ";
    int num2{ readNumber() };

    writeAnswer(num1 + num2);

    return 0;
}

// Data types size
//int main()
//{
//    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
//    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
//    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
//    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;
//    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;
//    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
//    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
//    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
//    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
//    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
//    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
//    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
//    return 0;
//}