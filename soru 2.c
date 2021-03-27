#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sayisec(char* dizi){
    
    if(strcmp(dizi,"1") == 0 || strcmp(dizi,"bir") == 0) return 1;
    if(strcmp(dizi,"2") == 0 || strcmp(dizi,"iki") == 0) return 2;
    if(strcmp(dizi,"3") == 0 || strcmp(dizi,"uc") == 0) return 3;
    if(strcmp(dizi,"4") == 0 || strcmp(dizi,"dort") == 0) return 4;
    if(strcmp(dizi,"5") == 0 || strcmp(dizi,"bes") == 0) return 5;
    if(strcmp(dizi,"6") == 0 || strcmp(dizi,"alti") == 0) return 6;
    if(strcmp(dizi,"7") == 0 || strcmp(dizi,"yedi") == 0) return 7;
    if(strcmp(dizi,"8") == 0 || strcmp(dizi,"sekiz") == 0) return 8;
    if(strcmp(dizi,"9") == 0 || strcmp(dizi,"dokuz") == 0) return 9;
    if(strcmp(dizi,"0") == 0 || strcmp(dizi,"sifir") == 0) return 0;
    
    return 0;
}


float hesapla(float a, float b, char* dizi){
    
    if(strcmp(dizi,"+") == 0 || strcmp(dizi,"arti") == 0) return a+b;
    if(strcmp(dizi,"-") == 0 || strcmp(dizi,"eksi") == 0) return a-b;
    if(strcmp(dizi,"*") == 0 || strcmp(dizi,"carpi") == 0) return a*b;
    if(strcmp(dizi,"/") == 0 || strcmp(dizi,"bolu") == 0) return a/b;
    
    return -1;
    
}

int main() {

    char dizi[3][10];
    scanf("%s",dizi[0]);
    scanf("%s",dizi[1]);
    scanf("%s",dizi[2]);
    
    float a=sayisec(dizi[0]),b=sayisec(dizi[2]);
    
    printf("%.0f",hesapla(a,b,dizi[1]));
    
    return 0;
}
