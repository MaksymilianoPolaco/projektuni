#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int choice;
    std::cout << "Menu:\n";
    std::cout << "1) Sprawdź, czy liczba jest pierwsza\n";
    std::cout << "2) Oblicz silnię\n";
    std::cout << "3) Wyjście\n";
    std::cout << "Wybierz opcję: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            int n;
            std::cout << "Podaj n: ";
            std::cin >> n;
            if (isPrime(n))
                std::cout << n << " jest liczbą pierwszą\n";
            else
                std::cout << n << " nie jest liczbą pierwszą\n";
            break;
        }
        case 2: {
            int n;
            std::cout << "Podaj n: ";
            std::cin >> n;
            unsigned long long result = factorial(n);
            std::cout << "Silnia(" << n << ") = " << result << std::endl;
            break;
        }
        case 3:
            return 0;
        default:
            std::cout << "Nieprawidłowa opcja\n";
    }
    return 0;
}

