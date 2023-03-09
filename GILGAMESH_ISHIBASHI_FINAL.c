#include <stdio.h>
#include <stdlib.h> // for the random
#include <time.h> // 
#include <unistd.h> // used for sleep 
#include <windows.h>  // for the music :D
#include <MMsystem.h>

/* 
Machine Project - CCPROG1 
Name: Yoshino C. Ishibashi 
Section: S15A 
*/

// function for viewing shop 
void shopView(int onhand1, int onhand2, int onhand3, int onhand4, int onhand5, int onhand6, int onhand7, int onhand8, float price1,
	float price2, float price3, float price4, float price5, float price6, float price7, float price8, int titleCounter){
	
	printf("******************************************************************************************** \n");
		if (titleCounter == 1)
		{
	 		printf("                              Tycoon Meteor\'s Minerals \n");
	 	
		}
		
		if (titleCounter == 2)
		{
			printf("                               Pulsian Restoratives  \n");
		}
		
		if (titleCounter == 3)
		{
			printf("                                Archadian Luxuries  \n");
		}
		
		if (titleCounter == 4)
		{
			printf("                              Cid\'s Magical Escapades  \n");
		}
		
		if (titleCounter == 5)
		{
			printf("                                  Gaian Gratitudes   \n");
		}
		
		if (titleCounter == 6)
		{
			printf("                              Riches and Minerals of Spira  \n");
		}
		
	printf("******************************************************************************************** \n");
	printf("\n");
	printf("Shopkeeper: Welcome! How may I be of service? \n");
	printf("\n");
	
	printf("Item                          On hand                        Price\n"); 
	printf("\n");
	printf("Phoenix Down                    %d                             %.2f G \n", onhand1, price1); 
	printf("Elixir Essence                  %d                             %.2f G\n", onhand2, price2);
	printf("Platinum Ingot                  %d                             %.2f G\n", onhand3, price3);
	printf("Golden Materia                  %d                             %.2f G\n", onhand4, price4);
	printf("Scarletite                      %d                             %.2f G\n", onhand5, price5);
	printf("Adamantite                      %d                             %.2f G\n", onhand6, price6);
	printf("Dark Matter                     %d                             %.2f G\n", onhand7, price7);
	printf("Trapezohedron                   %d                             %.2f G\n", onhand8, price8);  
	printf("____________________________________________________________________________________________ \n"); 
	printf("Note: 0 Gil means that they are SOLD OUT \n"); 
	printf("Note: You cannot buy or sell items if they are SOLD OUT! \n");
	printf("____________________________________________________________________________________________ \n"); 
	printf("[B]uy      [S]ell    [L]eave \n");
	printf("\n");
	printf("Option: \n"); 
		
}
//function for shopbuy 
void shopBuy(int onhand1, int onhand2, int onhand3, int onhand4, int onhand5, int onhand6, int onhand7, int onhand8, float price1,
	float price2, float price3, float price4, float price5, float price6, float price7, float price8, int counterview){
	
	printf("******************************************************************************************** \n");
	
		if (counterview == 1)
		{
	 		printf("                              Tycoon Meteor\'s Minerals \n");
		}
		
		if (counterview == 2)
		{
			printf("                               Pulsian Restoratives  \n");
		}
		
		if (counterview == 3)
		{
			printf("                                Archadian Luxuries  \n");
		}
		
		if (counterview == 4)
		{
			printf("                              Cid\'s Magical Escapades  \n");
		}
		
		if (counterview == 5)
		{
			printf("                                  Gaian Gratitudes   \n");
		}
		
		if (counterview == 6)
		{
			printf("                              Riches and Minerals of Spira  \n");
		}
	
	printf("******************************************************************************************** \n");
	printf("\n");
	printf("Shopkeeper: Buying an item? Which one? \n");
	printf("\n");
	
	printf("Item                          On hand                        Price\n"); 
	printf("\n");
	printf("[1] Phoenix Down                    %d                             %.2f G\n", onhand1, price1);
	printf("[2] Elixir Essence                  %d                             %.2f G\n", onhand2, price2);
	printf("[3] Platinum Ingot                  %d                             %.2f G\n", onhand3, price3);
	printf("[4] Golden Materia                  %d                             %.2f G\n", onhand4, price4);
	printf("[5] Scarletite                      %d                             %.2f G\n", onhand5, price5);
	printf("[6] Adamantite                      %d                             %.2f G\n", onhand6, price6);
	printf("[7] Dark Matter                     %d                             %.2f G\n", onhand7, price7);
	printf("[8] Trapezohedron                   %d                             %.2f G\n", onhand8, price8); 
	
	printf("____________________________________________________________________________________________ \n"); 
	printf("Note: 0 Gil means that they are SOLD OUT \n"); 
	printf("Note: You cannot buy or sell items if they are SOLD OUT! \n");
	printf("____________________________________________________________________________________________ \n"); 
	printf("[L]eave \n");
	printf("\n");
	printf("Option: \n"); 
}
//function for shop Selling 
void shopSell(int onhand1, int onhand2, int onhand3, int onhand4, int onhand5, int onhand6, int onhand7, int onhand8, float price1,
	float price2, float price3, float price4, float price5, float price6, float price7, float price8, int counterview){
	
	printf("******************************************************************************************** \n");
		if (counterview == 1)
		{
	 		printf("                              Tycoon Meteor\'s Minerals \n");
		}
		
		if (counterview == 2)
		{
			printf("                               Pulsian Restoratives  \n");
		}
		
		if (counterview == 3)
		{
			printf("                                Archadian Luxuries  \n");
		}
		
		if (counterview == 4)
		{
			printf("                              Cid\'s Magical Escapades  \n");
		}
		
		if (counterview == 5)
		{
			printf("                                  Gaian Gratitudes   \n");
		}
		
		if (counterview == 6)
		{
			printf("                              Riches and Minerals of Spira  \n");
		}
	
    printf("******************************************************************************************** \n");
	printf("\n");
	printf("Shopkeeper: Selling an item? Which one? \n");
	printf("\n");
	
	printf("Item                          On hand                        Price\n"); 
	printf("\n");
	printf("[1] Phoenix Down                    %d                             %.2f G\n", onhand1, price1); 
	printf("[2] Elixir Essence                  %d                             %.2f G\n", onhand2, price2);
	printf("[3] Platinum Ingot                  %d                             %.2f G\n", onhand3, price3);
	printf("[4] Golden Materia                  %d                             %.2f G\n", onhand4, price4);
	printf("[5] Scarletite                      %d                             %.2f G\n", onhand5, price5);
	printf("[6] Adamantite                      %d                             %.2f G\n", onhand6, price6);
	printf("[7] Dark Matter                     %d                             %.2f G\n", onhand7, price7);
	printf("[8] Trapezohedron                   %d                             %.2f G\n", onhand8, price8); 
	
	printf("____________________________________________________________________________________________ \n"); 
	printf("Note: 0 Gil means that they are SOLD OUT \n"); 
	printf("Note: You cannot buy or sell items if they are SOLD OUT! \n");
	printf("____________________________________________________________________________________________ \n"); 
	printf("[L]eave \n");
	printf("\n");
	printf("Option: \n"); 
}
// function that deposits ur money 
void deposit(float *bankGil, float *onHandGil){
	
	float amtDeposit; 
	printf("========================================\n");
	printf("  How much Gil do you want to deposit? \n"); 
	printf("========================================\n");
	printf("Amount: ");
	scanf("%f", &amtDeposit); 

	if (*onHandGil >= amtDeposit && amtDeposit > 0) { // onhandgil should be greater /equals to amtdeposit
														// amt deposit should be greater than 0
		printf("Depositing %.2f", amtDeposit);
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);
		system("cls");
		printf("========================================\n");
		printf(" You have successfully deposited %.2f!\n", amtDeposit);
		printf("========================================\n");
		sleep(2);
	
		*bankGil += amtDeposit; 
		*onHandGil -= amtDeposit; 
		
	}
	
	else {
		printf("\n");
		printf("========================================\n");
		printf("          Insufficient Gil \n"); 
		printf("========================================\n");
	}
	
}
//function for withdrawing 
void withdraw(float *bankGil, float *onHandGil){ 
	
	float amtWithdraw; 
	printf("========================================\n");
	printf(" How much Gil do you want to Withdraw?\n"); 
	printf("========================================\n");
	printf("Amount: "); 
	scanf("%f", &amtWithdraw); 
	
	if (*bankGil >= amtWithdraw && amtWithdraw > 0) { // bankgil should be greater / equal to amtwithdraw 
		printf("Withdrawing %.2f", amtWithdraw); // and amtwithdraw should be greater than 0
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);
		system("cls");
		printf("========================================\n");
		printf(" You have successfully withdrawn %.2f!\n", amtWithdraw);
		printf("========================================\n");
		sleep(2);
		
		*onHandGil += amtWithdraw; 
		*bankGil -= amtWithdraw; 
		
	}
	
	else {
		printf("\n");
		printf("========================================\n");
		printf("          Insufficient Gil \n"); 
		printf("========================================\n");
	}
	
}
//function for paying debt 
void paydebt(float *onHandGil, float *debt){
	
	float pay; 
	printf("========================================\n");
	printf("      How much Gil will you pay?\n");
	printf("========================================\n");
	printf("Amount: "); 
	scanf("%f", &pay); 
	
	if (pay >= *debt ||pay <= *debt && pay > 0 && pay <= *onHandGil ){ // pay should be greater / equals to debt 
		printf("Paying %.2f", pay);							// or pay should be less than / equals to debt 
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);														// and pay should be greater than 0
		system("cls");												// pay should be less than / equal to onhandgil
		printf("========================================\n");
		printf(" You have successfully paid %.2f!\n", pay);
		printf("========================================\n");
		sleep(2);
			
		*debt -= pay ; 
		*onHandGil -= pay; 
		
	}
	
	else if (pay > *onHandGil ) {      // amount u want to pay is greater than onhandgil
		printf("\n");
		printf("========================================\n");
		printf("          Insufficient Gil \n"); 
		printf("========================================\n");
	}
}
//function for loaning 
void loan(float *onHandGil, float *debt){
	
	float amtLoan; 
	printf("========================================\n");
	printf("     How much Gil you want to loan?\n"); 
	printf("========================================\n");
	printf("Amount: ");
	scanf("%f", &amtLoan); 
	
	if (amtLoan > 0) 
	{
		printf("Processing loan %.2f", amtLoan);							
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);													
		system("cls");												
		printf("========================================\n");
		printf(" You have successfully loaned %.2f!\n", amtLoan);
		printf("========================================\n");
		sleep(2);
		
		*debt += amtLoan; 
		*onHandGil += amtLoan; 
	}
	
	else {
		printf("\n");
		printf("========================================\n");
		printf("            Input an amount \n"); 
		printf("========================================\n");
	}
}
// function when player buys an item 
void boughtItem(float *onHandGil, float *price){
	
	if(*onHandGil >= *price){
		*onHandGil -= *price; 
		
		system("cls"); 
		printf("===========================\n");
		printf(" you have %.2f G left!\n", *onHandGil); 
		printf("===========================\n");
		sleep(2);
	}
}
//function when player sells an item
void soldItem(float *onHandGil, float *price){
	
	if(*price > 0 ){
		*onHandGil += *price; 
		system("cls"); 
		printf("===========================\n");
		printf(" you have earned %.2f G !\n", *price); 
		printf("===========================\n");
		sleep(2);
	}
	
}
//randomize function
float randomize(int lower, int upper){
	
	return (rand() % (upper - lower + 1)) + lower;
}
//for special items function since they don't sold out //can also use randomize function 
float savePrice(float *price, int lower, int upper){
	
	return *price = randomize(lower, upper); 
	
}
// for items that gets solds out if its 30% 
float withChance(int randNum, float *price, int lower, int upper){
	
	randNum = randomize(1, 100); 

	
	if(randNum >= 0 && randNum <= 30){
		return *price = 0; // sets price 0 = means its sold out 
	}
	else (randNum > 30 && randNum <= 100);{
		
		return *price = randomize(lower, upper) ; // randomize the estimated price range 
	}
	
}
//shows when player quits the game or finish the game
void endGame(float *debt, float *gil, float *bankGil){
	
	float tGil; 
	float tProfit; 
	
	if (*debt > 0){
		
		tGil = *gil + *bankGil ; 
		tProfit = *gil - *debt; 
		
		printf("******************************************************************************************** \n");
		printf("                                   END OF THE GAME!\n");
		printf("******************************************************************************************** \n");
		printf("                         Total Gil Earned:  %f G\n", tGil); 
		printf("                         Debt Remaining:    %f G\n", *debt); 
		printf("\n");
		printf("                         Total Profit:     %f G\n", tProfit); 
		printf("____________________________________________________________________________________________ \n"); 
		printf("                    Merchant of the Rift: You are in Crippling debt! \n"); 
		printf("                                You have lost the game!                   \n");
		printf("____________________________________________________________________________________________ \n");
		printf("Play Again?[Y]es or [N]o \n");
		printf("Choice: ");
		
	}
	
	else if (*debt == 0 ){
		
		tGil = *gil + *bankGil ; 
		tProfit = *gil - *debt; 
		
		printf("******************************************************************************************** \n");
		printf("                                   END OF THE GAME!\n");
		printf("******************************************************************************************** \n");
		printf("                         Total Gil Earned:  %f G\n", tGil); 
		printf("                         Debt Remaining:    %f G\n", *debt); 
		printf("\n");
		printf("                         Total Profit:     %f G\n", tProfit); 
		printf("____________________________________________________________________________________________ \n"); 
		printf("        Merchant of the Rift: bruh That\'s the best you can do? Talk about pitiful! \n"); 
		printf("                                You have won the game! -_-                  \n");
		printf("____________________________________________________________________________________________ \n");
		printf("Play Again?[Y]es or [N]o \n");
		printf("Choice: ");

	}
	
}

int main(){
	
	char menu;
	char newQuit; 
	char playAgain; 
	int day= 0; 
	int titleCounter;
	int onhand[] =  {0,0,0,0,0,0,0,0}; // on hands starts at 0
	float price [] = {0,0,0,0,0,0,0,0};  //    since price are randomized
	float gil = 20000; 
	float debt = 50000;
	float bankGil = 0; 
	int i, randNum; 
	srand(time(NULL));
	
	printf("=================================================== \n");
	printf("                    Welcome to \n         GILGAMESH\'S MEGA GIL ADVENTURES!\n"); 
	
	printf("=================================================== \n");
	printf("          Press [S]tart Game or [Q]uit \n");
	printf("\n"); 
	printf("Choice: "); 
	scanf(" %c", &newQuit); //scans the choice
	
	while (!(newQuit == 'S' || newQuit == 's'|| newQuit == 'Q' || newQuit == 'q')){
		printf("Enter [S] or [Q] only!");
		printf("\n"); 
		printf("choice: \n"); 
		scanf(" %c", &newQuit);  
	}
	
		if(newQuit == 'S' || newQuit == 's'){
		system("cls"); // clears the start
		printf("Starting Game"); // makes it looks like it loads the game
		printf(".");  
		sleep(1);
		printf(".");  
		sleep(1);
		printf(".");  // little animation lol 
		sleep(1); // pause before continuing the program // sleep . sleep . sleep . 
		system("cls"); // clears the screen
		PlaySound(TEXT("rpgmusic.wav"),NULL,SND_ASYNC | SND_LOOP);
		menu = 'R'; // it will go to rift
		}
		else if (newQuit == 'Q' || newQuit == 'q'){
			endGame(&debt,&gil,&bankGil);
			scanf(" %c", &playAgain); 
			
		 	if (playAgain == 'Y' || playAgain == 'y' ){
		 		
		 			system("cls");
					printf("resetting game");
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls"); 
					PlaySound(TEXT("rpgmusic.wav"),NULL,SND_ASYNC | SND_LOOP);
					menu = 'R'; 
	
			}
			else if (playAgain == 'n' || playAgain == 'N'){
				
				system("cls"); 
				printf("Exiting Game"); 
				printf(".");  
				sleep(1);
				printf(".");  
				sleep(1);
				printf(".");   
				sleep(1);
				return 0; 	// exit (0); // it will exit 
			}
		}
	
	while (day <= 30 && menu == 'R' || newQuit == 'S' || newQuit == 's'){
		// rift
		if (menu == 'R'){
			
			printf("\n"); 
			printf("******************************************************************************************** \n");
			printf("                    Gilgamesh: Where Should my travels take me to?\n"); 
			printf("******************************************************************************************** \n");
			printf("\n");  	
			printf("[1]Tycoon Meteor\'s Minerals                                                     Day   #%d\n", day);
			printf("[2]Pulsian Restoratives                                                         Gil:  %.2f G\n", gil);
			printf("[3]Archadian Luxuries                                                           Debt: %.2f G\n",debt);
			printf("[4]Cid\'s Magical Escapades                                                      Bank: %.2f G\n",bankGil);
			printf("[5]Gaian Gratitudes\n");
			printf("[6]Riches and Minerals of Spira                                                 [Q]uit\n");
			printf("[7]Go see the Merchant of the Rift \n");
			printf("____________________________________________________________________________________________ \n"); 
			printf("Important note/s:\n");
			printf("-Travelling to Shops costs 1 day and your debt increases to 15%% \n"); 
			printf("-Visiting the Merchant of the Rift does not cost anything! \n"); 
			printf("-Choices should be in CAPS LOCK! \n");
			printf("____________________________________________________________________________________________ \n"); 
			printf("Your Choice:  \n "); 	// rift choices 
			
			char choice; 
			scanf(" %c", &choice); 
			system("cls");
			switch(choice){
				case '1':
					printf("Teleporting to Tycoon Meteor\'s Minerals"); 
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls"); 
					menu = '1'; //shopview name store name 
					titleCounter = 1; // tycoon meteors minerals - special item - item 8 - Trapezohedron 	
							for(i = 0; i < 1; i++){ // dont need a loop 
								withChance(randNum, &price[0], 500, 1200);	  //Phoenix Down  500 – 1,200 Gil 
								withChance(randNum, &price[1], 1500, 2100); // Elixir Essence  1,500 – 2,100 Gil
								withChance(randNum, &price[2], 5000, 7000); // Platinum Ingot 5,000 – 7,000 Gil
								withChance(randNum, &price[3], 3500, 5500); // Golden Materia 3,500 – 5,500 Gil
								withChance(randNum, &price[4], 8000, 12000); // Scarletite 8,000 – 12,000 Gil
								withChance(randNum, &price[5], 15000, 30000); // Adamantite 15,000 – 30,000 Gil
								withChance(randNum, &price[6], 40000, 70000); // Dark Matter 40,000 – 70,000 Gil
								savePrice(&price[7], 35000, 65000); // Trapezohedron-  special: 35,000 – 65,000 Gil
							} break; 
				case '2':
					printf("Teleporting to Pulsian Restoratives"); 
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls");
					menu = '1';
					titleCounter = 2; // pulsian restoratives - special item/s - item 1, 2 - phoenix down, elixir essence 
							for(i = 0; i < 8; i++){
							    savePrice(&price[0], 300, 800);  //Phoenix Down  - special: 300 – 800  Gil 
								savePrice(&price[1], 1000, 1700); // Elixir Essence  - special: 1000 – 1700 Gil
								withChance(randNum, &price[2], 5000, 7000); // Platinum Ingot 5,000 – 7,000 Gil
								withChance(randNum, &price[3], 3500, 5500); // Golden Materia 3,500 – 5,500 Gil
								withChance(randNum, &price[4], 8000, 12000); // Scarletite 8,000 – 12,000 Gil
								withChance(randNum, &price[5], 15000, 30000); // Adamantite 15,000 – 30,000 Gil
								withChance(randNum, &price[6], 40000, 70000); // Dark Matter 40,000 – 70,000 Gil
								withChance(randNum, &price[7], 60000, 90000); // Trapezohedron 60,000 - 90,000 Gil 
							} break;
				case '3':
					printf("Teleporting to Archadian Luxuries"); 
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls");
					menu = '1';
					titleCounter = 3; // Archadian Luxuries - special item - item 3 - Platinum Ingot 
							for(i = 0; i < 8; i++){
							    savePrice(&price[0], 500, 2100);  //Phoenix Down 500 - 1200 Gil
								savePrice(&price[1], 1500, 2100); // Elixir Essence  1500 - 2100 Gil
								withChance(randNum, &price[2], 4500, 6000); // Platinum Ingot - special: 4,500 - 6,000 Gil 
								withChance(randNum, &price[3], 3500, 5500); // Golden Materia 3,500 – 5,500 Gil
								withChance(randNum, &price[4], 8000, 12000); // Scarletite 8,000 – 12,000 Gil
								withChance(randNum, &price[5], 15000, 30000); // Adamantite 15,000 – 30,000 Gil
								withChance(randNum, &price[6], 40000, 70000); // Dark Matter 40,000 – 70,000 Gil
								withChance(randNum, &price[7], 60000, 90000); // Trapezohedron 60,000 - 90,000 Gil 
							} break;
				case '4':
					printf("Teleporting to Cid\'s Magical Escapades"); 
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls");
					menu = '1';
					titleCounter = 4; // Cids Magical Escapades - special item - item 4 - Golden Materia 
							for(i = 0; i < 8; i++){
							    withChance(randNum, &price[0], 500, 1200);  //Phoenix Down  500 - 1200 Gil 
								withChance(randNum, &price[1], 1500, 2100); // Elixir Essence   1500 - 2100 Gil
								withChance(randNum, &price[2], 5000, 7000); // Platinum Ingot 5,000 – 7,000 Gil
								savePrice(&price[3], 3000, 5000); // Golden Materia - special: 3,000 - 5,000 Gil 
								withChance(randNum, &price[4], 8000, 12000); // Scarletite 8,000 – 12,000 Gil
								withChance(randNum, &price[5], 15000, 30000); // Adamantite 15,000 – 30,000 Gil
								withChance(randNum, &price[6], 40000, 70000); // Dark Matter 40,000 – 70,000 Gil
								withChance(randNum, &price[7], 60000, 90000); // Trapezohedron 60,000 - 90,000 Gil 
							}  break;
				case '5':
					printf("Teleporting to Gaian Gratitudes"); 
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls");
					menu = '1';
					titleCounter = 5; // Gaian Gratitudes - special item - item 5 - Scarletite 
							for(i = 0; i < 1; i++){
							    withChance(randNum, &price[0], 500, 1200); //Phoenix Down  500 - 1200 Gil 
								withChance(randNum, &price[1], 1500, 2100);// Elixir Essence   1500 - 2100 Gil
								withChance(randNum, &price[2], 5000, 7000); // Platinum Ingot 5,000 – 7,000 Gil
								withChance(randNum, &price[3], 3500, 5500); // Golden Materia 3,500 - 5,500 
								savePrice(&price[4], 5000, 10000); // Scarletite - special: 5,000 - 10,000 Gil 
								withChance(randNum, &price[5], 15000, 30000); // Adamantite 15,000 – 30,000 Gil
								withChance(randNum, &price[6], 40000, 70000); // Dark Matter 40,000 – 70,000 Gil
								withChance(randNum, &price[7], 60000, 90000); // Trapezohedron 60,000 - 90,000 Gil 
							}  break;
				case '6':
					printf("Teleporting to Riches and Minerals of Spira"); 
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls");
					menu = '1';
					titleCounter = 6; // Riches and Minerals of Spira - special item - item 6,7 - Adamantite, Dark Matter 
							for(i = 0; i < 8; i++){ 
							    withChance(randNum, &price[0], 500, 1200); //Phoenix Down  500 - 1200 Gil 
								withChance(randNum, &price[1], 1500, 2100);// Elixir Essence   1500 - 2100 Gil
								withChance(randNum, &price[2], 5000, 7000); // Platinum Ingot 5,000 – 7,000 Gil
								withChance(randNum, &price[3], 3500, 5500); // Golden Materia 3,500 - 5,500 
								withChance(randNum, &price[4], 8000, 12000); // Scarletite  8,000 - 12,000 Gil 
								savePrice(&price[5], 9500, 20000); // Adamantite - special: 9,500 – 20,000 Gil
								savePrice(&price[6], 22000, 50000); // Dark Matter - special: 22,000 – 50,000 Gil
								withChance(randNum, &price[7], 60000, 90000); // Trapezohedron 60,000 - 90,000 Gil 
							}  break;
				case '7':
					printf("Teleporting to the Merchant of the Rift"); 
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls");
					menu = '4'; break;  //add case 7 here? with menu == 4 does not cost a day!
				case 'Q': 
					endGame(&debt,&gil,&bankGil); 
						scanf(" %c", &playAgain); 
						
						
					 	if (playAgain == 'Y' || playAgain == 'y' ){
					 		
					 		int j; 
					 		day= 0; 
					 		
							for(j = 0; j < 8; j++){
							onhand[j] = onhand[j] - onhand[j]; 
							}      // on hands starts at 0
							
							int price [] = {0,0,0,0,0,0,0,0}; //    since price are randomized
							gil = 20000; 
							debt = 50000; 
							bankGil = 0; 
							
							system("cls");
							printf("Resetting Game");
							printf(".");  
							sleep(1);
							printf(".");  
							sleep(1);
							printf(".");   
							sleep(1);
							system("cls"); 
							PlaySound(TEXT("rpgmusic.wav"),NULL,SND_ASYNC | SND_LOOP);
							menu = 'R';  
							
						}
						else if (playAgain == 'n' || playAgain == 'N'){
							system("cls"); 
							printf("Exiting Game"); 
							printf(".");  
							sleep(1);
							printf(".");  
							sleep(1);
							printf(".");   
							sleep(1);
							return 0;  //exit (0); 
						} break; // it will exit 

				case 'q':
					endGame(&debt,&gil,&bankGil);
					scanf(" %c", &playAgain); 
					
					
					 	if (playAgain == 'Y' || playAgain == 'y' ){
					 		
					 		int j; 
					 		day= 0; 
					 		
							for(j = 0; j < 8; j++){
							onhand[j] = onhand[j] - onhand[j]; 
							}      // on hands starts at 0
							
							int price [] = {0,0,0,0,0,0,0,0}; //    since price are randomized dont need 
							gil = 20000; 
							debt = 50000; 
							bankGil = 0; 
							
							system("cls");
							printf("Resetting Game");
							printf(".");  
							sleep(1);
							printf(".");  
							sleep(1);
							printf(".");   
							sleep(1);
							system("cls"); 
							PlaySound(TEXT("rpgmusic.wav"),NULL,SND_ASYNC | SND_LOOP);
							menu = 'R';  
				
						 }
						else if (playAgain == 'n' || playAgain == 'N'){
							system("cls"); 
							printf("Exiting Game"); 
							printf(".");  
							sleep(1);
							printf(".");  
							sleep(1);
							printf(".");   
							sleep(1);
							return 0; // exit (0); 
						} break;  // it will exit  
			}
		}
			
		if (menu == '1'){
			shopView(onhand[0], onhand[1], onhand[2], onhand[3], onhand[4], onhand[5], onhand[6], onhand[7], price[0],
	 	price[1],  price[2],  price[3],  price[4],  price[5],  price[6],  price[7],  titleCounter); 
			char choice; 
			float increase; 
			float increaseDep; 
			scanf(" %c", &choice); 
	
			switch(choice){
				case 'B':
					system("cls"); 
					menu = '2'; break; 
				case 'S':
					system("cls"); 
					menu = '3'; break; 
				case 'L': 
					system("cls"); 
					printf("Returning to Rift");
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1); 
					system("cls"); 
					
					menu = 'R'; 
					day++; 
					increase = debt * 0.15; 
					debt = increase + debt; 
					increaseDep = bankGil * 0.10; 
					bankGil = increaseDep + bankGil;  break; //leave shop costs a day debt increases %15 and 10% increase each day
			}
		}
		
		if (menu == '2'){
			shopBuy(onhand[0], onhand[1], onhand[2], onhand[3], onhand[4], onhand[5], onhand[6], onhand[7], price[0],
	 price[1],  price[2],  price[3],  price[4],  price[5],  price[6],  price[7],  titleCounter); 
			char choice; 
			int index;  
			scanf(" %c", &choice); 
			if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5' || choice == '6' || choice == '7' || choice == '8'){
				index = choice - '0'; // e.g  int 1 = char '1' - char '0'
				index = index - 1;  // e.g int 0 = index (1) - 1 
			}
			
			switch(choice){
				case '1': 
					if (price[0]> 0 && price[0] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[0]); 
					}
					else if (price[0]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break; 
				case '2': 
					if (price[1]> 0 && price[1] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[1]); 
					}
					else if (price[1]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break; 
				case '3': 
					if (price[2]> 0 && price[2] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[2]); 
					}
					else if (price[2]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break; 
				case '4': 
					if (price[3]> 0 && price[3] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[3]); 
					}
					else if (price[3]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break;
				case '5': 
					if (price[4]> 0 && price[4] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[4]); 
					}
					else if (price[4]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break;
				case '6': 
					if (price[5]> 0 && price[5] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[5]); 
					}
					else if (price[5]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break;
				case '7': 
					if (price[6]> 0 && price[6] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[6]); 
					}
					else if (price[6]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break;
				case '8': 
					if (price[7]> 0 && price[7] <= gil){
					onhand[index] = onhand[index] + 1;
					boughtItem(&gil, &price[7]); 
					}
					else if (price[7]> gil) {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("     Insufficient Gil\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n"); 
					}
					else  {
					printf("\n");
					system("cls");
					printf("===========================\n");
					printf("  This Item is Sold Out!\n");
					printf("===========================\n");
					sleep(2); 
					printf("\n");
					}  break;
				case 'L':
					system("cls");
					menu = '1'; break; 
			}
		}
		
		if (menu == '3'){
			shopSell(onhand[0], onhand[1], onhand[2], onhand[3], onhand[4], onhand[5], onhand[6], onhand[7],  price[0],
	 price[1],  price[2],  price[3],  price[4],  price[5],  price[6],  price[7],  titleCounter); 
			char choice;
			int index;  
			scanf(" %c", &choice); 
			if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5' || choice == '6' || choice == '7' || choice == '8'){
				index = choice - '0'; // e.g  int 1 = char '1' - char '0' 
				index = index - 1; // e.g int 0 = index (1) - 1 
			}
				switch(choice){
					case '1': 
					
						if (onhand[index] > 0 && price[0] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[0]);  	
						}  
					
						else if (onhand[index] == 0 && price[0] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[0] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;   
					case '2': 
					
						if (onhand[index] > 0 && price[1] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[1]);  	
						}  
					
						else if (onhand[index] == 0 && price[1] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[1] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;  
					case '3': 
					
						if (onhand[index] > 0 && price[2] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[2]);  	
						}  
					
						else if (onhand[index] == 0 && price[2] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[2] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;
					case '4': 
					
						if (onhand[index] > 0 && price[3] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[3]);  	
						}  
					
						else if (onhand[index] == 0 && price[3] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[3] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;
					case '5': 
					
						if (onhand[index] > 0 && price[4] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[4]);  	
						}  
					
						else if (onhand[index] == 0 && price[4] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[4] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;
					case '6': 
					
						if (onhand[index] > 0 && price[5] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[5]);  	
						}  
					
						else if (onhand[index] == 0 && price[5] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[5] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;
					case '7': 
					
						if (onhand[index] > 0 && price[6] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[6]);  	
						}  
					
						else if (onhand[index] == 0 && price[6] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[6] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;
					case '8': 
					
						if (onhand[index] > 0 && price[7] > 0){
							
							onhand[index] = onhand[index] - 1;  // e.g onhand[0] = onhand[0] - 1
							soldItem(&gil, &price[7]);  	
						}  
					
						else if (onhand[index] == 0 && price[7] > 0){ //if onhand is 0 but its not sold out
							printf("\n"); 
							system("cls"); 
							printf("==================================\n");
							printf(" you do not have an item to sell! \n"); 
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						} 
						
						else if (onhand[index] > 0 && price[7] == 0){ // if onhand is greater than 0 but its sold out 
							printf("\n");
							system("cls");
							printf("==================================\n");
							printf("     This Item is Sold Out!\n");
							printf("==================================\n");
							sleep(2); 
							printf("\n"); 
						}
						
						else { // if onhand is 0 and its sold out 
							printf("\n"); 
							system("cls");
							printf("==================================\n");
							printf(" you do not have an item to sell! \n  and this item is sold out! \n");
							printf("==================================\n");
							sleep(2);
							printf("\n");
						} break;
					case 'L':
						system("cls");
						menu = '1'; break; 
				}		
		}
		
		if (menu == '4'){ // merchant of the rift
				printf("\n");
				printf("Merchant of the Rift: Are you ready to pay your debt?");
				printf("\n"); 
				printf("[1] Deposit Gil                                                                 Day   #%d\n", day);
				printf("[2] Withdraw Gil                                                                Gil:  %.2f G\n", gil);
				printf("[3] Pay off Debt                                                                Debt: %.2f G\n", debt);	
				printf("[4] Ask for additional loan                                                     Bank: %.2f G\n",bankGil);        
				printf("[5] Leave \n");
				
				printf("____________________________________________________________________________________________ \n"); 
				
				printf("Your Choice:  \n ");  
				
			char choice; 
			scanf(" %c", &choice); 
	 		switch(choice){
				case '1':
					deposit(&bankGil, &gil);   break; /* void for depositing gil - increases 10% deposit */ 
				case '2':
					withdraw(&bankGil, &gil);  break;/* void  for withdraw gil */
				case '3':
					paydebt(&gil, &debt);  break; /* pay off debt void */
				case '4':
					system("cls");
					loan(&gil, &debt);   break; /* loan void  */
				case '5':
					system("cls"); 
					printf("Returning to Rift");
					printf(".");  
					sleep(1);
					printf(".");  
					sleep(1);
					printf(".");   
					sleep(1);
					system("cls");
					menu = 'R';  break; /* leave and go to rift select */
			}
		}		
	}
	return 0; 
}
