#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float f, c = 5, kelvin;
    cout << "== Fahrenheit to Kelvin converter ==\n" << "Enter Fahrenheit:\n";
    cin >> f;
    f -= 32;
    c /= 9;
    kelvin = f * c + 273.15;
    cout << fixed;
    cout << setprecision(1);
    cout << "Kelvin: " << kelvin << endl;
    return 0;
}
