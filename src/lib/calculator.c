#include "./../../include/calculator.h"

double _add(double a, double b) {
	return a+b;
}

double _sub(double a, double b) {
	return a-b;
}

double _mul(double a, double b) {
	return a*b;
}

double _div(double a, double b) {
	return a/b;
}

#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return (b != 0) ? a / b : 0; // Evite la division par zéro
}

// 👇 Voici ta nouvelle fonction
int car(int a) {
    return a * a; // Calcul du carré
}
