#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int i, encpr_key;
char buffer[20], pswd[20];

void caesar(char *p, int n){
    for(i = 0; i < (int)strlen(p); i++){
        // Disconsider the non printable charachters
        if(p[i] < 32) return;
        p[i] += n;
    }
}


int main(){
    printf("Password: ");
    fgets(buffer, 20, stdin);
    strcpy(pswd, buffer);

    printf("Key: ");
    scanf("%d", &encpr_key);

    caesar(pswd, encpr_key);
    printf("%s", pswd);
}