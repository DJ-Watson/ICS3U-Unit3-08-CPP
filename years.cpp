// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: October 2019
// this program checks if an inputted year is a leap year


#include <iostream>
#include <string>


int main() {
    // variables
    std::string numinput;
    int numcheck;
    // input
    std::cout << "enter year: ";
    std::cin >> numinput;
    std::cout << "" << std::endl;
    // process
    try {
        numcheck = std::stoi(numinput);
        if (numcheck >= 0) {
            if (numcheck % 4 == 0 && numcheck % 100 != 0) {
                std::cout << "this is a leap year!";
            } else if (numcheck % 400 == 0 && numcheck % 100 == 0) {
                std::cout << "this is a leap year!";
            } else {
                std::cout << "this is not a leap year!";
            }
        } else {
            std::cout << "invalid input";
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input";
    }
}
