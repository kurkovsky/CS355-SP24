#include <stdio.h>

// An example of three kinds of loops in C
// Each is designed to produce identical output:
// 0 1 2 3 4 5 6 7 8 9 

int main(){
    int i=0;

    while(i<10){                // a loop with a post-condition: while
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i=0;
    do {                        // a loop with a pre-condition: do/while
        printf("%d ", i);
        i++;
    } while(i<10);
    printf("\n");
    
    for(i=0; i<10; i++){        // a counter-controlled loop: for
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}