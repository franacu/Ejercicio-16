#include <stdio.h>
#include <string.h>
void concatenar(char *c1,char *c2)
{
    strcat(c1,c2);
    printf("Cadenas concatenadas:%s",strcat(c1,c2));
}

int main()
{
    char cad1[100],cad2[100];
    printf("Cadena1:\n");
    gets(cad1);
    printf("Cadena2:\n");
    gets(cad2);
    concatenar(cad1,cad2);
    return 0;
}
