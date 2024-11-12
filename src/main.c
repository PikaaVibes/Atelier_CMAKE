#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
	if (argc == 4)
	{
	char* op = argv[1];
	char* a = argv[2];
	char* b = argv[3];
	double r = 0;
	if (strcmp(op, "add") == 0) {
		r = _add(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "sub") == 0) {
		r = _sub(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "mul") == 0) {
		r = _mul(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "div") == 0) {
		r = _div(atof(a), atof(b));
		printf("%lf",r);
	}
	else {printf("Erreur de parametres");}
	}
	else {printf("Erreur de parametres");}
	return 0;
}


#include <stdio.h>
#include <string.h>
#include "calculator.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s [operation] [num1] [num2]\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[2]);
    int result = 0;

    if (strcmp(argv[1], "add") == 0) {
        result = add(num1, atoi(argv[3]));
    } else if (strcmp(argv[1], "sub") == 0) {
        result = sub(num1, atoi(argv[3]));
    } else if (strcmp(argv[1], "mul") == 0) {
        result = mul(num1, atoi(argv[3]));
    } else if (strcmp(argv[1], "div") == 0) {
        result = divi(num1, atoi(argv[3]));
    } else if (strcmp(argv[1], "car") == 0) { // 👈 Ajoute ceci
        result = car(num1);
    } else {
        printf("Opération non supportée\n");
        return 1;
    }

    printf("Résultat: %d\n", result);
    return 0;
}
		
