#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated string is  = %s", str1);

}
