// Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>     /* atof */
#include <cstdlib>
#include <ctime>

using namespace std;


int userInput = 0;
int nums[100];
int tempe[100];
void createaaray() {

	srand(time(NULL));
	for (int i = 0; i < 100; i++) {

		nums[i] = rand() % 100 + 1;


	}


}


void display() {

	while ((userInput != 1) && (userInput != 2) && (userInput != 3) && (userInput != 4) && (userInput != 5)) {

		cout << "1\n2\n3\n4\n5\tEnd\n";
		cout << "Enter choice: ";
		cin >> userInput;
		cout << "\n";
	}


}


void display2() {

	for (int i = 0; i < 100; i++) {

		cout << nums[i] << "\n";


	}

	cout << "\n";

}


void sort() {


	int i, j, tmp;
	for (i = 1; i < 100; i++) {
		j = i;
		while (j > 0 && nums[j - 1] > nums[j]) {
			tmp = nums[j];
			nums[j] = nums[j - 1];
			nums[j - 1] = tmp;
			j--;
		}
		
	}
}

void sorttemp() {
	int i, j, tmp;
	for (i = 1; i < 100; i++) {
		j = i;
		while (j > 0 && tempe[j - 1] > tempe[j]) {
			tmp = tempe[j];
			tempe[j] = tempe[j - 1];
			tempe[j - 1] = tmp;
			j--;
			
		}

	}


}


void tempee() {

	for (int i = 0; i < 100; i++) {
		tempe[i] = nums[i];
	}


}

void search() {
	int count = 0;
	int num1;
	cout << "Enter search: ";
	cin >> num1;
	cout << "\n";
	int left = 0;
	int middle;
	int right = 99;
	//int middle = (left + right) / 2;
	tempee();
	while (left <= right) {
		middle = (left + right) / 2;
		if (tempe[middle] == num1) {
			count++;
			//right = middle - 1;
			//left = middle + 1;
			


			tempe[middle] = 0;
			sorttemp();

		//	if(nums[middle+1]==num1){ right = middle - 1; }
		//	if (nums[middle - 1] == num1) { left = middle + 1; }
			cout << middle<<endl;
		}
		else if (tempe[middle] > num1) { 
			right = middle - 1; 
		}
		else if (tempe[middle] < num1) {
			left = middle + 1; 
		}

	}

	cout << "The number " << num1 << " has occured " << count << " times\n";
}





int main()
{
	userInput = 0;
	display();

	if (userInput == 1) {
		createaaray();
	
		main();
	}
	else if (userInput == 2) {
		display2();

		main();
	}
	else if (userInput == 3) {
		sort();

		main();
	}
	else if (userInput == 4) {
		search();

		main();
	}
	//system("pause");

	return 0;
}

