// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program uses for loop

#include <iostream>

void fahrenheit() {
    int user_input_as_integer;
    std::string user_input;
    int temperature;

    // input
    std::cout << "Enter a temperature (℃): ";
    std::cin >> user_input;
    std::cout << "" << std::endl;

    // process and output
    try {
        user_input_as_integer = std::stoi(user_input);
        temperature = (9 * user_input_as_integer) / 5 + 32;
        std::cout << user_input << "℃ is equal to " << temperature << "℉."
                    << std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << user_input << " is not a temperature, try again."
                    << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}


int main() {
    // call function
    fahrenheit();
}
