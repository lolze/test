#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "1st root " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "2nd root " << x << endl;
    }
    else
    {
        cout << "No roots" << endl;
    }

    return 0;
} //asdas