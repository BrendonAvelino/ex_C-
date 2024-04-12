#include <iostream>

// ex 01
using namespace std;
int main() {
	double instalacao = 300.00;
	double limpeza = 150.00;
	double manutencao = 499.99;

	int soma = instalacao + limpeza + manutencao;

	cout << soma;
	return 0;
};




// ex 02
using namespace std;
int main() {
	float recebe = 35.00;
	int horas = 8;

	int mult = recebe * horas;

	cout << mult;
	return 0;
};





// ex 03
using namespace std;
int main() {
	int bombomTotal = 27;
	int compra = 16;

	int sub = bombomTotal - compra;

	cout << sub;
	return 0;
};




// ex 04
using namespace std;
int main() {
	int GarrafaAgua = 300;
	int caixas = 20;

	int div = GarrafaAgua / caixas;

	cout << div;
	return 0;
};



// ex 05
using namespace std;
int main() {
	int camisas = 120;
	int venda = 80;
	float custo = 30.00;
	int comprou = 50;

	int faturamento = venda * custo;
	int total_camisas = camisas - venda + comprou;

	cout << faturamento;
	cout << "\n";
	cout << total_camisas;
	return 0;
};
