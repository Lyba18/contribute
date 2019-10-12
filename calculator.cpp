#include <iostream>

using namespace std;
float operation(float num1, float num2, char oper);
int main()
{
	float n1, n2, result;
	char oper;
	cout << "The program is calculator of basic calculations ";
	cout << "\nEnter 1st Operand : ";
	cin >> n1;
	cout << "Enter 2nd Operand : ";
	cin >> n2;
	cout << "Enter operator : ";
	cin >> oper;
	result = operation(n1, n2, oper);

	cout << "This result of integer expression is : " << result << endl;
	system("pause");
	return 0;
}

float operation(float num1, float num2, char oper)
{
	while (true)
	{
		switch (oper)
		{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			if(num1>num2)
			return num1 / num2;
			else 
			return num2/num1;
			break;
		default:
			cout << "!!wrong operator!!\nSelect one from the following (+,-,*,/)";
			cin >> oper;
			break;
		}
	}
}
