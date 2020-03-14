#include <iostream>
#include "opVetoresInt.h"
#include "opVetoresFloat.h"
#include "opVetoresChar.h"

using namespace std;

int main() {
	int tipoDados = -1;
	cout << "Inteiros (1) ou Reais (2)?" << endl;
	cin >> tipoDados;
	int tamanho;
	if (tipoDados == 1) {
		
		cout << "Quantos elementos quer inserir no vector? \n";
		cin >> tamanho;
		int * v = new int[tamanho];
		if (v!=NULL)
			opcoes(v, tamanho);
		else
			cout << "Nao foi possivel alocar memoria. Prima ENTER para terminar." << endl;
		delete[] v;
	}
	else if (tipoDados == 2) {
		
		cout << "Quantos elementos quer inserir no vector? \n";
		cin >> tamanho;
		float * v = new float[tamanho];
		if (v!=NULL) 
			opcoes(v, tamanho);
		else
			cout << "Nao foi possivel alocar memoria. Prima ENTER para terminar." << endl;
		delete[] v;
	}
	else
		cout << "Inseriu tipo de dados invalido. Prima ENTER para terminar." << endl;
	
	cout << "Prima ENTER para terminar." << endl;
	cin.ignore();
	cin.get();
	return 0;
	
}