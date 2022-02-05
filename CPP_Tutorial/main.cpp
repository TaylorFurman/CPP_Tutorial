//similar to import in JavaScript
#include<iostream>

//variable types below (variables written as (type variableName = value)

//int = integers (whole numbers)
//double = floating point numbers (numbers with decimals)
//char = stores SINGLE characters, such as 'a' or 'B', must be surrounded by single quotes
//string = stores text, such as "Hello World!.  must be surrounded by double quotes
//bool = true/false

//int main() = the opening of the entire program.  The MAIN function from where the program starts.
int main() 
{
	//Print a string
	std::cout << "Hello World!" << std::endl;

	char theLetterA = 'A';
	std::cout << theLetterA << std::endl;

	//Just like in JavaScript you can declare variables either inside a function (local) or outside the function (global).
	int someNumberA = 1;
	int someNumberB = 2;

	//Print the sum of two numbers
	std::cout << someNumberA + someNumberB;
	std::cin.get();
}