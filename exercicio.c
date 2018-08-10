#include <stdio.h>

int toupper(int c);

int main()
{
    int i = 0;
    char nome[30] = "";
    char novo[30] = "";


    printf("Insert:\n");
    scanf("%s", nome);

    while(nome[i])
    {
        novo[i] = toupper(nome[i]);
        i++;
    }

    for(i = 0; i < 30; i++)
    {
        if (novo[i] != " ")
        {
            if (novo[i] == 'A' || novo[i] == 'B' || novo[i] == 'C')
            {
                novo[i] = '2';
            }
            else if (novo[i] == 'D' || novo[i] == 'E' || novo[i] == 'F')
            {
                novo[i] = '3';
            }
            else if (novo[i] == 'G' || novo[i] == 'H' || novo[i] == 'I')
            {
                novo[i] = '4';
            }
            else if (novo[i] == 'J' || novo[i] == 'K' || novo[i] == 'L')
            {
                novo[i] = '5';
            }
            else if (novo[i] == 'M' || novo[i] == 'N' || novo[i] == 'O')
            {
                novo[i] = '6';
            }
            else if (novo[i] == 'P' || novo[i] == 'Q' || novo[i] == 'R' || novo[i] == 'S')
            {
                novo[i] = '7';
            }
            else if (novo[i] == 'T' || novo[i] == 'U' || novo[i] == 'V')
            {
                novo[i] = '8';
            }
            else if (novo[i] == 'X' || novo[i] == 'W' || novo[i] == 'Y' || novo[i] == 'Z')
            {
                novo[i] = '9';
            }

        }
        else {
            novo[i] = '\0';
        }

    }
    printf(novo);
    return 0;
}


