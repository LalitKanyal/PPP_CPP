// This program outputs the message "Hello, Wor ld!" to the monitor

//#include <iostream>;
//
//int main()
//{
//	std::cout << "Hello, World!\n";
//	return 0;
//}

// output "Hello, World!"

//------

// read and write a first name
//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::cout << "Enter your name:\n";
//	std::string first_name;
//	std::cin >> first_name;
//	std::cout << "Your name is " << first_name << "!\n";
//}


//--------------------------
// read name and age
//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::cout << "Enter your name and age:\n";
//	std::string first_name = "???";
//	int age = -1;
//	std::cin >> first_name >> age;
//	std::cout << "Your name is " << first_name << " and age is " << age << "!\n";
//}

//======================================

//Get the ''name and age'' example to run.Then, modify it to write out the age in
//number of months : read the input in years and multiply(using the * operator) by 12.
//Read the age into a double to allow for children who can be very proud of being five
//and a half years old rather than just five.

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::cout << "Enter your name:\n";
//	std::string f_name;
//	std::cin >> f_name;
//
//	std::cout << "Enter your age in years:\n";
//	double age;
//	std::cin >> age;
//
//	double age_into_months = age * 12;
//	
//	std::cout << "Hey! " << f_name << " Your age into months is " << age_into_months << "\n";
//}

//===========================

// program to exercise operators

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::cout << "Enter a floating-point value: ";
//	double n = 0;
//	std::cin >> n;
//	std::cout << "n== " << n
//		<< "\nn+1 == " << n + 1
//		<< "\nthree times n == " << 3 * n
//		<< "\ntwice n == " << n + n
//		<< "\nn squared == " << n * n
//		<< "\nhalf of n == " << n / 2
//		<< "\nsquare root of n == " << sqrt(n)
//		<< '\n';
//}

// ==================================================

// string concatenation
//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::cout << "Enter your first name:\n";
//	std::string f_name;
//	std::cin >> f_name;
//
//	std::cout << "Enter your last name:\n";
//	std::string l_name;
//	std::cin >> l_name;
//
//	std::string name = f_name + ' ' + l_name;
//	std::cout << "Your full name is " << name << '\n';
//}

// ===========================
// detect repeated word

//#include <iostream>
//#include <string>

//int main()
//{
//	std::string previous;
//	std::string current;
//
//	while (std::cin >> current) {
//		if (previous == current)
//			std::cout << "Repeated word: " << current << '\n';
//		previous = current;
//	}
//}

// detect repeated word position

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int number_of_words = 0;
//	std::string previous;
//	std::string current;
//
//	while (std::cin >> current) {
//		++number_of_words;
//		if (previous == current)
//			std::cout << "word number " << number_of_words << " repeated: " << current << '\n';
//		previous = current;
//	}
//}

//============================

// try this -
//Compile the "Goodbye, cruel world!" program and examine the error messages.
//Did the compiler find all the errors ? What did it suggest as the problems ? Did the
//compiler get confused and diagnose more than four errors ? Remove the errors one
//by one, starting with the lexically first, and see how the error messages change(and
//	improve)

// incorrect version

//#include <iostream>
//#include <string>;
//
//int Main()
//{
//	STRING s = "Goodbye, cruel world!";
//	cOut << S << '\n';
//}

// correct version

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string s = "Goodbye, cruel world!";
//	std::cout << s << '\n';
//}

// ==========================
// conversion - narrowing and widening

//#include <iostream>
//#include <string>
//
//int main()
//{
//	double d = 0;
//	while (std::cin >> d) {
//		int i = d;
//		char c = i;
//		std::cout << "d== " << d
//			<< " i== " << i
//			<< " c== " << c
//			<< " char(" << c << ")\n";
//	}
//}

// drill
/*
After each step of this drill, run your program to make sure it is really doing what you expect it to.
Keep a list of what mistakes you make so that you can try to avoid those in the future.
[1] Write a program that produces a simple form letter based on user input. Begin by typing
the code from §2.1 prompting a user to enter his or her first name and writing ‘‘Hello,
first_name’’ where first_name is the name entered by the user. Then modify your code as
follows: change the prompt to ‘‘Enter the name of the person you want to write to’’ and
change the output to ‘‘Dear first_name ,’’. Don’t forget the comma.
[2] Add an introductory line or two, like ‘‘How are you? I am fine. I miss you.’’ Be sure to
indent the first line. Add a few more lines of your choosing – it’s your letter.
[3] Now prompt the user for the name of another friend and store it in friend_name. Add a
line to your letter: ‘‘Have you seen friend_name lately?’’
[4] Prompt the user to enter the age of the recipient and assign it to an int variable ag e. Have
your program write ‘‘I hear you just had a birthday and you are ag e years old.’’ If ag e is 0
or less or 110 or more, call simple_error("you’re kidding!") using simple_error() from
PPP_suppor t.
[5] Add this to your letter:
If your friend is under 12, write ‘‘Next year you will be ag e+1.’’ If your friend is
17, write ‘‘Next year you will be able to vote.’’ If your friend is over 70, write
‘‘Are you retired?’’
Check your program to make sure it responds appropriately to each kind of value.
[6] Add ‘‘Yours sincerely,’’ followed by two blank lines for a signature, followed by your
name.
*/

// solution
/*
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter the name of the person you want to write to :\n";
	std::string first_name;								// first_name is a var iable of type string
	std::cin >> first_name;								// read characters into first_name
	std::cout << "Dear " << first_name << ",\n";
	std::cout << "How are you? I am fine. I don't miss you.\n";

	// add another friend's name
	std::cout << "Enter friend's name :\n";
	std::string friend_name;
	std::cin >> friend_name;
	std::cout << "Have you seen " << friend_name << " lately?\n";

	// age of recipient
	std::cout << "Enter age of recipient of letter: \n";
	int age;
	std::cin >> age;
	if (age <= 0 || age >= 110) {
		std::cout << "You're kidding!";
	}
	else
	{
		std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	}
	if (age < 12) {
		std::cout << "Next year you will be " << age + 1 << '\n';
	}
	else if (age == 17) {
		std::cout << "Next year you will be able to vote\n";
	}
	else if (age > 70) {
		std::cout << "Are you retired?\n";
	}

	// ending

	std::cout << "Yours sincerely\n\n" << "Rahul";
}

*/


// 13 August 2025
// Exercises

/*
Write a program in C++ that converts from miles to kilometers. Your program should have a
reasonable prompt for the user to enter a number of miles. Hint: A mile is1.609 kilometers.
*/

/*
Solution

#include <iostream>
#include <string>

int main()
{
	std::cout << "Miles to Kilometer Converter Application\n";
	std::cout << "Enter number of miles: \n";
	double number_of_miles;
	std::cin >> number_of_miles;

	double mile_into_km = 1.609;

	double total = number_of_miles * mile_into_km;
	std::cout << number_of_miles << " miles are " << total << "km";
}
*/

/*
Write a program that doesn’t do anything, but declares a number of variables with legal and
illegal names (such as int double = 0;), so that you can see how the compiler reacts.

Solution

#include <iostream>
#include <string>

int main()
{
	int double = 0;
	double DOUBLE= 1.3;
	std::STRING string= "Hello";
	int 2x = 11;
	int @y = 2;
	int _y = 3;
	int a b = 33;
	char* = 'a';
	char a = 'a';
	std::string num = 3;
	std::string char = '\n';
	double int = 3.33;
	std::string double = "Ramesha";
	std::string __test = "Hlo";
	std::string _test = "name";
	std::string #test = "jack";
	std::string TEST = "roy";
}
*/

/*
4. Write a program that prompts the user to enter two integer values. Store these values in int
variables named val1 and val2. Write your program to determine the smaller, larger, sum, difference,
product, and ratio of these values and report them to the user.

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter two integer values: \n";
	std::cout << "First integer: \n";
	int val1;
	std::cin >> val1;

	std::cout << "Second integer: \n";
	int val2;
	std::cin >> val2;

	// check which is smaller
	if (val1 < val2) {
		std::cout << val1 << " is smaller than " << val2 << '\n';
		std::cout << val2 << " is greater than " << val1 << '\n';
	}
	else
	{
		std::cout << val2 << " is smaller than " << val1 << '\n';
		std::cout << val1 << " is greater than " << val2 << '\n';
	}

	// sum
	int sum = val1 + val2;
	std::cout << "Sum of " << val1 << " and " << val2 << " = " << sum << '\n';

	// difference
	int difference = val1 - val2;
	std::cout << "Difference between " << val1 << " and " << val2 << " = " << difference << '\n';
}

*/

/*
5. Modify the program above to ask the user to enter floating-point values and store them in
double variables. Compare the outputs of the two programs for some inputs of your choice.
Are the results the same? Should they be? What’s the difference?

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter two floating-point values: \n";
	std::cout << "First integer: \n";
	double val1;
	std::cin >> val1;

	std::cout << "Second integer: \n";
	double val2;
	std::cin >> val2;

	// check which is smaller
	if (val1 < val2) {
		std::cout << val1 << " is smaller than " << val2 << '\n';
		std::cout << val2 << " is greater than " << val1 << '\n';
	}
	else
	{
		std::cout << val2 << " is smaller than " << val1 << '\n';
		std::cout << val1 << " is greater than " << val2 << '\n';
	}

	// sum
	double sum = val1 + val2;
	std::cout << "Sum of " << val1 << " and " << val2 << " = " << sum << '\n';

	// difference
	double difference = val1 - val2;
	std::cout << "Difference between " << val1 << " and " << val2 << " = " << difference << '\n';
}
*/

/*
Write a program that prompts the user to enter three integer values, and then outputs the values
in numerical sequence separated by commas. So, if the user enters the values 10 4 6, the
output should be 4, 6, 10. If two values are the same, they should just be ordered together.
So, the input 4 5 4 should give 4, 4, 5.

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter three integer values in sequence like 10 4 6: \n";
	int val1, val2, val3;
	std::cin >> val1 >> val2 >> val3;
	if (val1 > val2)
	{
		int temp = val1;
		val1 = val2;
		val2 = temp;
	}
	if (val1 > val3)
	{
		int temp = val1;
		val1 = val3;
		val3 = temp;
	}
	if (val2 > val3)
	{
		int temp = val2;
		val2 = val3;
		val3 = temp;
	}
	
	std::cout << val1 << ',' << val2 << ',' << val3 << '\n';
}
*/

/*
7. Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway,
Fitzg erald, the output should be Fitzg erald, Hemingway, Steinbeck.
*/

/*
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter three string values in sequence like Steinbeck, Hemingway, Fitzgerald: \n";
	std::string val1, val2, val3;
	std::cin >> val1 >> val2 >> val3;

	if (val1 > val2)
	{
		std::string temp = val1;
		val1 = val2;
		val2 = temp;
	};
	if (val1 > val3)
	{
		std::string temp = val1;
		val1 = val3;
		val3 = temp;
	}
	if (val2 > val3)
	{
		std::string temp = val2;
		val2 = val3;
		val3 = temp;
	}

	std::cout << val1 << ',' << val2 << ',' << val3 << '\n';

}
*/


/*
problem 8
Write a program to test an integer value to determine if it is odd or even. As always, make
sure your output is clear and complete. In other words, don’t just output yes or no. Your output
should stand alone, like The value 4 is an even number. Hint: See the remainder (modulo)
operator in §2.4.

solution:

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter a integer values to check if it is odd or even: \n";
	int val1;
	std::cin >> val1;

	if (val1 % 2 == 0) {
		std::cout << "The value " << val1 << " is an even number";
	}
	else
	{
		std::cout << "The value " << val1 << " is an odd number";
	}
}
*/

/*
Problem 9:
Write a program that converts spelled-out numbers such as ‘‘zero’’ and ‘‘two’’ into digits,
such as 0 and 2. When the user inputs a number, the program should print out the corresponding
digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the
user enters something that doesn’t correspond, such as stupid computer!.

solution:

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter spelled-out number like 'zero' to convert into digit: \n";
	std::string num;
	std::cin >> num;

	int zero = 0;
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	if (num == "zero") {
		std::cout << num << " into digit is " << zero;
	}
	else if (num == "one") {
		std::cout << num << " into digit is " << one;
	}
	else if (num == "two") {
		std::cout << num << " into digit is " << two;
	}
	else if (num == "three") {
		std::cout << num << " into digit is " << three;
	}
	else if (num == "four") {
		std::cout << num << " into digit is " << four;
	}
	else {
		std::cout << num << " is not a number I know " << "stupid computer!.";
	}
}

*/


/*
Problem: 10
Write a program that takes an operation followed by two operands and outputs the result. For
example:
+ 100 3.14
* 4 5
*/

/*
Solution:


#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter three values in sequence operation and two operands like + 100 3.14: \n";
	std::string operation;
	double val2, val3;
	std::cin >> operation >> val2 >> val3;

	if (operation == "+")
	{
		double plus = val2 + val3;
		//std::cout << operation << ' ' << val2 << ' ' << val3 << '=' << plus;
		std::cout << val2 << " " << operation << " " << val3 << " = " << plus;
	}
	if (operation == "-")
	{
		double minus = val2 - val3;
		std::cout << val2 << " " << operation << " " << val3 << " = " << minus;
	}
	if (operation == "*")
	{
		double mul = val2 * val3;
		std::cout << val2 << " " << operation << " " << val3 << " = " << mul;
	}
	if (operation == "/")
	{
		double div = val2 / val3;
		std::cout << val2 << " " << operation << " " << val3 << " = " << div;
	}
}
*/


/*
Problem 11:
Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels
(5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent
coins), and one-dollar coins (100-cent coins). Query the user separately for the number of
each size coin, e.g., ‘‘How many pennies do you have?’’ Then your program should print out
something like this:
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quar ters.
You have 3 half dollars.
The value of all of your coins is 573 cents.
Make some improvements: if only one of a coin is reported, make the output grammatically
correct, e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents,
i.e., .73 instead of 573 cents.
*/

/*
Solution:

#include <iostream>
#include <string>

int main()
{
	std::cout << "Total Cent Calculator: \n";
	int penny, nickel, dime, quarter, half_dollar, one_dollar;
	std::cout << "How many pennies do you have?: \n";
	std::cin >> penny;
	std::cout << "How many nickels do you have?: \n";
	std::cin >> nickel;
	std::cout << "How many dimes do you have?: \n";
	std::cin >> dime;
	std::cout << "How many quarters do you have?: \n";
	std::cin >> quarter;
	std::cout << "How many half dollars do you have?: \n";
	std::cin >> half_dollar;
	std::cout << "How many dollars do you have?: \n";
	std::cin >> one_dollar;


	if (penny == 1) {
		std::cout << "You have " << penny << " penny.\n";
	}
	else {
		std::cout << "You have " << penny << " pennies.\n";
	}

	if (nickel == 1) {
		std::cout << "You have " << nickel << " nickel.\n";
	}
	else
	{
		std::cout << "You have " << nickel << " nickels.\n";
	}

	if (dime == 1) {
		std::cout << "You have " << dime << " dime.\n";
	}
	else
	{
		std::cout << "You have " << dime << " dimes.\n";
	}

	if (quarter == 1)
	{
		std::cout << "You have " << quarter << " quarter.\n";
	}
	else
	{
		std::cout << "You have " << quarter << " quarters.\n";
	}

	if (half_dollar == 1)
	{
		std::cout << "You have " << half_dollar << " half dollar.\n";
	}
	else
	{
		std::cout << "You have " << half_dollar << " half dollars.\n";
	}

	if (one_dollar == 1)
	{
		std::cout << "You have " << one_dollar << " dollar.\n";
	}
	else
	{
		std::cout << "You have " << one_dollar << " dollars.\n";
	}

	int calculate = (penny * 1) + (nickel * 5) + (dime * 10) + (quarter * 25) + (half_dollar * 50) + (one_dollar * 100);
	
	// calculate dollar only (/) division gives us quotient 1000/100 = 10
	int calc_dollar = calculate / 100;

	// calculate only cent (%) modulo operator gives us remainder ( for integer 1005%100 = 5)
	int calc_dollar_cent = calculate % 100;

	// calculate total dollar so use double and divide by 100.0 don't forget .0
	double calc_to_dollar = calculate / 100.0;

	std::cout << "The value of all of your coins is " << calculate << " cents.\n";
	std::cout << "The value of all of your coins in dollar and cent is " << calc_dollar << " dollars " << "and " << calc_dollar_cent << " cents.\n";
	std::cout << "The value of all of your coins is " << calc_to_dollar << " dollars.\n";
}
*/

/*
Problem:

make the sequence from larger to smaller 6 4 3 5 to 6 5 4 3 ?



#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter three integer values in sequence like 10 5 4: \n";
	int val1, val2, val3;
	std::cin >> val1 >> val2 >> val3;

	if (val1 < val2)
	{
		int temp = val1;
		val1 = val2;
		val2 = temp;
	}

	if (val1 < val3)
	{
		int temp = val1;
		val1 = val3;
		val3 = temp;
	}

	if (val2 < val3)
	{
		int temp = val2;
		val2 = val3;
		val3 = temp;
	}
	

	std::cout << val1 << ',' << val2 << ',' << val3 << '\n';

}
*/ 


// ==========================CHATPER 3 COMPUTATION======================================

// convert from inches to centimeters or centimeters to inches
// a suffix ’i’ or ’c’ indicates the unit of the input

/*
#include <iostream>
#include <string>

int main() {

constexpr double cm_per_inch = 2.54;
double length = 1;
char unit = ' ';

std::cout << "Enter a length followed by a unit (c or i):\n";
std::cin >> length >> unit;

if (unit == 'i')
	{
		std::cout << length << "in == " << length * cm_per_inch << "cm\n";
	}
else if(unit == 'c')
	{
		std::cout << length << "cm == " << length / cm_per_inch << "in\n";
	}
else
{
	std::cout << "Sorry, I don't know a unit called " << unit << "\n";
}

}
*/


/* 
switch statement

#include <iostream>
#include <string>

int main() {

	constexpr double cm_per_inch = 2.54;
	double length = 1;
	char unit = ' ';

	std::cout << "Enter a length followed by a unit (c or i):\n";
	std::cin >> length >> unit;

	switch (unit) {
	case 'i':
		std::cout << length << "in == " << length * cm_per_inch << "cm\n";
		break;
	case 'c':
		std::cout << length << "cm == " << length / cm_per_inch << "in\n";
		break;
	default:
		std::cout << "Sorry, I don't know a unit called " << unit << "\n";
		break;
	}
}
*/

/* 
switch can be used only on integers

#include <iostream>
#include <string>

int main() {

	std::cout << "Do you like fish?\n";
	std::string s;
	std::cin >> s;

	switch (s) { // error: value must be int, char or enum
	case "no":
		//..
		break;
	case "yes":
		//
		break;
	}
}
*/

/*
case label must be distinct and constants


#include <iostream>
#include <string>

int main() {

	int y = 'y';
	constexpr char n = 'n';

	std::cout << "Do you like fish?\n";
	char a = 0;
	std::cin >> a;

	switch (a) {
	case n:
		//...
		break;
	case y:				// y is variable
		//...
		break;
	case 'n':			// duplicatie (n's value is 'n'
		//....
		break;
	default:
		//....
		break;
	}
}
*/


/*
you can label a statement with several case labels:

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter a digit to check whether it is even or odd:\n";
	int number;
	std::cin >> number;

	switch (number) {
	case 0: case 2: case 4: case 6: case 8:
		std::cout << number << " is even\n";
		break;
	case 1: case 3: case 5: case 7: case 9:
		std::cout << number << " is odd\n";
		break;
	default:
		std::cout << "out of scope for now\n";
		break;
	}
}
*/

//======================3.4.2 Iteration=========================

/*
0 0
1 1
2 4
3 9
4 16
...
98 9604
99 9801
*/

/*
Solution

#include <iostream>

int main()
{
	int i = 0;
	while (i < 100) {
		std::cout << i << '\t' << i * i << '\n';
		++i;
	}
}
*/

/*
The character 'b' is char(’a’+1), 'c' is char(’a’+2), etc. Use a loop to write out a table of
characters with their corresponding integer values:
a 97
b 98
...
z 122
*/

/*
convert character to it's corresponding integer value

#include <iostream>
int main()
{
	char a = 'a';
	int i = a;

	std::cout << i;
}
*/

/* 
// problem
*/

/* solution
* note a = 97 in ASCII and z = 122

#include <iostream>
int main()
{
	char a = 'a';
	int i = a;

	while (i <= 'z') {			// z is treated as 122 by compiler
		std::cout << char(i) << "\t" << i << "\n";
		++i;
	}
}
*/

/*
compiler treats 'z' char as 122

#include <iostream>

int main()
{
	std::cout << 'z' + 2;
	// returns 124
}
*/

//=========================BLOCKS =======================

/*
statements delimited by{curly braces} are called block statement
blank curly braces tell nothing to do
*/


//=========================for statements =======================

/* 
#include <iostream>

int main()
{
	for (int i = 0; i < 100; ++i)
	{
		std::cout << i << '\t' << i * i << '\n';
	}
}
*/

/*
Problem
calculate and print a table of squares of even numbers in the [0:100) range:
*/

/* 
Solution
#include <iostream>

int main()
{
	for (int i = 0; i <= 100; i += 2)
	{
		std::cout << i << " = " << i * i << '\n';
	}
}
*/

// -----try this----------------

/*
Rewrite the character value example from the previous TRY THIS to use a for-statement.
Then modify your program to also write out a table of the integer values for
uppercase letters and digits.
*/

/*

#include <iostream>

int main() {

	for (int i = 'a'; i <= 'z'; ++i) {
		std::cout << char(i) << '\t' << i << '\t' << '\n';
	}

	std::cout << "===============\n===============\n";

	for (int i = 'A'; i <= 'Z'; ++i) {
		std::cout << char(i) << '\t' << i << '\t' << '\n';
	}
}
*/

//==================3.5 Functions=======================
//==================3.5 Vectors =======================


// print elements of vector
/*
#include <iostream>
#include <vector>
int main()
{
	std::vector<int> v = { 5,7,9,4,6,8 };

	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << '\n';
	}
}
*/

// The call v.siz e() gives the number of elements of the vector called v.
// The range for a vector v is [0:v.siz e()).

/*
range for loop
*/

/*


#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 9, 4, 2, 4, 1, 5 };
	for (int x : v) {		// for each x in v
		std::cout << x << '\n';
	}
}
*/


//==========================3.6.2 GROWING A VECTOR=========================
// push_back() member function call to add element in vector
// size() get size of vector


// example 1

/*
#include <iostream>
#include <vector>
#include <string>

int main()

// read some temperature into a vector
{
	std::vector<double> temps;
	for (double temp; std::cin >> temp;) {
		temps.push_back(temp);
		// ... do something ....
	}
	for (int i = 0; i < temps.size(); ++i) {
		std::cout << temps[i] << '\n';
	}
}
*/


/* Calculate mean and median temperature */

/*

#include <iostream>
#include <vector>
#include <string>
#include <ranges>
#include <algorithm>

int main()

// calculate mean and median
{
	std::vector<double> temps;
	for (double temp; std::cin >> temp;) {
		temps.push_back(temp);
	}

	// compute mean temperature

	double sum = 0;
	for (double x : temps) {
		sum += x;
	}
	std::cout << "Average temperature: " << sum / temps.size() << '\n';


	// compute median temperature if vector size is odd
	std::ranges::sort(temps);

	std::cout << "Median Temperature: " << temps[temps.size() / 2] << '\n';

	// for (int x : temps) {
		// std::cout << x << '\n';
}
*/


/* text example dictionary */

/*
error code

#include <iostream>
#include <vector>
#include <string>
#include <ranges>
#include <algorithm>

int main()
// simple dictionary: list of sorted words
{
	std::vector<std::string> words;
	for (std::string temp; std::cin >> temp; ) // read whitespace-separated words
		words.push_back(temp); // put into vector
	std::cout << "Number of words: " << words.size() << '\n';
	
	std::ranges::sort(words); //sor t the words
	
	for (int i = 0; i < words.size(); ++i) 
	{
		if (i == 0 || words[i-1] != words[i]) // is this a new word?
			std::cout << words[i] << "\n";
	}
}
*/

/*
questions related to vector
looking at every third element of a vector, looking at only the second half of a vector, or comparing
elements of two vectors,
*/

//================================15 AUGUST===========================
//=================================DRILL==============================

/*
Write a program that consists of a while-loop that (each time around the loop) reads in
two ints and then prints them. Exit the program when a terminating '|' is entered.
*/

/*
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter two ints:\n";
	int numA;
	int numB;
	while (std::cin >> numA, std::cin >> numB ) {
		std::cout << numA << '\t' << numB;
		if (numA || numB == '|')
			exit;
	}
}
*/

/*
Program 2
Change the program to write out the smaller value is: followed by the smaller of the numbers
and the larger value is: followed by the larger value.
*/

/*
Program 3
Augment the program so that it writes the line the numbers are equal (only) if they are
equal.
*/

/*
Solution
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter two ints:\n";
	int numA;
	int numB;
	while (std::cin >> numA, std::cin >> numB) {
		std::cout << numA << '\t' << numB << '\n';

		// terminate program if someone enters '|'
		if (numA || numB == '|')
			exit;

		// check which number is greater and smaller
		if (numA < numB)
		{
			std::cout << "The smaller value is " << numA << '\n';
			std::cout << "The larger value is " << numB << '\n';
		}
		else if (numB < numA)
		{
			std::cout << "The smaller value is " << numB << '\n';
			std::cout << "The larger value is " << numA << '\n';
		}

		// check if both numbers are equal
		else if (numA == numB)
		{
			std::cout << "The numbers are equal\n";
		}


	}
}
*/

/*
Program 4
Change the program so that it uses doubles instead of ints.
*/

/*

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter two decimal values like 20.3:\n";
	double numA;
	double numB;
	while (std::cin >> numA, std::cin >> numB) {
		std::cout << numA << '\t' << numB << '\n';

		// terminate program if someone enters '|'
		if (numA || numB == '|')
			exit;

		// check which number is greater and smaller
		if (numA < numB)
		{
			std::cout << "The smaller value is " << numA << '\n';
			std::cout << "The larger value is " << numB << '\n';
		}
		else if (numB < numA)
		{
			std::cout << "The smaller value is " << numB << '\n';
			std::cout << "The larger value is " << numA << '\n';
		}

		// check if both numbers are equal
		else if (numA == numB)
		{
			std::cout << "The numbers are equal\n";
		}
	}
}
*/

/*
Problem 5
Change the program so that it writes out the numbers are almost equal after writing out
which is the larger and the smaller if the two numbers differ by less than 1.0/100.
*/

/*
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter two decimal values like 20.3:\n";
	double numA;
	double numB;
	double larger{};
	double smaller{};

	while (std::cin >> numA, std::cin >> numB) {
		std::cout << numA << '\t' << numB << '\n';

		// terminate program if someone enters '|'
		if (numA || numB == '|')
			exit;

		// check which number is greater and smaller
		if (numA < numB)
		{
			std::cout << "The smaller value is " << numA << '\n';
			std::cout << "The larger value is " << numB << '\n';
			larger = numB;
			smaller = numA;
		}
		else if (numB < numA)
		{
			std::cout << "The smaller value is " << numB << '\n';
			std::cout << "The larger value is " << numA << '\n';
			larger = numA;
			smaller = numB;
		}
		// check if both numbers are equal
		if (numA == numB)
		{
			std::cout << "The numbers are equal\n";
		}

		// Change the program so that it writes out the numbers are almost equal after writing out which is the larger and the smaller if the two numbers differ by less than 1.0 / 100.
		if (larger - smaller < (1.0 / 100))
		{
			std::cout << "The numbers are almost equal\n";
		}
	}
}
*/


/*
Problem 6
Now change the body of the loop so that it reads just one double each time around.
Define two variables to keep track of which is the smallest and which is the largest value
you have seen so far. Each time through the loop write out the value entered. If it’s the
smallest so far, write the smallest so far after the number. If it is the largest so far, write
the largest so far after the number.
*/

/*
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter a decimal values like 20.3:\n";
	double numA;
	double smallest, largest;

	bool first = true;			// know if this is first input

	while (std::cin >> numA) {
		std::cout << "You have entered " << numA << '\n';

		if (first) {
			smallest = numA;
			largest = numA;
			first = false;
		}

		if (numA < smallest) {
			smallest = numA;
			std::cout << "smallest so far:" << smallest << '\n';
		}
		if (numA > largest) {
			largest = numA;
			std::cout << "largest so far:" << largest << '\n';
		}
	}
}
*/

// =========================sort a vector=========================

/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vectorA = { 1,2,4,2,7,9,8 };
	std::vector<int> vectorB = { 1,2,4,2,7,9,8 };

	// ascending order
	std::sort(vectorA.begin(), vectorA.end());

	// descending order
	std::sort(vectorB.begin(), vectorB.end(), std::greater<int>());

	std::cout << "Here is the sorted version of vector num: \n";

	for (int x : vectorA) {
		std::cout << x << " ";
	}
	std::cout << "\n=================\n";
	for (int x : vectorB) {
		std::cout << x << " ";
	}
}
*/


// ==================sort a vector in ascending (default) cpp 20 =========================

/*
#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include <algorithm>

int main()
{
	std::vector<int> numbers = { 2,3,1,4,2,5,6,2,67,32 };
	std::ranges::sort(numbers);

	for (int num : numbers) {
		std::cout << num << '\n';
	}
}
*/


// ==================sort a vector in descending order cpp 20 =========================
/*

#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include <algorithm>

int main()
{
	std::vector<int> numbers = { 2,3,1,4,2,5,6,2,67,32 };
	std::ranges::sort(numbers, std::greater{});

	for (int num : numbers) {
		std::cout << num << '\n';
	}
}
*/


// ================ std::greater{}==============

/*
#include <iostream>
#include <algorithm>

int main() {
	std::greater<int> compare;
	std::cout << compare(5, 2);			// 1 which means true
}
*/


//===================================16 August ===============================

// Exercise
/*
Write a program that reads a string from input and then, for each character read, prints out the character and its integer value on a line.
*/

/*

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter a string: \n";
	std::string text;

	//std::cin >> text;			// std::cin only reads until the first space so use getline

	std::getline (std::cin, text);

	std::cout << "You entered: " << text << '\n';

	for (int i = 0; i < text.size(); ++i)
	{	
		std::cout << "character" << '\t' << "Integer value" << '\n';
		std::cout << text[i] << '\t' << '\t';
		// std::cout << int(text[i]) << '\n';								// c-style cast
		std::cout << static_cast<int>(text[i]) << '\n';					// cpp cast
	}
}
*/


/*
Problem
Read a sequence of double values into a vector. Think of each value as the distance between
two cities along a given route. Compute and print the total distance (the sum of all distances).
Find and print the smallest and greatest distance between two neighboring cities.
Find and print the mean distance between two neighboring cities.
*/

/*
Solution


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	// we can declare the vector with values but we will take input and store it into vector
	// std::vector<double>distances = {20.33, 44.35, 29.37, 89.33, 45.4};					// here each value represents distance between two cities along a given route
	
	std::cout << "Enter a sequence of double values like 20.3 40.33 22.3: (use ctrl D to stop): \n";
	
	std::vector<double>distances;
	double input;

	// keep reading the input until it stops (ctrl D)
	// question how to take input and store it in vector? 
	// ans - use pushback()

	while (std::cin >> input) {
		distances.push_back(input);
	}

	double total_distance = 0;

	for (int i = 0; i < distances.size(); ++i)
	{	
		total_distance += distances[i];
	}
	std::cout << "Total distance is " << total_distance << '\n';


	// Find and print the smallest and greatest distance between two neighboring cities.

	auto [min_it, max_it] = std::ranges::minmax_element(distances);
	std::cout << "Smallest distance = " << *min_it << '\n';
	std::cout << "Greatest distance = " << *max_it << '\n';

	// find minimum and maximum values in the whole vector
	std::vector<double> sorted_values = distances;

	if (!distances.empty()) {				// !distances.empty() means "vector is NOT empty"
		std::ranges::sort(sorted_values);
		std::cout << "Smallest distance for whole vector= " << sorted_values[0] << '\n';
		std::cout << "Greatest distance for whole vector= " << sorted_values[sorted_values.size()-1] << '\n';
	}

	else
	{
		std::cout << "Distances values is empty";
	}

	// Find and print the mean distance between two neighboring cities.


	if (!distances.empty()) {
		double mean = total_distance / distances.size();
		std::cout << "Mean:" << mean << '\n';
	}
}
*/














// boilerplate
/*
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter two ints:\n";
}
*/