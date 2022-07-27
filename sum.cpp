#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "This program adds two numbers!" << endl;
    cout << "The first number is ";

    cin >> num1;

    cout << "The second number is ";

    cin >> num2;

    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "!" << endl;

    return 0;
}