// Copyright (c) 2026 Victor V-C Name All rights reserved.
// .
// Created by: Victor Victor Calixte
// Date: 09 29, 2026
// This code first takes a radius value from the user.
// Then it'll calculate the area and circumeferece of a circle and display it.

#include <iostream>
#include <iomanip>
#include <cmath>

float radius;
float area;
float circumference;

int main() {
    // Get the Radius from the user
    std::cout << "Enter Radius is Circle (cm): ";
    std::cin >> radius;

    // Calculate the Circumference and area of circle
    circumference = (M_PI * 2) * radius;
    area = M_PI * pow(radius , 2);

    // Display both circumference and area of circle back to the user
     std::cout <<  "Area of Circle is " << std::fixed
    << std::setprecision(2)
    << std::setfill('0')
    << area << "cm²\n";

    std::cout <<  "Circumference of Circle is " << std::fixed
    << std::setprecision(2)
    << std::setfill('0')
    << circumference << "cm\n";
}
