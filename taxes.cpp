#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    double input;
    double tax = 0;
    std::cin >> input;
    std::cout << std::setprecision(2) << std::fixed; // Set precision to 2 decimal places
    if (input < 2000) {
        std::cout << "Isento" << std::endl;
    }
    else if (input > 2000 && input <= 3000) {
        tax = 0.08 * (input - 2000);
        std::cout << "R$ " << tax << std::endl;
    }
    else if (input > 3000 && input <= 4500) {
        tax = 0.08 * 1000 + 0.18 * (input - 3000);
        std::cout << "R$ " << tax << std::endl;
    }
    else if (input > 4500) {
        tax = 0.08 * 1000 + 0.18 * 1500 + 0.28 * (input - 4500);
        std::cout << "R$ " << tax << std::endl;
    }
   
    return 0;
}
