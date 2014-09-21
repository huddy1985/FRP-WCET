#include <stdio.h>
#include <stdlib.h>
 #include <stdbool.h>
//size of SPM is assumed to be 16 KB = 16384 Bytes
#define SPM_SIZE 16 




//Data structure of memblock of SPM
typedef struct {
    unsigned short  set;    // SPM line
    unsigned short  tag;    // valid tag
} memory_block;

typedef struct {
    unsigned short  valid;  // valid == 0 means empty mempry block
    unsigned short  tag;    // memory block tag
} memory_block_tag;

//scratch pad memory management unit
void SPM_management_unit();

char* SPM_Read();
void SPM_Write();
bool Search_Data(char* location);
