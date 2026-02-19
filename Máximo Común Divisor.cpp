#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }
    return a;
}

int main() {
    int a = 48, b = 18;
    cout << "El MCD es: " << mcd(a, b) << endl;
    return 0;
}
