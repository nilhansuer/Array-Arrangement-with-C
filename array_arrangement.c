#include <stdio.h>

void arrange(int array[], int n){
    int i, j, num1, num2, num3, num4, m;
    for(i=0; i <= n-1; i+=2){
        num1 = array[i];
        num2 = array[i+1];
        if(num1 > num2){
            array[i] = num2;
            array[i+1] = num1;
        }
    }
    for(j=1; j <= n-1; j+=2){
        num3 = array[j];
        num4 = array[j+1];
        if(num3 < num4){
            array[j] = num4;
            array[j+1] = num3;
        }
    }
}

void printArray(int array[], int size){
    printf("the new array after rearranging: \n");
    for(size=0; size <= 5; size++){
        printf("%d ", array[size]);
    }
}

int main(){
    int array[] = {6, 4, 2, 1, 8, 3};
    int i;
    printf("the array given is: \n");
    for(i=0; i <= 5; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    arrange(array, 6);
    printArray(array, 6);
    
}

