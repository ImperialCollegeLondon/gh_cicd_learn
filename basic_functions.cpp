#include <iostream>

using namespace std;

// Function to add two numbers.
int add(int a, int b) 
{
    return a + b;
}

// Function to subtract two numbers.
int sub(int a, int b) 
{
    return a - b;
}

int main()
{
    int a = 1;
    int b = 5;
    cout << "Addition result is "<< add(a, b) << endl;
    cout << "Subtraction result is "<< sub(a, b) << endl;
    return 0;
}