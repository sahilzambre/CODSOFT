// Basic Calculator

#include<iostream>
using namespace std;

int main()
{
    double num1 , num2;
    char op;

    cout<<"Enter the operator (+ - / *) : ";
    cin>>op;

    cout<<"Enter the first number : ";
    cin>>num1;

    cout<<"Enter the second number : ";
    cin>>num2;

    switch (op)
    {
        case '+':
            cout << num1 << " "<< op  << " " << num2  << " " << "=" << " " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " "<< op  << " " << num2  << " " << "=" << " " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " "<< op  << " " << num2  << " " << "=" << " " << num1 * num2 << endl;
            break;

        case '/':
            if(num2 == 0.0){
                cout << "Divide by zero situation" << endl;
            }
            else{
                cout << num1 << " "<< op  << " " << num2  << " " << "=" << " " << num1 / num2 << endl;
            }
            break;

        default:
            cout << "Invalid Operator" << endl;

    }

    return 0;

}