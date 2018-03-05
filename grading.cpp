#include <iostream>

int main()
{
	int grade;
	char letter;
	std::cout << "Enter your grade: ";
	std::cin >> grade;
	if (grade < 100 && grade >= 90)
		letter = 'A';
	else if (grade <= 89 && grade >= 80)
		letter = 'B';
	else if (grade <= 79 && grade >= 70)
		letter = 'C';
	else if (grade <= 69 && grade >= 60)
		letter = 'D';
	else if (grade <= 59 && grade >= 0)
		letter = 'F';
	else
		std::cout << "Enter a valid grade";

	std::cout << "Your letter grade is: " << letter << std::endl;
}