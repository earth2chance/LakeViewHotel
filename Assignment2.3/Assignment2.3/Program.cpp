//Chance Daily
//Problem 2.3 4-5-2017

#include <iostream>

int main(){

	int nightsStayed;
	double minutes, total;

	std::cout << "Thanks for staying at Lake View Hotel! " << std::endl;

	std::cout << "How many nights did you stay? ";
	std::cin >> nightsStayed;
	
	std::cout << "How many minutes did you spend on the phone? ";
	std::cin >> minutes;

	total = (nightsStayed * 200) + (minutes * 0.25) + 35;

	std::cout << "Your total for your stay is $" << total << std::endl;
	std::cout << "Thank you for staying with us at Lake View!" << std::endl;
}