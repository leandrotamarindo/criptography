#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char buffer[20], pswd[20];

int main(){
    printf("Password: ");
    fgets(buffer, 20, stdin);
    strcpy(pswd, buffer);
    printf("%s", pswd);
}