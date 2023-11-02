#include <iostream>
#include <vector>
#include <ios>

// POST: Converts the letter to upper case.
void char_to_upper(char& letter) {
  if ('a' <= letter && letter <= 'z') {
    letter -= 'a' - 'A';  // 'a' > 'A'
  }
}

// POST: Converts all letters to upper-case.
void to_upper(std::vector<char>& letters) {
  for (unsigned int i = 0; i < letters.size(); ++i) {
    char_to_upper(letters.at(i));
  }
}

int main () {
  // Say to std::cin not to ignore whitespace.
  std::cin >> std::noskipws;
  
  std::vector<char> letters;
  char ch;
  
  // Step 1: Read input.
  do {
    std::cin >> ch;
    letters.push_back(ch);
  } while (ch != '\n');
  
  // Step 2: Convert to upper-case.
  to_upper(letters);
  
  // Step 3: Output.
  for (unsigned int i = 0; i < letters.size(); ++i) {
    std::cout << letters.at(i);
  }
  return 0;
}