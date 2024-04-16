#include <iostream>
#include <string>


std::string removeBetween(std::string& input) {
  size_t plus_pos = input.find('+');
  size_t at_pos = input.find('@');

  if (plus_pos != std::string::npos && plus_pos < at_pos) {
    return input.substr(0, plus_pos) + input.substr(at_pos);
  } else {
    return input;
  }
}

int main() {
    std::string unFiltered;


    std::cin >> unFiltered;

  std::string output = removeBetween(unFiltered);

  std::cout << output;

  return 0;
}
