#include <math.h>
#include <stdlib.h>
#include <stdio.h>

char decoder(char c, char key){
    char value=(('Z'-c))+key+1;
    if(value>'Z') value-=26;
    return value;
}

int main() {
    
    char kelime[5];
    char key[5];
    scanf("%s",kelime);
    scanf("%s",key);
    
    for(int i=0;i<5;++i){
        printf("%c",decoder(kelime[i],key[i]));
    }
    
    return 0;
}
