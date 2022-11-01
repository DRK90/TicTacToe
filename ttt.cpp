#include <iostream>
#include <string>
#include <vector>

#include "ttt_functions.h"

int main(){

	bool winner = false;
	int player = 1;
	int selection;
	int x = 0;
	std::vector<char> nums ({'1','2','3','4','5','6','7','8','9'});
	bool goodChoice = false;

	while(!winner){
		std::cout << "\x1B[2J\x1B[H";
		display_grid(nums);
		goodChoice = false;	

		while(goodChoice == false){
			std::cout<<"Player "<<player<<" make a selection: ";
			std::cin>>selection;
			
			if(nums[selection-1]=='O'||nums[selection-1]=='X'){
				std::cout<<"Already Selected! Select again!\n";
				continue;
			} else if (selection < 1 || selection > 9){
				std::cout<<"Off the board, try again!\n";
				continue;
			} else {
				if (player==1){
					nums[selection-1]='X';
					winner = checkWinner(player, nums);
					
				} else if (player==2){
					nums[selection-1]='O';
					winner = checkWinner(player, nums);
				}

				goodChoice = true;
				if (player == 1){
					player = 2;
				} else {
					player = 1;
				}

			}
		}

		

	}

//	std::cout << "\x1B[2J\x1B[H";
	display_grid(nums);
	return 0;
}
