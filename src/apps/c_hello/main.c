/* vim: set sw=2 expandtab tw=80: */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <tock.h>
#include <firestorm.h>

char hello[] = "Hello World!\r\n";

int nop(int x, int y, int z, void *ud) {}

void main() {
  putnstr_async(hello, sizeof(hello), nop, NULL);

  while(1) wait();
}

