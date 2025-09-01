// Created by Ethan Lam on 8/31/25.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void rand_string(char *str, size_t size) {
  const char letters[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
  const size_t letterSize = sizeof(letters) - 1;

  if (size == 0) {
    str[0] = '\0';
    return;
  }

  for (size_t i = 0; i < size; i++) {
    int input = rand() % lettersSize;
    str[i] = letters[input]
   }
   str[size] - '\0'
}
