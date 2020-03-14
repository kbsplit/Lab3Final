#include <iostream>
#include "opVetoresInt.h"
#include "constantes.h"
#include "opVetoresFloat.h"
#include "opVetoresChar.h"

using namespace std;

int main() {
	int tipoDados = -1;
	cout << "Inteiros (1), Reais (2) ou Carateres (3)?" << endl;
	cin >> tipoDados;
	int tamanho;
	if (tipoDados == 1) {
		int v[NUM_ELEMENTOS];
		cout << "Quantos elementos quer inserir no vector? (max. " << NUM_ELEMENTOS << ") \n";
		cin >> tamanho;
		if (tamanho > 0 && tamanho <= NUM_ELEMENTOS) 
			opcoes(v, tamanho);
		else
			cout << "Inseriu numero de elementos invalido. Prima ENTER para terminar." << endl;
	}
	else if (tipoDados == 2) {
		float v[NUM_ELEMENTOS];
		cout << "Quantos elementos quer inserir no vector? (max. " << NUM_ELEMENTOS << ") \n";
		cin >> tamanho;
		if (tamanho > 0 && tamanho <= NUM_ELEMENTOS) 
			opcoes(v, tamanho);
		else
			cout << "Inseriu numero de elementos invalido. Prima ENTER para terminar." << endl;
	}
	else if (tipoDados == 3) {
		char frase[NUM_CARATERES];
		unsigned numChars = leString(NUM_CARATERES, frase);
		cout << "O numero de carateres inseridos: " << numChars << endl;
		cout << frase;
		//escreverDados(frase, numChars);
		cout << endl;
		cout << "Qual e o carater que quer eliminar da frase? " << endl;
		char c = cin.get();
		cout << "Frase inserida sem carater " << c << endl << strdelc(frase, c) << endl;
	}
	else
		cout << "Inseriu tipo de dados invalido. Prima ENTER para terminar." << endl;
	
	cout << "Prima ENTER para terminar." << endl;
	cin.ignore();
	cin.get();
	return 0;
	
}