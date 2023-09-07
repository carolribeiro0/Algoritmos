#include <iostream>
using namespace std;

int main(){
	int anos, qtd_cigarros, cig_total;
	float preco, gasto_total;
	
	cout<<" a quantos vc fuma? ";
	cin>>anos;
	cout<<" quantos cigarros por dia? ";
	cin>>qtd_cigarros;
	cout<<" qual o preco de cada cartela? ";
	cin>>preco;
	
	qtd_cigarros=qtd_cigarros*(anos*365);
	gasto_total=(qtd_cigarros/20)*preco;
	
	cout<<"vc gastou "gasto_total<< " reais";
}
