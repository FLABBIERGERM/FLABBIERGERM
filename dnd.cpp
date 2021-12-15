#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "stat.h"
//#include <random> // have to make randomizers this is iffy.

using namespace std;
int choice;
int Str;
int Con;
int Dex;
int Int;
int Wis;
int Cha;
int Race;
int Class;
int Back_ground;
int Lvl = 1;
int Xp = 0;
bool race;
string name;
string Dragon_born;
string Dwarves;
string Elves;
string Gnome;
string Half_elf;
string Half_orc;
string Halflings;
string Humans;
string Tieflings;
bool a;
// use a try exception i think to check for issues.
void races(){// the races info make into an array with felix help.
	int input;
	cout << "Please select your race from 0-9" << endl;
	cin >> input;
	int Races[9] ={1,2,3,4,5,6,7,8};
if(input == 0 ){
	cout << "You chose Dragon Born"<< endl;
	ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen the Dragon Born race add 2 to strength and 1 to charisma" << endl;
	test.close();
}
else if(input ==1 ){
	cout << "Dwarves"<< endl;
		ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen the Dwarves add 2 to CON" << endl;
	test.close();
}
else if(input ==2 ){
	cout << "Elves"<< endl;
		ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen the Elves add +2 to DEX" << endl;
	test.close();
}
else if(input ==3 ){
	cout << "Gnome"<< endl;
		ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen the Gnomes add +2 to INT" << endl;
	test.close();
}
else if(input == 4){
	cout << "Half Elf"<< endl;
	ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen Half Elf add +2 to CHAR and +1 to two other scores" << endl;
	test.close();
}
else if(input == 5){
	cout << "Half Orc"<< endl;
	ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen Half Orc add +2 STR +1 con" << endl;
	test.close();
}
else if(input ==6 ){
	cout << "Halflings"<< endl;
	ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen Halfling add +2 DEX" << endl;
	test.close();
}
else if(input == 7){
	cout << "Humans"<< endl;
	ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen human add +1 to all stats" << endl;
	test.close();
}
else if(input == 8){
	cout << "Tiefling"<< endl;
	ofstream test;
	test.open("characters.txt",fstream::app);
	test << "You have chosen Tiefling add +2 to CHA and +1 to INT" << endl;
	test.close();
}
else {
	cout << "You did not choose any race please reload" << endl;
	exit;
} 
	
}
class Character{
	public:
		void setName();
		string getName();
		
	private:
		string name;
};
void stats(){//str,con,dex,int,wis,cha. 
srand((unsigned)time(0));
	int randomNumber;
	for(int index=0; index<6;index++){
		randomNumber =(rand()%18)+3;
		cout << randomNumber << endl;
	}
	
}
void D6_hp(){ 
int WSH;
srand((unsigned)time(0));
	for(int index=0; index<1;index++){
		WSH =(rand()%6)+1;
		cout << "Wizard Hp and Sorcerer Hp: " << WSH << endl;
	}	
}
void D8_hp(){
	int MWR;
	srand((unsigned)time(0));
	for(int index=0; index<1;index++){
		MWR =(rand()%8)+1;
		cout << "Monk,Warlock,Rogue,Druid,Cleric, and bard hp: " << MWR << endl;
	}
}
void D10_hp(){
	int FRP;
	srand((unsigned)time(0));
	for(int index=0; index<1;index++){
		FRP =(rand()%10)+1;
		cout << "Fighter,Paladin,and Ranger HP: " << FRP << endl;
	}
}
void D12_hp(){
	int BAR;
		srand((unsigned)time(0));
	for(int index=0; index<1;index++){
		BAR =(rand()%12)+1;
		cout << "Barbarian HP: " << BAR << endl;
	}
}

void info_R(){// where all the picking and choosing is hopefully.
 ifstream file("text.txt");
  string content[21][21];
  string dollar;
  int choice;
  if (file.is_open()){
    for(int i = 0; i < 21; i++){
      for(int j = 0; j < 21; j++){
        file >> content[i][j];
      }
    }
  }//end if
    for(int i = 0; i < 21; i++){
    for(int j = 0; j < 21; j++){
      cout << content[i][j] << " ";
    }//end inner for
    cout << endl;
  }//end outter for
}
int main() {
//selection(); //broken rn
//stats();
	cout << "Welcome to the D&D character creator! I hope you find this program easy to use and fun!" << endl;
	cout << "First off what would you like to name your character, some races in lore have sepcific names you can look at in the Player Hanbook but its up to you if you want to use them!" << endl;
	Character player;
	player.setName();
	cout <<"Name is: " << player.getName() << endl;
	info_R();
	races();
	statss();

		
		//	ifstream file("text.txt");// has to change the code to work with a larger set of lines poteitally different text files for each race/class, cant figure out how to get the full size in


	return 0;
	
		
  }
