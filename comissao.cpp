#include <iostream>

using namespace std;

int main (){ 


string nome;
	double valorVenda;
	double TaxaComissao = 0.05;
	double comissao;
	
	cout << "digite o nome do vedendor"<<endl;
	cin >> nome;
	
	
	cout << "Digite o valor de venda" << endl;
	cin >> valorVenda;
	
	comissao = valorVenda*TaxaComissao;
	
	cout << "Vendedor:" << nome<<endl;
	cout << "comissao R$" << comissao << endl;

	
	return 0; 
	
	
	
	
	
	
	
	
	
	
	
}
