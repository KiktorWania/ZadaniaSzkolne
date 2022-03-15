#include <iostream>
using namespace std;

int nominaly[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
void wydajReszte(int cena, int pieniadze);

int main(){
	int cena, pieniadze;
	
	cout << "Podaj cene: ";
	cin >> cena;
	cout << "Podaj posiadane pieniadze: ";
	cin >> pieniadze;

	while(pieniadze < cena){
		cout << "Nie stac cie na to, podaj inne wartosci" << endl;
		cout << "Podaj cene: ";
		cin >> cena;
		cout << "Podaj posiadane pieniadze: ";
		cin >> pieniadze;
	}
	
	wydajReszte(cena, pieniadze);
}

void wydajReszte(int cena, int pieniadze){
	int reszta = pieniadze - cena;
	int arrSize = (sizeof(nominaly) / sizeof(nominaly[0]));
	
	while (reszta > 0){
		int obecnyNominal = 0;
		for (int i = 0; i < arrSize; i++){
			if((nominaly[i] <= reszta) && (nominaly[i] > obecnyNominal)){
				obecnyNominal = nominaly[i];
				cout << nominaly[i]<< endl;
				reszta = reszta - obecnyNominal;
			}
		}
	}
}
