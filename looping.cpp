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
