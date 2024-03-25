#include <stdio.h>

int main() {
    int intarray[5] = {10,20,30,40,50};
    //-----------------------^
    int *pointer = &intarray[2];

    int *parray[3];

    int i;
    for (i = 0; i < 3; i++) {
        parray[i] = pointer + i;
    }

    for (i = 0; i < 3; i++) {
        if (parray[i] == &pointer[i]) {
            printf("Matched!\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}

