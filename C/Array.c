#include<stdio.h>

int main(){
    int grades[3];
    int avarage;

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    avarage = (grades[0] + grades [1] + grades[2]) / 3;

    printf("The Avarage of 3 Grade is: %d",avarage);
    
    return 0;
}