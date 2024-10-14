// Involves the use of strings
#include <string>
#include <iostream>

int main() {
    // Initializing the strings
    std::string firstName = "Bob";
    std::string lastName = "Johnson";
    std::string streetAddress = "5423 West 45th Jackson Ave";
    std::string city = "Blue City";
    // Not ALL zip codes contain only numbers, so string is still used
    std::string zipCode = "50012";
    // Printing with std::cout
    std::cout << "First Name: " << firstName << std::endl; // Concatenating strings
    std::cout << "Last Name: " << lastName << std::endl; // Having two separate strings for each field increases both flexibility and memory usage
    std::cout << "Address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip Code: " << zipCode << std::endl;
    // This return statement isn't strictly required for this program, but older versions of C++ can have issues without it and having it is considered a good practice
    return 0;
}