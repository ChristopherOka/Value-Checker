#include <iostream> 

void value_checker() { 
	int target; //variable for user-inputted value
	bool is_valid = true;

	std::cout << "Enter a value: ";
	std::cin >> target;
	is_valid = is_valid && target > 5000; //checks if the target is greater than 5000
	is_valid = is_valid && (target % 1000) / 100 == 3; //checks if the third digit from the right is 3
	is_valid = is_valid && ((target % 100) / 10) % 2 == 0; //checks if the second digit from the right is 2
	is_valid = is_valid && target % 10 == 0; //checks if the target value is divisible by 10
	std::cout << ((is_valid == true) ? "The target value meets all the criteria!\n" : "The target value does not meet all the criteria.\n"); 
}

int main() {
	value_checker(); 
}