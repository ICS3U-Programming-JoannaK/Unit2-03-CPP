// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 4, 2025
// This program asks the user for the diameter
// of the pizza.it then calculates and displays
// the total cost of the pizza with tax

#include <iomanip>
#include <iostream>

int main() {
    // declare constants
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;
    float diameter;
    float subtotal;
    float tax;
    float total;

    // get diameter from the user
    std::cout << "Enter the diameter (inches): ";
    std::cin >> diameter;

    //calculate the total with tax
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = HST * subtotal;
    total = subtotal + tax;

    // display the total with tax
    std::cout << "\n";
    std::cout << "total = " << total << "inches" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << std::setfill('0') << total << "\n";

}
