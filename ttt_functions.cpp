#include <iostream>
#include <string>
#include <vector>

#include "ttt_functions.h"



void display_grid(std::vector<char> nums){
	std::cout<<"   |   |   \n";
	std::cout<<" "<<nums[0]<<" | "<<nums[1]<<" | "<<nums[2]<<" \n";
	std::cout<<"---|---|---\n";
	std::cout<<" "<<nums[3]<<" | "<<nums[4]<<" | "<<nums[5]<<" \n";
	std::cout<<"---|---|---\n";
	std::cout<<" "<<nums[6]<<" | "<<nums[7]<<" | "<<nums[8]<<" \n";
	std::cout<<"   |   |   \n";

}

bool checkWinner(int player, std::vector<char> nums){
	if((nums[0]==nums[1]&&nums[1]==nums[2]) || (nums[3]==nums[4]&&nums[4]==nums[5]) ||
		(nums[6]==nums[7]&&nums[7]==nums[8]) || (nums[0]==nums[4]&&nums[4]==nums[8]) ||
		(nums[0]==nums[3]&&nums[3]==nums[6]) || (nums[1]==nums[4]&&nums[4]==nums[7])||
		(nums[2]==nums[5]&&nums[5]==nums[8]) || (nums[2]==nums[4]&&nums[4]==nums[6])){
		std::cout<<"Player "<<player<<" wins!\n";

		return true;
	} else {
		return false;
	}
}
