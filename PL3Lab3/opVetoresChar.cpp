#include "opVetoresChar.h"
#include <iostream>

using namespace std;

unsigned leString(int max, char frase[]) {
	unsigned numChars = 0;
	cout << "Escreva uma linha de texto." << endl;
	cin.ignore();
	char c = cin.get();
	int i = 0;
	while ((c != '\n') && (numChars < max - 1)){
		numChars++;
		frase[i] = c;
		i++;
		c = cin.get();
	}
	frase[i] = '\0';
	return numChars;
}


void escreverDados(char v[], int tamanho) {
	for (int i = 0; i < tamanho && v[i] != '\0'; i++) {
		cout << v[i] << " | ";
	}

}

char * strdelc(char* s, char ch) {
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != ch)
			s[j++] = s[i];
	s[j] = '\0';
	return s;
}
