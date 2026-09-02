#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int i, encpr_key;
char buffer[20], pswd[20], option;

void caesar(char *p, int n){
    for(i = 0; i < (int)strlen(p); i++){
        // Disconsider the non printable charachters
        if(p[i] < 32) return;
        p[i] += n;
    }
}

void caesar_alt(char *p, int n){
    for(i = 0; i < (int)strlen(p); i++){
        // Disconsider the non printable charachters
        if(p[i] < 32) return;
        if(i % 2) p[i] += n;
        else p[i] -= n;
    }
}

int main(){
    printf("Password: ");
    fgets(buffer, 20, stdin);
    strcpy(pswd, buffer);

    printf("Choose an option below: \n"
            "\tA: Caesar cipher\n"
            "\tB: Alternative Caesar cipher\n");
    fgets(buffer, 20, stdin);
    option = buffer[0];

    switch(option){
        case 'A':
            printf("Key: ");
            scanf("%d", &encpr_key);
            caesar(pswd, encpr_key);
            break;
        case 'B':
            printf("Key: ");
            scanf("%d", &encpr_key);
            caesar_alt(pswd, encpr_key);
            break;
        default: printf("Option not found!\n");      
    }

    printf("%s", pswd);
}