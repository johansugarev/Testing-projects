#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    int j;
    int k;
    int l = 0;


    if (argc != 2)
    {
        printf("Try Again\n");
        return 1;
    }


    string s = (argv[1]);

    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]) == false)
        {
            printf("Try Again\n");
            return 1;
        }
    }


    string plainText = get_string("plaintext: ");


    printf("ciphertext: ");

    for (int i = 0; i < strlen(plainText); i++)
    {
        if islower(plainText[i])
        {
            j = (l % strlen(s));
            k = (tolower(s[j]) - 97);
            printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
            l += 1;
        }
        else if isupper(plainText[i])
        {
            j = (l % strlen(s));
            k = (tolower(s[j]) - 97);
            printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
            l += 1;
        }
        else
        {
            printf("%c", plainText[i]);
        }


    }

    printf("\n");
    return 0;

}
