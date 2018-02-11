#include <stdio.h>
#include <stdlib.h>

int main()
{
    // integer x is assigned 3 (x is stored on the stack)
    int x = 3;

    // pointer to integer p  (p is stored on the stack)
    int *p;

    // assign the address of x to p
    p = &x;

    printf("\nx = %d\n",x);
    printf("\nAddress for x: %p\n",p);
    printf("\ndereference whats on that address:\n*p on &x => %d\n\n",*p); // dereferencing p (meaning see what at the pointers locating)

    // sets ptr to point to the start of our allocated memory (the address)
    // which has a size of int (typically 4 bytes on 32- and 64-bit systems)
    // the allocated memory cant be used by other programs, so its
    // important to free it again. (else we get memory leaks)
    // when we malloc we allocate in heap memory
    int *ptr = malloc(sizeof(int));

    printf("%p\n",ptr);

    // another and better way to archive the same
    // int *ptr = malloc(sizeof(*ptr));

    // we allocate another piece of memory
    int *ptr2 = malloc(sizeof(ptr2));

    // assign the value '42' to the allocated memory starting from the address
    // in heap pointed by ptr
    *ptr = 42;

    // same ^
    *ptr2 = 7;

    // lets free the memory again
    free(ptr);
    free(ptr2);
}
