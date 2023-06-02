#include <iostream>
using namespace std;
/*
int main() {
	std::cout << (unsigned int)-1234;
}
#include <iostream>
using namespace std;
*/

// attempting to make pea brain calculator, absolute basics
int main() {
	bool repeat = true;

	char oper;
	float num1, num2;

	cout << "Pick a operator: +, -, *, /";
	cin >> oper;

	cout << "Pick two numbers fatty";
	cin >> num1 >> num2;

	switch (oper) {
	case '+':
		cout << num1 << '+' << num2 << '=' << num1 + num2;
		break;
	case '-':
		cout << num1 << '-' << num2 << '=' << num1 + num2;
		break;
	case '*':
		cout << num1 << '*' << num2 << '=' << num1 + num2;
		break;
	case '/':
		cout << num1 << '/' << num2 << '=' << num1 + num2;
		break;
	default:
		cout << "Wrong/invalid operator, pick from +, -, *, /";
		break;

	}
	return 0;

}

