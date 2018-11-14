#include "main.h"
#include <iostream>

/// Hello , not kitty, Cats (=>+<=)!
/* workshop week 1
#include "stdafx.h"
*/

using namespace std;

/// window_keep_open ref- C++ principles - finally!
inline void keep_window_open() {
	char ch; cin >> ch;
}

int main() {

	///Strings! (= ~+~=) <--- this cat has string cheese or a cheese toastie ...?
	/*cout << "Hello world!"<< endl;
	cout << "Hello" << endl << " world" << endl;

1. cout << '@ ' << endl; this cat is hoarding alot of cheese!
2. cout << 5 << endl; breakfast, snacks, lunch, snacks, dinner and more snacks for this cat!
3. cout << 23.6f << endl; this cats feeding a family?
4. cout << true << endl; one cat, one dream-cheese
5. cout << false << endl; NUUU moaaar cheese needed :< ?!?!?!!?
6. hide the cats!	shhh no one saw cats ?! what cat? where?
	*/
	/* workshop: 19/19 - completed 28.09.2018
	videos 8/8 -
	lecture pdf: completed slides 89/89 - 29.09.2018
	(=*+*=)___) )

	int x;
	x = 5;
	cout << "your score is " << x << endl;
	cout < "The elf says: " << x << endl;
	cout << "Y<our fastest time is " << x << endl;
	cout << "Your 'up' key is Not " << x << endl;

	int x =5;
	int y = 10;
	cout << x << y << endl;

	int x = 5;
	int y = 10;
	int z = (x+y);
	cout << "the value of z is " <<z<<endl;

	int x = 3;
	cout << "x is now " << x << endl;
	x = 7;
	cout << "x is now " << x << endl;

	int x = 3;
	cout << "x is now " << x << endl;
	x = (x+2);
	/// x = (x*2);
	/// x = (x/2);
	cout << "x is now " << x << endl;

	char myCharacter ='d';
	cout << myCharacter << endl;

	int salmon;
	salmon = true;

	int salmon = true;
	int gouda = 2;
	cout << "Cat makes " << salmon << " cheese toastie and " << gouda << " coffee's!"<< endl;

	int salmon = true;
	int gouda = 2;
	int bread = (salmon + gouda);
	cout << "Cat places " << bread << " slices of bread into toaster" << endl;

	int salmon = 3;
	cout << "A salmons' favourite number is " << salmon << endl;
	salmon = '%';
	cout << "This salmon randomly typed " << salmon << endl;

	int salmon = 3;
	cout << "The cat looked puzzled. " << salmon << " was the favourite number?" << endl;
	/// salmon = (salmon+2);
	salmon = salmon, ++salmon, ++salmon;
	cout << "Then, the salmon made " << salmon << " more tea's and coffee's" << endl;

	/// static means stays the same, "exist til end of the program initialised" - definition from google.
	static int salmon = 3;
	salmon = (salmon * 2); &salmon; ++salmon;
	cout << "Cat takes " << salmon << " sips of tea" << endl;

	float salmon = 3.0f;
	salmon = (salmon / 2);
	cout << "Salmon waits " << salmon << " minutes for tea leaves to rest" << endl;

	char myDrink = 'd';
	cout << myDrink << endl;

	char myDrink = 'd';
	myDrink = (myDrink + 1);
	cout << myDrink << endl;
	*/

	///char myName = 'name';
	///char cin;
	///cin >> 'name';
	///cout << "Player Name " << myName << endl;
	///class myName;
	///cin >> myName;
	///cout << "What is your Name?" << myName << endl;
	/* ref, cplusplus.com
	int i;
	cout << "PLease enter and interger value: ";
	cin >>i;
	cout << "The value entered is " << i;
	cout << "and it's double is " << i*2 << "./n" ;
	*/

	/*int gamertag;
	cout << "Please choose your gamertag: ";
	cin >> gamertag;
	cout << "Gamertag is: " << gamertag;
	int myGames = 2;
	cout << "Number of games played: " << myGames << endl;
	float ratio = 85.5f;
	cout << "Your win ratio is: " << ratio << endl;
	*/

	int cat1[100];
	cat1[0] = 3;
	cat1[1] = 2;
	cat1[2] = 0;
	cout << "There is " << cat1[0] << " lan cables in the box" << endl;
	cout << "You have placed an order for " << cat1[1] << " purple cat5 flat lan cables" << endl;
	cout << "Now there is " << cat1[2] << " in store" << endl;

	/*cat1[100] < 4;
	++cat1[100] && cat1[1];
	*/

	for (int nope = 0; nope < 10; nope++) {
		cout << cat1[nope] << endl;
	}

	///cout << "You have " << cat1[100]<< " lan cables" << endl;





	cout << "Hello! (not a cat or is it) (=^+^=)<3" << endl;

	/* Video examples 29.09.2018
	int playerHealth;
	playerHealth = 100;

	float playerSpeed;
	playerSpeed = 3.7f;

	int playerAge;
	playerAge =0;

	string playerName;
	playerName = "Unknown Player";

	cout << "Please enter your age" << endl;
	cin >> playerAge;
	cout << "Please enter your name" << endl;
	cin >> playerName;

	cout << "Your name is " << playerName << endl;
	cout << "Your age is " << playerAge << endl;
	cout << "Your speed is " << playerSpeed <<endl;
	cout << "Your health is " << playerHealth << endl;
	*/

	/*int gameScore1 = 345;
	int gameScore2 = 351;
	int gameScore3 = 22;
	int gameScore4 = 88;
	int gameScore5 = 100;
	float average = ((gameScore1 + gameScore2 + gameScore3 + gameScore4 + gameScore5) / 5.0f);
	int scores[5];
	scores[0] = 345;
	scores[1] = 351;
	scores[2] = 22;
	scores[3] = 88;
	scores[5] = 100;
	float average = ((scores[0] + scores[1] + scores[2] + scores[3] + scores[4]) / 5.0f);
	cout<< "Average over last 5 games = " <<average <<endl;

	int scores[5]; 5
	char characterArray[65]; 0-64

	string inventory[10]; 0-9
	inventory[0] = "rope";
	inventory[1] = "5 gold pieces";
	inventory[2] = "torch";
	inventory[3] = "empty slot";
	inventory[4] = "empty slot";
	inventory[5] = "empty slot";
	inventory[6] = "empty slot";
	inventory[7] = "empty slot";
	inventory[8] = "empty slot";
	inventory[9] = "empty slot";

	//drop
	inventory [2] = "empty slot";

	// pick up
	inventory [5] = "knife";
	cout<< "You are carrying:" << endl;

	cout <<inventory[0] <<endl;
	cout <<inventory[1] <<endl;
	cout <<inventory[2] <<endl;
	cout <<inventory[3] <<endl;
	cout <<inventory[4] <<endl;
	cout <<inventory[5] <<endl;
	cout <<inventory[6] <<endl;
	cout <<inventory[7] <<endl;
	etc

	for ( int i =0; i <10; i++){
	cout <<inventory[i] << endl;
	}







	*/

	/* temporary alternative to system("pause") meeeeew-wuh?
	cin.get();
	*/

	/// alternative to system("pause") (=*+*=)_/
	keep_window_open();

	return 0;
}