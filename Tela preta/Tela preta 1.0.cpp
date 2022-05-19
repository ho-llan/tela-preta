#include <iostream>
#include <string>
#include <locale.h>
#include <stdio.h>

#define PEMIL 9.5
#define FUSEX 3.0
#define ADCMIL 200
#define ADCHAB 220
#define ADCDISP 88
#define CUSTODEPENDENTE 300

using namespace std;
int main(int argc, char** argv){
	setlocale(LC_ALL, "portuguese");
	
	float salarioMilitar, passagemMilitar;
	int graduacaoPosto, dependentes;
	string nomemilitar;
	
	cout << "----------------------" << endl;
	cout << "------TELA PRETA------" << endl;
	cout << "-----(estimativa)-----" << endl;
	cout << "----------------------" << endl << endl << endl;
	
	cout << "Digite seu nome completo: " << endl;
	getline(cin, nomemilitar);
	
	cout << endl << "Qual sua graduação/posto? " << endl;
	cout << "1 - Recruta"<< endl;
	cout << "2 - Soldado"<< endl;
	cout << "3 - Cabo"<< endl;
	cout << "4 - 3°Sargento"<< endl << endl;
	cout << "Digite o numero correspondente a sua graduação/posto: "<< endl;
	cin >> graduacaoPosto;
	
	cout << "Digite sua passagem com o desconto:" << endl;
	cin >> passagemMilitar;
	
	cout << "Possui dependentes?" << endl;
	cout << "1 - SIM      2 - NãO" << endl;
	cin >> dependentes;
	
	switch(graduacaoPosto){
		case 1:
			salarioMilitar = 1000;
			break;
		case 2:
			salarioMilitar = 1765;
			break;
		case 3:
			salarioMilitar = 2300;
			break;
		case 4:
			salarioMilitar = 3000;
			break;
		default:
			cout << "Sem opcao!";
			break;
	}

	if(dependentes == 1){
		salarioMilitar = salarioMilitar + CUSTODEPENDENTE;
	}
	
	salarioMilitar = salarioMilitar + ADCDISP + ADCHAB + ADCMIL;
	salarioMilitar = salarioMilitar - ((salarioMilitar * PEMIL) / 100);
	salarioMilitar = salarioMilitar - ((salarioMilitar * FUSEX) / 100);
	salarioMilitar = salarioMilitar + passagemMilitar;
	
	
	cout << endl <<  "Olá " << nomemilitar << endl <<  " \t Seu salário e: " << salarioMilitar << endl;
	
	system ("pause");
	return 0;
}
