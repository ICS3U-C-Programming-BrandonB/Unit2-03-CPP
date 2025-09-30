// Copyright (c) 2025 Brandon All rights reserved.
// Created By : Brandon
// Date : September 30th, 2025
// This program displays and calculates the price of a pizza

#include <iomanip>
#include <iostream>

int main() {
    // constants
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;
    const float HST = 0.13;

    // variables
    int diameter;
    float subtotal;
    float tax;
    float total;

    // gets diameter from user
    std::cout << "Enter Diameter of your Pizza (inches): ";
    std::cin >> diameter;

    // calculates the cost of the pizza
    subtotal = RENTAL_COST + INGRED_COST + LABOUR_COST + diameter;
    tax = subtotal * HST;
    total = subtotal + tax;

    // displays cost of the pizza back to the user
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << "\n The total of your pizza is: " << total << "\n";
}
