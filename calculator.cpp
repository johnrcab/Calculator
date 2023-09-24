#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif

	string title = "Welcome to the simple calculator.";
	int first;
	int second;
	string method;
	string first_input = "Enter first number: ", second_input = "Enter second number: ";
	string display_one = "1. ", display_two = "2. ", display_three = "3. ", display_four = "4. ";
	string one = "1", two = "2", three = "3", four = "4";
	string add = "Add", subract = "Subtract", multiply = "Multiply", divide = "Divide";
	string result = "The result is: ";
	string invalid = "You entered an invalid character.";

	cout << title << endl;
	cout << first_input;
	cin >> first;
	cout << '\n' << "Available operations:" << endl;
	cout << display_one << add << endl << display_two << subract << endl << display_three << multiply << endl << display_four << divide << endl << "Select operation: ";
	cin >> method;
	cout << '\n' << second_input;
	cin >> second;

	if (method == one) {
		cout << result << first + second << endl;
	} else if (method == two) {
		cout << result << first - second << endl;
	} else if (method == three) {
		cout << result << first * second << endl;
	} else if (method == four) {
		cout << result << first / second << endl;
	} else {
		cout << invalid << endl;
	}
}
