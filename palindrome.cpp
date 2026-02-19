# Practica1ALSE
#include <iostream>
using namespace std;

bool esPalindromo(int x) {
    if (x < 0) return false;

    int original = x;
    int reverso = 0;

    while (x != 0) {
        int digito = x % 10;
        reverso = reverso * 10 + digito;
        x /= 10;
    }

    return original == reverso;
}

int main() {
    int num = 121;

    if (esPalindromo(num))
        cout << "Es palindromo" << endl;
    else
        cout << "No es palindromo" << endl;

    return 0;
}
