#ifndef D_CircularBuffer_H
#define D_CircularBuffer_H

typedef struct CircularBufferStruct* CircularBuffer;

// Option no ADT: CircularBufferStruct defined in header file. The structure of CircularBuffer
// is accessible from outside the CircularBuffer.h module
// typedef struct CircularBufferStruct {
//    int count;
//    int index;
//    int outdex;
//    int capacity;
//    int *values;
//} CircularBufferStruct;

CircularBuffer CircularBuffer_Create(int capacity);
void CircularBuffer_Destroy(CircularBuffer);
int CircularBuffer_IsEmpty(CircularBuffer);
int CircularBuffer_IsFull(CircularBuffer);
int CircularBuffer_Put(CircularBuffer, int);
int CircularBuffer_Get(CircularBuffer);
int CircularBuffer_Capacity(CircularBuffer);
void CircularBuffer_Print(CircularBuffer);
int CircularBuffer_VerifyIntegrity(CircularBuffer);
#endif /* D_CircularBuffer_H */
