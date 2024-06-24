#include <iostream>

/**
* This is used to output text in the console.
* Do not pay attention to that yet.
*/
#define LOG(_str) std::cout << _str << std::endl;
bool bErrorOccured = false;

/**
* This is a function. It is a piece of code that you can call from anywhere.
* A function is defined this way:
* ReturnType <Name>(ArgumentType <argument_name>, ...)
*/
int Add(int _i, int _j)
{
	return _i + _j;
}


// TODO 1: Implement the Substract function between 2 floats here.


/**
* This is the entrance of the program.
* It is always called "main"
*/
int main()
{
	//0. ===========================================================

	/**
	* C++ code is about creating variables and use them for calculation.
	* a variable is composed of 3 parts:
	* 1. TYPE: this will define the behavior of the object
	* 2. NAME: the name that will be used to use the variable
	* 3. VALUE: the value contained inside the variable.
	*/

	/**
	* Every instruction in C++ must end with ';'
	*/

	// Ex: create a variable of type 'int', named 'myVariable', with the value '4', end of instruction.
	int myVariable = 4;


	//1. ===========================================================

	/**
	* "int" is a type to represent a "integer" aka. un nombre entier positif ou negatif.
	* 'a' is the name of the variable.
	* 2 is the value.
	*/
	int a = 2;

	int b = 3;

	int c = Add(a, b);


	//2. ===========================================================

	/**
	* "float" is a type to represent a positive/negative decimal number.
	* the value must have the 'f' letter at the end.
	*/
	float f = 5.264f;

	float f2 = 1.26f;

	// TODO 1: implement the substract function.
	float f3 = Substract(f, f2);


	// Verification code: do not pay attention
	if (f3 != (f - f2))
	{
		bErrorOccured = true;
		LOG("ERROR: f3 value is [" << f3 << "] instead of [" << (f - f2) << "]");
	}

	// Verification code: do not pay attention
	if (!bErrorOccured)
	{
		LOG("SUCCESS!");
	}

	// The main function always returns 0 on success.
	return 0;
}
