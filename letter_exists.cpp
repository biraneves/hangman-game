#include "letter_exists.h"

bool letter_exists(char &guess, std::string &secret_word) {

  for (char letter : secret_word) {

    if (guess == letter)
      return true;

  }

  return false;

}