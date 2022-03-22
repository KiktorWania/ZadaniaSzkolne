#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	int mapSize;
	cout << "Wprowadz wielkosc mapy" << endl;
	cin >> mapSize;
	
	int jama, koniec;
	int pos1 = 0, pos2 = 0;
	
	srand(time(NULL));
	
	jama = rand() % mapSize + 1;
	koniec = rand() % mapSize + 1;
	
	cout << "Jama: " << jama << endl;
	cout << "Koniec: " << koniec << endl;
	
	int n = 0;
	
	while(true){
		cout << "-----------------------------------------------------------" << endl;
		cout << "Wcisnij enter aby rzucic kostka" << endl;
		cin.ignore();
		
		int playerMove = rand() % 6 + 1; 	//losuje wartosc od 1 do 6, poniewaz tyle pol ma kosc do gry
		int computerMove = rand() % 6 + 1;
		
		pos1 += playerMove;
		pos2 += computerMove;
		
		if(pos1 > mapSize){
			pos1 -= mapSize;
		}
		if(pos2 > mapSize){
			pos2 -= mapSize;
		}
		n++;
		
		cout << "Tura: " << n << endl;
		cout << "Gracz wyrzucil liczbe " << playerMove << " i stoi teraz na polu: " << pos1 << endl;
		cout << "Komputer wyrzucil liczbe " << computerMove << " i stoi teraz na polu: " << pos2 << endl;
		
		cout << "" << endl;
		
		
		if(pos1 == jama){
			cout << "Gracz przegral dotarl do jamy" << endl;
			break;
		}else if(pos1 == koniec){
			cout << "Gracz wygral dotarl do konca" << endl;
			break;
		}
		
		if(pos2 == jama){
			cout << "Komputer przegral dotarl do jamy" << endl;
			break;
		}else if(pos2 == koniec){
			cout << "Komputer wygral dotarl do konca" << endl;
			break;
		}
	}
}
