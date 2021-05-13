#include <stdio.h>

#include "CircularBuffer.h"

int main() {
  printf("Hello, Abstract Data Type!\n");

  CircularBuffer circularBuffer1 = CircularBuffer_Create(10);
  CircularBuffer circularBuffer2 = CircularBuffer_Create(20);
  int empty1 = CircularBuffer_IsEmpty(circularBuffer1);
  int empty2 = CircularBuffer_IsEmpty(circularBuffer2);
  //    int i = circularBuffer1->capacity;//Fails in Option ADT but is accessible in Option no ADT
  printf("Capacity of circularBuffer1: %d\n", CircularBuffer_Capacity(circularBuffer1));
  printf("Capacity of circularBuffer2: %d\n", CircularBuffer_Capacity(circularBuffer2));
  return 0;
}
