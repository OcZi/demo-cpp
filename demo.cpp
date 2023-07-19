#include <iostream>

int fibonacci(int i) {
    if (i < 1) {
        return 0;
    } else if (i == 1) {
        return 1;
    }

    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main() {
  std::string name;
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "\n";
  std::cout << "Hello " << name << "\n";
  std::cout << "Fibonacci from 1 to 20:" << "\n";
  for (int i = 1; i <= 20; i++) {
    std::cout << "Fibonacci(" << i << "): " << fibonacci(i) << "\n";
  }
}
