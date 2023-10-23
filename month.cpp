// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Oct. 23rd, 2023
// This program asks the user for the month as a number between 1 and 12
// and tells the user what month that integer represents
#include <iostream>

int main() {
    // Declare variables
    int month;

    // Get the user's month
    std::cout << "Enter an integer between 1 and 12: ";
    std::cin >> month;

    // Using switch case, find what month the user's number represents
    switch (month) {
        case 1:
        std::cout << month << " represents January.\n";
        break;

        case 2:
        std::cout << month << " represents February.\n";
        break;

        case 3:
        std::cout << month << " represents March.\n";
        break;

        case 4:
        std::cout << month << " represents April.\n";
        break;

        case 5:
        std::cout << month << " represents May.\n";
        break;

        case 6:
        std::cout << month << " represents June.\n";
        break;

        case 7:
        std::cout << month << " represents July.\n";
        break;

        case 8:
        std::cout << month << " represents August.\n";
        break;

        case 9:
        std::cout << month << " represents September.\n";
        break;

        case 10:
        std::cout << month << " represents October.\n";
        break;

        case 11:
        std::cout << month << " represents November.\n";
        break;

        case 12:
        std::cout << month << " represents December.\n";
        break;

        // Handling the error case
        default:
            std::cout << "Enter a valid number.\n";
    }
}
