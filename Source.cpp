#include <iostream>

// Functions

double add(double num1, double num2) {

	return num1 + num2;

};

double subtract(double num1, double num2) {

	return num1 - num2;

};

double multiply(double num1, double num2) {
	return num1 * num2;
};

double divide(double num1, double num2) {
	return num1 / num2;
};



int main() {
	
	// Declaration of variables
	double num1, num2;

	// Setting the variables
	std::cout << "Enter your numbers: " << std::endl;
	std::cin >> num1;
	std::cin >> num2;


	//Results
	std::cout << "Results: " << std::endl;
	std::cout << "Sum: " << add(num1, num2) << std::endl;
	std::cout << "Subtract: " << subtract(num1, num2) << std::endl;
	std::cout << "Difference: " << multiply(num1, num2) << std::endl;
	std::cout << "Divide: " << divide(num1, num2) << std::endl;

}