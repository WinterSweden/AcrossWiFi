
#include <iostream>
#include <string>
// AcrossWiFi
// Made for vsecure
// Made by Hitarth Choudhary

// Functions

// (none)

// Code

int main() {
 
// Variables
    int service;
    int ISDcode;
    
std::cout << ".\n";
std::cout << ".\n";
std::cout << "Welcome to AcrossWiFi, a VSecure product.\n";
std::cout << "Made by Hitarth Choudhary\n";

    // Choose Service
    std::cout << ".\n";
    std::cout << ".\n";
    std::cout << "Choose a service: (1/2)\n";
    std::cout << "1. Add a WiFi\n";
    std::cout << "2. Connect to a WiFi\n";
    std::cin >> service;
   
    // Add a WiFi
    
    if(service == 1){
        std::cout << ".\n";
        std::cout << "In order to add a WiFi, send an email to: acrosswifi.vsecure@gmail.com, containing WiFi name, password, local ISD code, and address, or approximate location.\n";
        }
    
    // Connect to a WiFi
    
    if(service == 2){
        std::cout << ".\n";
        std::cout << "Enter ISD code: (Do not include the '+')\n";
        std::cin >> ISDcode;
        
        
        
        
        }
}
