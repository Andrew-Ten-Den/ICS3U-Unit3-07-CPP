// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew Ten-Den
// Created on: April 2022
// This program lets the user see if grandma accepts them


#include <iostream>


main() {
    // this function lets the user see if grandma accepts them
    std::string visual_status;
    std::string financial_status;

    // input
    std::cout << "Are you attractive (yes/no): ";
    std::cin >> visual_status;
    std::cout << "Are you wealthy (yes/no): ";
    std::cin >> financial_status;

    // process
    if (visual_status == "yes" || financial_status == "yes") {
        std::cout << "You can date!";
    } else if (visual_status == "no" && financial_status == "no") {
        std::cout << "Ew, get out!";
    } else {
        std::cout << "Please enter yes or no.";
    }
}
