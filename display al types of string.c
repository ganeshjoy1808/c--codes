#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char l;
    char s[100];
    char sen[150];
    scanf("%c",&l);
    scanf("%s",s);
    scanf("\n");
    fgets(sen,sizeof(sen),stdin);
    printf("%c\n",l); 
    printf("%s\n",s);
    printf("%s",sen);   
    return 0;
}
