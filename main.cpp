#include <iostream>
using namespace std;
int main() {
cout << "=== zavdannya Begin 29 ===" << endl;
double A, B;
cout << "Vvedit A (A !=0): ";
cin >> A;
cout << "Vvedit B: ";
cin >>B;
double x = -B / A;
cout << "x = " << x << endl  << endl << endl;

cout << "=== zavdannya Begin16 ===" << endl;
double x_val;
cout << "Vvedit x: ";
cin >> x_val;
double x2 = x_val * x_val;
double x6 = x2 * x2 * x2;
double y = 3 * x6 -6 * x2 -7; 
cout << "y = " << y << endl << endl;

cout << "=== zavdannya Begin8 ===" <<endl;
double a, b;
cout << "Vvedit a: ";
cin >> a;
cout << "Vvedit b: ";
cin >> b;
double average = (a + b) / 2.0;
cout << "Serednie = " << average << endl;
return 0;
}
