// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Dec 2022
// This program calculates the perimeter of a decagon.

#include <iostream>
#include <string>

float calculatePerimeter(int side) {
    float perimeter;

    if (side <= 0) {
        perimeter = -1;
        return perimeter;
    } else {
        perimeter = side * 10;
        return perimeter;
    }
}

int main() {
    std::string str_side;
    int side;
    float perimeter;

    // Input
    std::cout << "Enter a side of the decagon (cm): ";
    std::cin >> str_side;


    try {
        side = std::stoi(str_side);

        // Call function
        perimeter = calculatePerimeter(side);
        if (perimeter == -1) {
            std::cout << "That is an invalid input." << std::endl;
        } else {
            std::cout << "The perimeter is of the decagon is: "
            << perimeter << " cm.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
