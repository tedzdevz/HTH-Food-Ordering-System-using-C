#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//Different Variables
int loop = 1, vmel, items, errors, timer = 3, list, fadd; //Natural Numbers
int cus[50], food[100][1] = {}, buffer[100];; //Strings
float cart, cart2, payment, vat; //Real Numbers


//Colors
void textcolor(int color);
void cyan(){
	printf("\033[0;36m");
}
void green(){
	printf("\033[1;32m");
}
void red () {
	printf("\033[1;31m");
}
void reset () {
	printf("\033[0m");
}

//IF the user puts 5 errors at the same time
void error(){
	
	
	if(errors == 4){
		red();
		printf("Warning: Last Error cause this System will shutdown\n");
		reset();
	}else if(errors == 5){
		system("cls");
		red();
		printf("Warning: System Overload!!\n");
		printf("Warning: Too much Errors!!\n");
		printf("Warning: Avoiding further more errors\n");
		printf("Warning: The System will shutting down in 3");
		timers();
		reset();
		abort();
	}
}

//Timer Function
void timers(){
	while(timer != 0){
		red();
		printf("\n%d...", timer);
		timer--;
		reset();
		sleep(1);
	}
}

//Main Funciton
main(){
	mainmenu();
}

//The Real Main Function
void mainmenu() {
	system("cls");	
	
	int wel;
	
	do{
		cyan();
		printf("     |||Welcome to|||\n");
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("[1] Show list of Meals\n");
		printf("[2] Quit using the Machine\n");
		printf("Input: ");
		scanf("%d", &wel);
	
		if(wel == 1){
			meals();
		}else if(wel == 2){
			red();
			printf("Closing in");
			reset();
			timers();
		}else{
			system("cls");
			red();
			printf("Warning: Error! Please input only 1-3\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}


//Next Part of the Main Menu
void meals(){
	system("cls");
	
	int mel;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Meals\n");
		printf("[1] Hamburger\n");
		printf("[2] Rice\n");
		printf("[3] Fries\n");
		printf("[4] Beverage\n");
		printf("[5] Steak\n");
		printf("[6] Chicken\n");
		printf("[7] Ice Cream\n");
		printf("[8] Pasta\n");
		printf("[9] Soup\n");
		printf("[10] Desserts\n");
		printf("Input: ");
		getchar();
		scanf("%d", &mel);
		
		
			if(mel == 1){
				burger();
			}else if(mel == 2){
				rice();
			}else if(mel == 3){
				fries();
			}else if(mel == 4){
				beverage();
			}else if(mel == 5){
				steak();
			}else if(mel == 6){
				chicken();
			}else if(mel == 7){
				icecream();
			}else if(mel == 8){
				pasta();
			}else if(mel == 9){
				soup();
			}else if(mel == 10){
				desserts();
			}else{
				system("cls");
				red();
				printf("warning: Error! Please input only 1-7\n");
				error();
				errors = errors + 1;
				reset();
				loop = 0;
			}
		}while(loop == 0);
	
}	



//List of the foods
void burger(){ //Burger Function
	system("cls");
	
	int bur, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Burgers\n");
		printf("[1] Classic Burger\t $1.10\t\n");
		printf("[2] Cheese Burger\t $1.18\t\n");
		printf("[3] Hotdog Bun   \t $1.30\t\n");
		printf("[4] Veggie Burger\t $1.23\t\n");
		printf("[5] Chicken Burger\t $1.22\t\n");
		printf("[6] Fish Burger  \t $1.28\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &bur);
		
		if(bur == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Classic Burger\t$1.10";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.10 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bur == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Cheese Burger\t$1.18";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.18 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bur == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Hotdog Bun\t$1.30";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.30 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bur == 4){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Veggie Burger\t$1.23";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.23 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bur == 5){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Chicken Burger\t$1.22";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.22 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bur == 6){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Fish Burger\t$1.28";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.28 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void rice(){ //Rice Function
	system("cls");
	
	int ric, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Rice\n");
		printf("[1] Plain Rice\t $1.00\t\n");
		printf("[2] Garlic Rice\t $1.15\t\n");
		printf("[3] Fries Rice\t $1.25\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &ric);
		
		if(ric == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Plain Rice\t$1.00";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.00 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ric == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Garlic Rice\t$1.15";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.15 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ric == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Fries Rice\t$1.25";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.25 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void fries(){ //Fries Function
	system("cls");
	
	int fri, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Fries\n");
		printf("[1] Cheese Fries\t $1.50\t\n");
		printf("[2] Sour Cream Fries\t $1.70\t\n");
		printf("[3] Barbeque Fries\t $1.54\t\n");
		printf("Input: ");
		scanf("%d", &fri);
		
		if(fri == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Cheese Fries\t $1.50";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.50 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(fri == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Sour Cream Fries\t $1.70";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.70 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(fri == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Barbeque Fries\t $1.54";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.54 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void beverage(){ //Beverage Function
	system("cls");
	
	int bev, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Beverage\n");
		printf("[1] Juice\t $1.10\t\n");
		printf("[2] Iced Tea\t $1.18\t\n");
		printf("[3] Pineapple\t $1.30\t\n");
		printf("[4] Soda\t $1.23\t\n");
		printf("[5] Coke\t $1.22\t\n");
		printf("[6] Sprite\t $1.28\t\n");
		printf("[7] Royal\t $1.26\t\n");
		printf("[8] Water\t $1.21\t\n");
		printf("[9] Coffee\t $1.38\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &bev);
		
		if(bev == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Juice\t $1.10";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.10 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Iced Tea\t $1.18";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.18 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Pineapple\t $1.30";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.30 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 4){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Soda\t $1.23";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.23 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 5){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Coke\t $1.22";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.22 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 6){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Sprite\t $1.28";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.28 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 7){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Royal\t $1.26";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.26 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 8){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Water\t $1.21";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.21 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(bev == 9){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Coffee\t $1.38";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.38 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
	
	
}

void steak(){ //Rice Function1
	system("cls");
	
	int ste, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Steaks\n");
		printf("[1] Filet Steak\t $2.20\t\n");
		printf("[2] Tenderloin Steak\t $2.23\t\n");
		printf("[3] Rib Eye Steak\t $2.55\t\n");
		printf("[4] T-Bone Steak\t $2.73\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &ste);
		
		if(ste == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Filet Steak\t $2.20";
				}else{
				
				}
			}
			list = list + items;
			cart = 2.20 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ste == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Tenderloin Steak\t $2.23";
				}else{
					
				}
			}
			list = list + items;
			cart = 2.23 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ste == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Rib Eye Steak\t $2.73";
				}else{
					
				}
			}
			list = list + items;
			cart = 2.73 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ste == 4){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "T-Bone Steak\t $2.25";
				}else{
					
				}
			}
			list = list + items;
			cart = 2.25 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void chicken(){ //Chicken Function1
	system("cls");
	
	int chi, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Chickens\n");
		printf("[1] Fried Chicken\t $2.10\t\n");
		printf("[2] Plain Chicken\t $2.23\t\n");
		printf("[3] Spicy Chicken\t $2.25\t\n");
		printf("[4] Baked Chicken Strips\t $2.33\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &chi);
		
		if(chi == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Fried Chicken\t $2.20";
				}else{
				
				}
			}
			list = list + items;
			cart = 2.20 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(chi == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Plain Chicken\t $2.23";
				}else{
					
				}
			}
			list = list + items;
			cart = 2.23 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(chi == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Spicy Chicken\t $2.25";
				}else{
					
				}
			}
			list = list + items;
			cart = 2.25 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(chi == 4){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Baked Chicken Strips\t $2.33";
				}else{
					
				}
			}
			list = list + items;
			cart = 2.33 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void icecream(){ //Ice Cream Function
	system("cls");
	
	int ice, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Ice Creams\n");
		printf("[1] Chocolate\t $1.40\t\n");
		printf("[2] Mango\t $1.48\t\n");
		printf("[3] Ube\t $1.30\t\n");
		printf("[4] Vanilla\t $1.33\t\n");
		printf("[5] Cookies n' Cream\t $1.42\t\n");
		printf("[6] Strawberry\t $1.38\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &ice);
		
		if(ice == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Chocolate\t $1.40";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.40 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ice == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Mango\t $1.48";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.48 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ice == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Ube\t $1.30";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.30 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ice == 4){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Vanilla\t $1.33";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.33 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ice == 5){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Cookies n' Cream\t $1.42";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.42 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(ice == 6){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Strawberry\t $1.38";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.38 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void pasta(){ //Pasta Function
	system("cls");
	
	int pas, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Pasta\n");
		printf("[1] Spaghetti\t $1.12\t\n");
		printf("[2] Mac n' Cheese\t $1.21\t\n");
		printf("[3] Lasagna\t $1.25\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &pas);
		
		if(pas == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Spaghetti\t $1.12";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.12 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(pas == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Mac n' Cheese\t $1.21";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.21 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(pas == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Lasagna\t $1.25";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.25 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void soup(){ //Soup Function
	system("cls");
	
	int pas, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Soups\n");
		printf("[1] Chicken Noodle Soup\t $1.56\t\n");
		printf("[2] Wonton Soup\t $1.48\t\n");
		printf("[3] Pork Noodle Soup\t $1.64\t\n");
		printf("[4] Ramen Soup\t $1.61\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &pas);
		
		if(pas == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Chicken Noodle Soup\t $1.56";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.56 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(pas == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Wonton Soup\t $1.48";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.48 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(pas == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Pork Noodle Soup\t $1.64";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.64 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(pas == 4){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Ramen Soup\t $1.61";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.61 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void desserts(){ //Desserts Function
	system("cls");
	
	int sou, x;
	
	do{
		cyan();
		printf("***HTH Food Ordering System***\n");
		reset();
		printf("List of Desserts\n");
		printf("[1] Cheesecake\t $1.31\t\n");
		printf("[2] Cookie Bars\t $1.23\t\n");
		printf("[3] Mango Float\t $1.19\t\n");
		printf("[4] Salad\t $1.11\t\n");
		printf("Input: ");
		getchar();
		scanf("%d", &sou);
		
		if(sou == 1){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Cheesecake\t $1.31";
				}else{
				
				}
			}
			list = list + items;
			cart = 1.31 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(sou == 2){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Cookie Bars\t $1.23";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.23 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(sou == 3){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Mango Float\t $1.19";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.19 * items;
			cart2 = cart2 + cart;
			receipt();
		}else if(sou == 4){
			printf("How many items: ");
			getchar();
			scanf("%d",&items);
			fadd = fadd + items;
			for(x = 0;x < fadd;x++){
				if(food[x][1] == NULL){
					food[x][1] = "Salad\t $1.11";
				}else{
					
				}
			}
			list = list + items;
			cart = 1.11 * items;
			cart2 = cart2 + cart;
			receipt();
		}else{
			system("cls");
			red();
			printf("Warning:Error! Please input only 1-6\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}



//The final phase of the project which is Receipts
void orderagain(){ //If the user will order again
	
	int order;
	
	do{
		printf("\nDo you want to Order Again? \n1-Yes \n2-No\n");
		printf("Input: ");
		getchar();
		scanf("%d",&order);
		
		if(order == 1){
			meals();
			loop = 1;
		}else if(order == 2){
			total();
			loop = 1;
		}else{
			red();
			printf("Warning: Error! Input 1-2 Only\n");
			error();
			errors = errors + 1;
			reset();
			loop = 0;
		}
	}while(loop == 0);
}

void total(){ //Calculating the total here
	
	float totalall;
	
	vat = cart2 * 0.15;
	totalall = cart2 + vat;
	
	
	system("cls");
	cyan();
	printf("***HTH Food Ordering System***\n");
	reset();
	printf("VAT: $%.2f\n", vat);
	printf("Total(w/o VAT): $%.2f\n", cart2);
	printf("Total: $%.2f\n", totalall);
	printf("Enter Customer Name: ");
	scanf("%s",&cus);
	printf("Input Payment: ");
	getchar();
	scanf("%f", &payment);
	receiptfinal();
}

void receipt(){ //Showing the receipt while the system ask for the payment
	int order, loop = 1, o;
	
	do{
		printf("\nDo you want to see your orders? \n1-Yes \n2-No\n");
		printf("Input: ");
		getchar();
		scanf("%d", &order);
		if(order == 1){
			printf("\nYour Orders:\n");
			green();
			for(o = 0;o < list;o++){
				printf("%d: %s\n", (o+1), food[o][1]);
			}
			reset();
			orderagain();
		}else if(order == 2){
			orderagain();
		}else{
			red();
			printf("Warning: Error! Input 1-2 only");
			reset();
			loop = 0;
		}
	}while(loop == 0);
	
	
}

void receiptfinal(){ //The Whole Receipt of the Ordering System
	//File I/O for receipt
	FILE * fpointer;
	
	fpointer = fopen("Customer Receipt.txt" ,"w");	
	
	//Command Prompt Receipt
	system("cls");
	int o,again;
	float totalall, change, loop = 1;
	
	vat = cart2 * 0.15;
	totalall = cart2 + vat;
	change = payment - totalall;
 
	printf("List of Orders:\n");
	green();
	for(o = 0;o < list;o++){
		printf("%d: %s\n", (o+1), food[o][1]);
	}
	printf("VAT:\t$%.2f\n", vat);
	printf("Total:\t$%.2f\n", totalall);
	printf("Payment:\t$%.2f\n", payment);
	printf("Change:\t$%.2f\n", change);
	printf("Customer Name: %s", cus);
	reset();
	do{
		printf("\nDo you want to use this Machine again? 1-Yes 2-No\n");
		printf("Input: ");
		scanf("%d", &again);
		
		if(again == 1){
			vat = 0;
			totalall = 0;
			payment = 0;
			change = 0;
			fadd = 0;
			list = 0;
			memset(food, 0, sizeof(food));
			mainmenu();
		}else if(again == 2){
			red();
			printf("System Shutting Down in");
			reset();
			timers();
		}else{
			red();
			printf("Warning: Error! Incorrect input");
			reset();
			loop = 0;
		}
	}while(loop == 0);
	
	//For File I/O to print the Receipt
	fprintf(fpointer, "***HTH Food Ordering System***\n",totalall);
	fprintf(fpointer, "\tOFFICIAL RECEIPT\n",totalall);
	fprintf(fpointer, "Customer Orders:\n",totalall);
	for(o = 0;o < list;o++){
		fprintf(fpointer, "%d: %s\n", (o+1), food[o][1]);
	}
	fprintf(fpointer, "Customer Name: %s\n", cus);
	fprintf(fpointer, "VAT:\t$%.2f\n", vat);
	fprintf(fpointer, "Total:\t$%.2f\n", totalall);
	fprintf(fpointer, "Payment:\t$%.2f\n", payment);
	fprintf(fpointer, "Change:\t$%.2f\n", change);
	fclose(fpointer);
	
}
