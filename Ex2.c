#include <stdio.h>
#include <string.h>

int contA(const char *str)
{
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    char string[100];

    printf("Informe uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    int quantidade = contA(string);
    if (quantidade > 0)
    {
        printf("A letra 'a' ou 'A' aparece %d vez(es) na string.\n", quantidade);
    }
    else
    {
        printf("A letra 'a' ou 'A' nao aparece na string.\n");
    }

    return 0;
}