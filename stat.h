#include<iostream>
#include<fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
	void statss(){ 
	int STR;
	int CON;
	int DEX;
	int CHA;
	int INT;
	int WIS;
		int stats[6] ={STR, CON, DEX, CHA, INT, WIS};
		//int STR =(rand()%15)+3;
			srand((unsigned)time(0));
	int randomNumber;
	for(int index=0; index<1;index++){
	int	STR =(rand()%15)+3;
		cout <<"You rolled:" << STR << " for your strength!"<< endl;
		int CON =(rand()%15)+3;
		cout <<"You rolled:" << CON << " for your constitution!"<< endl;
		int DEX =(rand()%15)+3;
		cout <<"You rolled:" <<DEX << " for your dexterity!"<< endl;
		int CHA =(rand()%15)+3;
		cout <<"You rolled:" <<CHA << " for your charisma!"<< endl;
		int INT =(rand()%15)+3;
		cout <<"You rolled:" << INT << " for your intelligence !"<< endl;
		int WIS  =(rand()%15)+3;
		cout <<"You rolled:" <<WIS << " for your wisdom !"<< endl;
			ofstream test;
	test.open("characters.txt",fstream::app);
	test <<"STR is:" << STR << endl;
	test << "CON is:" << CON << endl;
	test << "DEX is:" <<DEX << endl;
	test << "CHA is:" << CHA << endl;
	test << "INT is:" << INT << endl;
	test << "WIS is:" << WIS<< endl;

	test.close();
	}
		
	}
