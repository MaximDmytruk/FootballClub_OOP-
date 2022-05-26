/*1. Реалізуйте клас «Футбольний клуб». Необхідно зберігати в змінних-членах класу Назву команди, назву домашнього стадіону, презедента клубу, капітана команди, середня кількість відвідувань домашнього матчу. 
Реалізуйте функцію, яка перевіряє на який з трьох футбольних клубів ходить більше вболівальників.*/

#include <iostream>
#include <string>
using namespace std;

class FootballClub {
public:
	string nameCrew;
	string nameStadion;			//Змінн для даних
	string headClub;	
	string capClub;
	int ANFun;	//зміна для кількості відвідувачів 

	void SetInfo() {			//Сеттер для інформації
		cout << "Enter some info about Football clubs" << endl;
		cout << "1.Enter Name Crew : ";
		cin >> this->nameCrew;
		cout << "2.Enter name of the Stadion : ";
		cin >> this->nameCrew;
		cout << "3.Enter name of the CEO  : ";
		cin >> this->headClub;
		cout << "4.Enter name of the capitan crew : ";
		cin >> this->capClub;
		cout << "5.Enter How much fans visit game :";
		cin >> ANFun;
		cout << endl;
	}
	~FootballClub() {}
};

void BestClub(FootballClub& a, FootballClub& b, FootballClub& c) {// Функція ждя визначення найкращого клуба шляхом порівняння кількості фанів на матчах
	if (a.ANFun > b.ANFun && a.ANFun > c.ANFun) { cout << a.nameCrew << " has the biggest fan club" << endl; }
	if (b.ANFun > a.ANFun && b.ANFun < c.ANFun) { cout << b.nameCrew << " has the biggest fan club" << endl; }		
	if (c.ANFun>a.ANFun && c.ANFun>b.ANFun){cout << c.nameCrew<<" has the biggest fan club" << endl;}
	
	if (a.ANFun == b.ANFun && a.ANFun > c.ANFun) { cout << a.nameCrew <<" and " << b.nameCrew <<" have identical fan club" << endl; }
	if (c.ANFun == b.ANFun && c.ANFun > a.ANFun) { cout << c.nameCrew << " and " << b.nameCrew << " have identical fan club" << endl; }
	if (a.ANFun == c.ANFun && c.ANFun > b.ANFun) { cout << a.nameCrew << " and " << c.nameCrew << " have identical fan club" << endl; }
}

int main()
{
	FootballClub a;
	a.SetInfo();
	FootballClub b;			//створюємо об'єкти класів і викликаємо сетер 
	b.SetInfo();
	FootballClub c;
	c.SetInfo();
	
	BestClub(a, b, c);		//викликаємо функцію для визначення найкращого клубу.

}

