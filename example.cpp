#include <iostream>

bool less(int a, int b) {
  return a < b;
}

bool is_negative(int a) {
  return less(a, 0);
}

int abs(int x) {
  if (is_negative(x))
    return -x;
  else
    return x;
}

int main() {
  std::cout << abs(-10) << "\n"          // 10
            << abs(10) << "\n"           // 10
            << is_negative(10) << "\n"   // false
            << is_negative(-10) << "\n"  // true 
            << less(1, 0) << "\n";       // false
} 
