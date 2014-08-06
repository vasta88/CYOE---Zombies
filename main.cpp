#include <iostream>
using namespace std;

char whilstAB(char);	//validates input for ab menus
char whilstABC(char);	//validates input for abc menus

#include <iostream>
using namespace std;

int main() {
char choice;

cout<<"This program lets you choose the actions you take in a story."<<endl;
cout<<"Read the story, then read your choices and enter the letter\n";
cout<<"which corresponds with your choice."<<endl;

do {
cout<<"\nYou wake up this morning and go to the kitchen to make some breakfast.\n";
cout<<"What do you make?"<<endl;
cout<<"A - an omelette\n";
cout<<"B - toast\n";
cin>>choice;
choice = whilstAB(choice);

if (choice == 'a' || choice == 'A') {
	cout<<"\nYou undercook the eggs and miss school to be sick.\n";
	cout<<"You decide to spend the day in bed. What do you do?\n";
	cout<<"A - check the news\n";
	cout<<"B - watch some tv shows\n";
	cout<<"C - read a book\n";
	cin>>choice;
	choice = whilstABC(choice);
	
	if (choice == 'a' || choice == 'A') {
		cout<<"\nYou catch the beginning of the zombie apocalypse on the news\n";
		cout<<"just in time to find your friends and flee.\n";
		cout<<"You spend the next few months in hiding and fall in love\n";
		cout<<"with another survivor. But then the food runs out.\n";
		cout<<"Do you: \n";
		cout<<"A - Resort to cannibalism and eat your partner\n";
		cout<<"B - Kill yourself so you partner can eat you and live longer\n";
		cout<<"C - Opt not to become cannibals and take your chances\n";
		cin>>choice;
		choice = whilstABC(choice);	
		
		if (choice == 'a' || choice == 'A') {
			cout<<"\nYou eat the love of your life and manage to live a few more\n";
			cout<<"weeks. Then the zombies find your hideout and devour you.\n";
		}
		else if (choice == 'b' || choice == 'B') {
			cout<<"Tragically, you are now dead. But your body lets your partner\n";
			cout<<"live long enough for rescue to come. They live and remarry\n";
			cout<<"and name their first child after you.\n";
		}
		else {
			cout<<"You get a few more days to spend together before you both\n";
			cout<<"starve to death a day before you would have been rescued.\n";
		}
	} 	
	else if (choice == 'b' || choice == 'B'){
		cout<<"\nYou stayed home to watch TV and so are unaware that the zombie\n";
		cout<<"Apocalypse has begun. They enter your home halfway through\n";
		cout<<"a rerun of the simpsons and bite you. Do you: \n";
		cout<<"A - kill yourself before you can become one of them\n";
		cout<<"B - let yourself become a zombie\n";
		cin>>choice;
		choice = whilstAB(choice);	

		if (choice == 'a' || choice == 'A'){
			cout<<"\nYou commit suicide. The world as you know it ends.\n";
		}
		else {
			cout<<"\nYou become a zombie and spend the next few days eating\n";
			cout<<"people before someone shoots you and ends your killing spree.\n";
		}
	}	
	else {
		cout<<"\nYou go to pick out a book. Which do you pick? "<<endl;
		cout<<"A - How to Survive the Zombie Apocalypse\n";
		cout<<"B - How to Grow Your Own Garden\n";
		cout<<"C - Shakespeare's Sonnets\n";
		cin>>choice;
		choice = whilstABC(choice);

		if (choice == 'a' || choice == 'A') {
			cout<<"\nZombies break down the door to your house. Luckily, you are\n";
			cout<<"prepared. You kill them all and go on the run. Do you: \n";
			cout<<"A - Find your friends to help them survive\n";
			cout<<"B - Put yourself first and try to make it on your own\n";
			cin>>choice;
			choice = whilstAB(choice);		
		
			if (choice == 'a' || choice == 'A') {
				cout<<"\nYour bad-ass zombie killing skills keep most of your\n";
				cout<<"friends alive. You are elected the new president after\n";
				cout<<"the apocalypse. You are granted the power to rebuild\n";
				cout<<"the world exactly the way you think it should be.\n";
			}
			else {
				cout<<"You manage to survive the apocalypse, but are shunned\n";
				cout<<"by the other survivors for your heartlessness. You build\n";
				cout<<"a cabin in the woods and live out the rest of your days\n";
				cout<<"as a hermit.\n";
			}
		}	
		else if (choice == 'b' || choice == 'B') {
			cout<<"The zombies break down your door and you barely manage to\n";
			cout<<"escape. You hide in the mountains and survive by growing\n";
			cout<<"your own food. Unfortunately, without contact from the outside\n";
			cout<<"world you have not way of knowing when the apocalypse ends.\n";
			cout<<"you spend the rest of your days hiding, too scared to leave.\n";
		}
		else {
			cout<<"the zombies come into your house. You try to soothe them by\n";
			cout<<"reading them sonnets. It hypnotizes them for a few moments.\n";
			cout<<"you use this trick to survive the apocalypse, but all that\n";
			cout<<"poetry drives you mad, and afterwards you are placed in a\n";
			cout<<"mental asylum where you stage productions of A Midsummer\n";
			cout<<"Night's Dream over and over again with your fellow patients.\n";
		}
	}	
}	

else {
	cout<<"You catch the bus to school. Your friend, Joe, who you usually sit\n";
	cout<<"with looks sick, so you sit next to someone you've had a crush on all\n";
	cout<<"year. Do you: \n";
	cout<<"A - Ask them out\n";
	cout<<"B - Wait for a better time\n";
	cout<<"C - Decide not to ask and hope they ask you\n";
	cin>>choice;
	choice = whilstABC(choice);

	if (choice == 'a' || choice == 'A') {
		cout<<"You pluck up the courage to ask if they want to grab a movie with\n";
		cout<<"you Monday. They say yes and you hold hands on the way to class\n";
		cout<<"Joe comes out of the bathroom a zombie and is headed towards\n";
		cout<<"your date. Do you: \n";
		cout<<"A - run away\n";
		cout<<"B - try to save your date\n";
		cin>>choice;
		choice = whilstAB(choice);

		if (choice == 'a' || choice == 'A') {
			cout<<"You flee, your date screams behind you as Joe catches them.\n";
			cout<<"Another zombie catches you at the door and devours you.\n";
		}
		else {
			cout<<"You use your backpack to beat Joe the Zombie to the ground,\n";
			cout<<"then grab your date and run. You make it out of the school\n";
			cout<<"Do you:\n";
			cout<<"A - Go home\n";
			cout<<"B - Call the cops\n";
			cout<<"C - rob a local store for supplies\n";
			cin>>choice;
			choice = whilstABC(choice);

			if (choice == 'a' || choice == 'A'){
				cout<<"You make it home, but your parents are already zombies.\n";
				cout<<"You and your date are both killed.\n";
			}
			else if (choice =='b' || choice == 'B'){
				cout<<"You call the cops but no one picks up. You stayed too long\n";
				cout<<"at the pay phone and a zombie catches you. It turns you\n";
				cout<<"into a zombie as well and you kill your date.\n";
			}
			else {
				cout<<"You run to the nearest store to grab food, water, and\n";
				cout<<"anything you could use as a weapon. The two of you find\n";
				cout<<"a safe place to lay low until help comes a few weeks\n";
				cout<<"later.\n";
			}
		}	
	}	
	else if (choice == 'b' || choice == 'B'){
		cout<<"You decide to wait for a more opportune moment, but on the way to\n";
		cout<<"school joe turns into a zombie and if headed for you. Do you:\n";
		cout<<"A - try to fight\n";
		cout<<"B - try to run\n";
		cin>>choice;
		choice = whilstAB(choice);

		if (choice == 'a' || choice == 'A'){
			cout<<"You manage to fight them off and grab your crush, but friends\n";
			cout<<"around you are dying. Do you:\n";
			cout<<"A - stay to help them\n";
			cout<<"B - take your crush and leave while you can\n";
			cin>>choice;
			choice = whilstAB(choice);
			
			if (choice == 'a' || choice == 'A') {
				cout<<"You stay to help. You and a few other classmates barricade\n";
				cout<<"yourselves in the lunch room, fighting off zombies as you\n";
				cout<<"go. Some of you starve, but a few of your survive and begin\n";
				cout<<"new lives post apocalypse. You marry your school crush.\n";
			}
			else {
				cout<<"You try to run, but you're surrounded. You tell your crush\n";
				cout<<"how you feel right before you are both eaten by zombies\n";
			}
	}	
		else {
			cout<<"You run out, leaving your crush and your classmates to fend\n";
			cout<<"for themselves. You survive the apocalypse but everyone you\n";
			cout<<"knew is dead. You kill yourself out of shame a year later.\n";
		}
	}	
	else {
		cout<<"You hope they'll make the first move, but Joe turns into a zombie\n";
		cout<<"at school that day, and turns your crush into a zombie as well.\n";
		cout<<"you waited too long to tell them. Your crush turns you into a zombie\n";
		cout<<"right before a would-be school shooter kills you both and ends up\n";
		cout<<"saving the rest of the school and becoming a hero.\n";
	}

}	

cout<<"Press Q to quit, press any other key to play again: ";
cin>>choice;
}while (choice != 'q' && choice != 'Q');

return 0;
}

//input validation functions

char whilstAB(char choose){
	while(choose != 'a' && choose != 'B' && choose != 'b' && choose != 'A'){
		cout<<"Please type A or B: ";
		cin>>choose;
	}
  return choose;
}	

char whilstABC(char choose){
	while(choose != 'a' && choose != 'B' && choose != 'b' && choose != 'A' && choose != 'c' && choose != 'C'){
		cout<<"Please type A, B, or C: "; 
		cin>>choose;
	}
  return choose;
}
