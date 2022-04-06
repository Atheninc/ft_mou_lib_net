#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);
char *ft_atoi(char *str);


int ft_check_strcpy()
{
	char x1[] = "je suis un test";
	char x2[] = "je suis un test";
	char y1[] = "test";
	char y2[] = "test";
	
	printf("\033[0;37m");
	printf("\n STRCPY \n");

	strcpy(x1, y1);
	ft_strcpy(x2, y2);
	printf("Valeur attendu : (\"%s\")\n", x1);
	printf("Valeur donner  : (\"%s\")\n", x2);
	printf("resultat       : ");
	if (strcmp(x1, x2) == 0)
	{
		printf("\033[0;32m");
		printf("VALID");
	}
	else
	{
		printf("\033[0;31m");
		printf("ERREUR");
	}	
}

int ft_check_strncpy(char *v1, char *v2, int n)
{
	char x1[] = strdup(v1);
	char x2[] = strdup(v2);
	char y1[] = strdup(v1);
	char y2[] = strdup(v2);
	
	printf("\033[0;37m");
	printf("\n STRNCPY \n");

	strncpy(x1, y1, n);
	ft_strncpy(x2, y2, n);
	printf("Valeur attendu : (\"%s\")\n", x1);
	printf("Valeur donner  : (\"%s\")\n", x2);
	printf("resultat       : ");
	if (strcmp(x1, x2) == 0)
	{
		printf("\033[0;32m");
		printf("VALID");
	}
	else
	{
		printf("\033[0;31m");
		printf("ERREUR");
	}	
}

int ft_check_atoi(char *test)
{
	char x1[] = "-256";
	char x2[] = "-256";
	int  z1;
	int  z2;

	printf("\033[0;37m");
	printf("\n ATOI \n");

	z1 = (int)atoi(test);
	z2 = (int)ft_atoi(test);
	printf("Valeur attendu : (\"%d\")\n", z1);
	printf("Valeur donner  : (\"%d\")\n", z2);
	printf("resultat       : ");
	if (z1 == z2)
	{
		printf("\033[0;32m");
		printf("VALID");
	}
	else
	{
		printf("\033[0;31m");
		printf("ERREUR");
	}	
}

int main()
{
	ft_check_strcpy();
	
	printf("\n");
	printf("\n");

	ft_check_strncpy("test", "bonjours", 2);
	ft_check_strncpy("test", "bonjours", 10);
	ft_check_strncpy("test", "", 3);
	ft_check_strncpy("", "sd", 2);
	
	printf("\n");
	printf("\n");
	
	ft_check_atoi("440");
	ft_check_atoi("0");
	ft_check_atoi("-12");

	return(0);
}