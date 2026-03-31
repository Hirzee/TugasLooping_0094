#include <iostream>
using namespace std;

int n;
int pilihan;

int isPrima(int n) {
    if (n <= 1) return 0;

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

int isFibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return 1;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

void inputData() {
    cout << "Masukkan bilangan: ";
    cin >> n;
}


void outputPrima() {
    if (isPrima(n) == 1) {
    cout << n << " adalah bilangan prima.\n";
    } else {
    cout << n << " bukan bilangan prima.\n";
    }
}

void outputFibonacci() {
    if (isFibonacci(n) == 1) {
    cout << n << " termasuk bilangan Fibonacci.\n";
    } else {
    cout << n << " bukan bilangan Fibonacci.\n";
    }
}

void tampilMenu() {
    cout << "\n========== MENU ==========\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}
