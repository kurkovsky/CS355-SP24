#include <stdio.h>

// how to work with command line parameters

int main(int ac, char *av[]) {      // ac: argument count
    for(int i=0; i<ac; i++) {       // av: argument values
        printf("Parameter %d: %s\n", i, av[i]);
    }
	return 0;
}