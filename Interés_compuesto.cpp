#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P = 1000;   // capital
    double r = 0.05;   // tasa
    int t = 3;         // tiempo

    double A = P * pow(1 + r, t);

    cout << "Monto final: " << A << endl;
    return 0;
}
