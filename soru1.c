#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int dizi1[5];
    int dizi2[5];
    for(int i=0;i<5;++i){
        scanf("%d",&dizi1[i]);
    }
    
    for(int i=0;i<5;++i){
        scanf("%d",&dizi2[i]);
    }
    
    insertionSort(dizi1,5);
    insertionSort(dizi2,5);
    
    int dizi3[5];
    
    for(int i=0;i<5;++i){
       dizi3[i]=(dizi1[i]*10) + (dizi2[i]);
    }
    
    printf("%d",dizi3[2]);
    
    return 0;
}
