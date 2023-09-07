#include <iostream>
using namespace std;

int main (){
	int anos, meses, dias, dias_total;
	
	cout << "digite sua idade em anos, meses e dias: ";
	cin>>anos >> meses >>dias;
	
	dias_total = ((anos*365) + (meses*30) + dias);
	
	cout <<"voce nasce a "<<dias_total<< " dias atras";
}
