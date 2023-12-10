#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char *sentence)
{
    int i;

    sentence[0] = toupper(sentence[0]);

    for (i = 1; sentence[i] != '\0'; i++)
    {
        if (sentence[i - 1] == ' ' || sentence[i - 1] == '\t')
        {
 sentence[i] = toupper(sentence[i]);
        }
    }
}

int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    capitalizeFirstLetter(sentence);
    printf("AFTER CAPITALISATON %s\n", sentence);
    return 0;
}

