 //Shamsur Rahman
 #include<iostream>
 using namespace std;
 
 
 int main()
 {
 	string name ;
 	int choice ;
 	char repeat = 'y';
 	
 	
 	cout << "\n\nWelcome to my adventure game";
 	cout << "\n\n What's your name mate?" << endl;
 	cin  >> name;
 	cout << "\n\nIn this adventure game you will experience living in different places to relax";
    
 	
 	cout << "\n\nYou have to pick from the choices";
 	cout << "\n\nChoosing from the options will present scenarios";
 	cout << "\n\n Your are walking in a jungle";
 	cout << "\n\n As you are walking, you started feeling tired";
 	cout << "\n\n you decided to rest";
 	
 	do {
 	
 	cout << "\n\nPlease choose your option:";
 	
 	cout << "\n\n 1. Rest in a cave";
 	cout << "\n\n 2. Rest under the tree";
 	cout << "\n\n 3. Rest in a tent" << endl;
 	
 	cin >> choice;
 	
 	
 	if (choice == 1){
 		
 		cout << "\n\nFantastic!!!";
 		cout << "\n\n Now you have to make fire to rest in a cave";
 		cout << "\n\n So, you go to cave across the mountain to find those special stones";
 		cout << "\n\n you are also carrying a large bag to carry those stones";
 		cout << "\n\n you picked up couple of stones to lit fire";
 		cout << "\n\n you decided to stay in the same cave so, you can avoid the rain";
	 }
	 
	 else if ( choice == 2){
	 	
	 	cout << "\n\n Good luck!!!";
	 	cout << "\n\n Resting under the tree could be dangerous";
	 	cout << "\n\n Leaves you defenseless out in the open";
	 	cout << "\n\n Risk of being attacked by animals";
	 	cout << "\n\n Risk of getting soaked in rain";
	 }
 
 	else if ( choice == 3){
 		
 		cout << "\n\n Great!!!";
 		cout << "\n\n Resting in the tent leaves you vulnerable when you are asleep";
 		cout << "\n\n Risk of being attacked by animals";
 		cout << "\n\n Tent could get on fire";
	 }
 

 		cout << "\n\nWould you like to try different options?" << endl;
 		cout << "\(y)es or (n)o\n";
 		cin  >> repeat;
 		
	}	while (repeat != 'n');
 		cout << "\n\n you will be taken out either way hahahaha";
 		cout << "\n\n Bye Bye Sucker!!!";
 		return 0;
 	}
 
