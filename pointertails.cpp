//A program that tells a little story about pointers. 


#include <iostream>
#include <vector>
#include <fstream>

#include <string>

//Get that sweet ASCII art setup
using namespace std;

int menu(int answer);




//Make some macros
#define say cout << 
#define nl cout << endl

 void story(bool x, bool y, bool z){
 	//varible declaration
 	int john = 42;
 	#define ytru if (y == true){


 	if (x == true){
		say "int john; == john stands up";
		nl;


		ytru
		say  "John's current value:  " << john;
		nl;
		say "John's pointer is: " << &john;
		nl;
		say "John is an Int with a value of  " << john << " at address: " << &john;
		}


		int *sally = &john;
		nl;
		nl;
		nl;
		say "*sally = &john == Sally stands up and points to john";
		nl;
		nl;
		nl;


		ytru
		say "Sally's current value: " << sally;
		nl;
		say "The value of what Sally is pointing to: " << *sally;
		nl;
		say "Sally's pointer is: " << &sally;
		nl;
		say "Sally is a pointer to an int with a value of " << sally << " at address: " <<&sally;
		nl;
		nl;
	}

		int *bill = sally;
		nl;
		say "int *bill = sally; == Bill Stands up and points at John.";
		nl;
		nl;
		ytru
		nl;
		say "Bill's value is: " << bill;
		nl;
		nl;
		say "Bill's pointer is: " << &bill;
		nl;
		nl;
	}
		ytru
		say R"( Lets recap:



		)";
		nl;
		say  "John's current value:  " << john;
		nl;
		say "John's pointer is: " << &john;
		nl;
		say "Sally's pointer is: " << &sally << " --- So Sally gets a new pointer";
		nl;
		say "Sally's current value: " << sally << "---- Or Sally's value is now John's pointer";
		nl;
		say "Bill's pointer is: " << &bill << " ---- Bill gets his own pointer";
		nl;
		say "Bill's value is: " << bill << " ---- Bill's Value is Sally's Pointer";

	}

		int sam;
		bill = &sam;
		nl;
		say "int sam; and bill = &sam == Sam stands up and bill points to sam.";
		nl;
		nl;
		nl;

		ytru
		say "Sam's value is: " << sam;
		say "Sam's pointer is: " << &sam;}



	}

	if (x == false)
		say "Fuck yo Story";
	else
		return; 
	
}


int main (){

	say R"( 
 ______   ______     __     __   __     ______   ______     ______        ______   ______     __     __         ______    
/\  == \ /\  __ \   /\ \   /\ "-.\ \   /\__  _\ /\  ___\   /\  == \      /\__  _\ /\  __ \   /\ \   /\ \       /\  ___\   
\ \  _-/ \ \ \/\ \  \ \ \  \ \ \-.  \  \/_/\ \/ \ \  __\   \ \  __<      \/_/\ \/ \ \  __ \  \ \ \  \ \ \____  \ \___  \  
 \ \_\    \ \_____\  \ \_\  \ \_\\"\_\    \ \_\  \ \_____\  \ \_\ \_\       \ \_\  \ \_\ \_\  \ \_\  \ \_____\  \/\_____\ 
  \/_/     \/_____/   \/_/   \/_/ \/_/     \/_/   \/_____/   \/_/ /_/        \/_/   \/_/\/_/   \/_/   \/_____/   \/_____/ 
 )" << '\n';

 nl;
 nl;
 nl;
 say "So, who points to who?";
 nl;
 nl;
 nl;

story(1,2,0);

{say " Would You like to see what the values of each pointer are? [Y/N]";



	while (true){
	 char answer = std::getchar();
	

	switch(answer){
		case 'y':
			story(1,1,0);
			break;
		case 'n':
			say "Alright then, bye";
			break;
		case 'x':
			return 0;
		default:
	
			continue;
		}


	}		

	}


}






