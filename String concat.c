#include<stdio.h>
#include<conio.h>
int main(void)
{

    char wrd1 [30]="My name is xyz.";
    char wrd2 [30];
    int length;
    puts(wrd1);
    printf("Enter the first word:\n");
    gets (wrd2);
    strcpy (wrd1,wrd2);
    printf("Enter the second word:\n");
    gets (wrd2);
    strcat(wrd1,wrd2);
    puts (wrd1);
    printf("Enter the third word:\n");
    gets (wrd2);
    strcat(wrd1,wrd2);
    puts (wrd1);
    printf("Enter the fourth word:\n");
    gets (wrd2);
    strcat(wrd1,wrd2);
    puts (wrd1);

    length=strlen(wrd1);

    printf("\nLength of the sentence=%dj",length);
	
	return 0;
}
