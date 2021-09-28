// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks for a number, then checks if it is
// greater than 0 by continuously adding one to the 0

#include <iostream>


int main() {
    // this function loops until it is less than the user integer
    // and creates an addition sequence

    std::string userNumber;
    int userNumberInt;
    int digitOne = 0;
    int sum = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userNumber;
    std::cout << std::endl;

    // process & output

    try {
        userNumberInt = std::stoi(userNumber);

        while (digitOne < userNumberInt) {
            sum = sum + userNumberInt;
            userNumberInt = userNumberInt - 1;
        }
        std::cout << "The sum of all positive integers from 1 to "
        << userNumber << " is " << sum << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid integer.";
    }

    std::cout << "\nDone." << std::endl;
}
