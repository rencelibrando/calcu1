#include <iostream>
#include <conio.h>
#include <vector>
#include <cmath>
#include <tuple>
using namespace std;

int addition()
{
    int NumOfNum;
    cout << "how many number you want to ADD: " << endl;
    cin >> NumOfNum;
    vector<int> numbers(NumOfNum);
    for (int i = 0; i < NumOfNum; i++) {
        cout << "enter number " << i + 1 << ": " << endl;
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < NumOfNum; i++) {
        sum += numbers[i];
    }
    cout << "the sum of numbers is: " << endl;
    return sum;
}
int Subtraction()
{
    int NumbersOf;
    cout << "how many number you want to SUBTRACT: " << endl;
    cin >> NumbersOf;
    vector<int>numbers(NumbersOf);
    for (int i = 0; i < NumbersOf; i++) {
        cout << "enter number " << i + 1 << ": " << endl;
        cin >> numbers[i];
    }
    int difference = numbers[0];
    for (int i = 1; i < NumbersOf; i++) {
        difference -= numbers[i];
    }
    cout << "the difference of numbers is: " << endl;
    return abs(difference);
}
int multiplication()
{
    int NumbersOf;
    cout << "how many number you want to MULTIPLY: " << endl;
    cin >> NumbersOf;
    vector<int>numbers(NumbersOf);
    for (int i = 0; i < NumbersOf; i++) {
        cout << "enter number " << i + 1 << ": " << endl;
        cin >> numbers[i];
    }
    int product = numbers[0];
    for (int i = 1; i < NumbersOf; i++) {
        product *= numbers[i];
    }
    cout << "the product of numbers is: " << endl;
    return product;
}
double division()
{
    int NumbersOf;
    cout << "how many number you want to DIVIDE: " << endl;
    cin >> NumbersOf;
    vector<int>numbers(NumbersOf);
    for (int i = 0; i < NumbersOf; i++) {
        cout << "enter number " << i + 1 << ": " << endl;
        cin >> numbers[i];
    }
    int quotient = numbers[0];
    for (int i = 1; i < NumbersOf; i++) {
        quotient /= numbers[i];
    }
    cout << "the quotient of numbers is: " << endl;
    return quotient;
}
const double SquareRoot()
{
    double num1;
    cout << "Enter the number you want to know its SQUAREROOT" << endl;
    cout << "enter the number: ";
    cin >> num1;
    double Sq = sqrt(num1);
    return Sq;
}
double cosine()
{
    double angleDegrees, radian;
    const double pi = 3.14159;
    cout << "enter  the angle in DEGREES:" << endl;
    cin >> angleDegrees;
    radian = angleDegrees * (pi / 180);
    double cosin = cos(radian);
    cout << "cos(" << angleDegrees << ") = ";
    return cosin;
}
double sine()
{
    double angleDegrees, radian;
    const double pi = 3.14159;
    cout << "enter  the angle in DEGREES:" << endl;
    cin >> angleDegrees;
    radian = angleDegrees * (pi / 180);
    double sinen = sin(radian);
    cout << "sin(" << angleDegrees << ") = ";
    return sinen;
}
double tangent()
{
    double angleDegrees, radian;
    const double pi = 3.14159;
    cout << "enter  the angle in DEGREES:" << endl;
    cin >> angleDegrees;
    radian = angleDegrees * (pi / 180);
    double tange = tan(radian);
    cout << "tan(" << angleDegrees << ") = ";
    return tange;
}
double FahrenheitToCelcius()
{
    double fahrenheit;
    cout << "enter the temperature in fahrenheit: " << endl;
    cin >> fahrenheit;
    double celcius = (fahrenheit - 32) / 1.8;
    cout << "the temparature in celcius is: " << endl;
    return celcius;
}
int main()
{
    int Op;
    char exit;
    do {
        cout << "------------------------WELCOME TO MY CALCULATOR------------------------" << endl;
        cout << "1.addition: " << endl;
        cout << "2.Subtraction: " << endl;
        cout << "3.multiplication: " << endl;
        cout << "4.division: " << endl;
        cout << "5.Square root: " << endl;
        cout << "6.cos: " << endl;
        cout << "7.Tan: " << endl;
        cout << "8.sin: " << endl;
        cout << "9.convertion fahrenheit to celcius: " << endl;
        cout << "-------------------------------------------------------------------------" << endl;
        cout << "Choose the operator you want to use: " << endl;
        cin >> Op;
        cout << "-------------------------------------------------------------------------" << endl;

        if (Op == 1) {
            cout << addition();
        }
        else if (Op == 2) {
            cout << Subtraction();
        }
        else if (Op == 3) {
            cout << multiplication();
        }
        else if (Op == 4) {
            cout << division();
        }
        else if (Op == 5) {
            cout << SquareRoot();
        }
        else if (Op == 6) {
            cout << cosine();
        }
        else if (Op == 7) {
            cout << tangent();
        }
        else if (Op == 8) {
            cout << sine();
        }
        else if (Op == 9){
            cout << FahrenheitToCelcius();
        }
        else {
            cout << "invalid operator";
        }
        cout << "\nDo you want to continue? (Y/N): ";
        cin >> exit;
        system("CLS");
    } while (exit == 'Y' || exit == 'y');

    return 0;
}