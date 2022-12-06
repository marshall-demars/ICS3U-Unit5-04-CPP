// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Dec 2022
// This program finds the volume of a cylinder

#include <math.h>
#include <iostream>

float CylinderVolumeCalculation(int radius, int height) {
    // This function finds the volume of the cylinder
    float volume;

    // Process
    if (radius < 0 || height < 0) 
        return -1;
    else 
        volume = M_PI * (radius * radius) * height;
    return volume;
}

int main() {
    // This function gets the radius and height from the user
    std::string radius_as_string;
    std::string height_as_string;
    int radius;
    int height;
    float volume;

    // Input
    std::cout << "Enter the radius of the cylinder (cm): ";
    std::cin >> radius_as_string;
    std::cout << "Enter the height of the cylinder (cm): ";
    std::cin >> height_as_string;

    try {
        radius = std::stoi(radius_as_string);
        height = std::stoi(height_as_string);
        // Call function
        volume = CylinderVolumeCalculation(radius, height);
        if (volume == -1)
            std::cout << "\nPlease input a positive number." << std::endl;
        else
            std::cout << "\nThe volume of a cylinder with the radius of "
                    << radius << " cm and the height of " << height << " cm is "
                    << volume << " cm³.";
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
