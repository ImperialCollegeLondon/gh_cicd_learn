#include <iostream>

using namespace std;

int add(int a, int b) 
{
    return a + b;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = add(a, b);
    cout << "Addition result is "<< c << endl;
    return 0;
}