int main() {
    int choice;
    std::cout << "Menu:\n";
    std::cout << "1) Oblicz silnię\n";
    std::cout << "2) Wyjście\n";
    std::cout << "Wybierz opcję: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            int n;
            std::cout << "Podaj n: ";
            std::cin >> n;


unsigned long long factorial(int n) {

    if (n < 0) return 0; 

    if (n == 0 || n == 1) return 1;

    unsigned long long result = 1;

    for (int i = 2; i <= n; ++i) {

        result *= i;

    }

    return result;

}

         unsigned long long result = factorial(n);

         std::cout << "Silnia(" << n << ") = " << result << std::endl;
         break;
     }
     case 2:
         return 0;
     default:
         std::cout << "Nieprawidłowa opcja\n";
 }
 return 0;

