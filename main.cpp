/*
 * main.cpp
 *
 *  Created on: May 18, 2024
 *      Author: jamaa
 */


#include <iostream>
#include <string>

int main() {

	// first name
	std::string firstName = "John";
	// last name
	std::string lastName = "Hampton";
	// address
	std::string address = "555 South Street";
	// city
	std::string city = "Las Vegas";
	// zipcode
	int zipCode = 89102;
	// print out the fictional person's data
	std::cout << firstName + " " + lastName << std::endl;
	std::cout << address + ", " + city + " " + std::to_string(zipCode) << std:: endl;

	return 0;


}

