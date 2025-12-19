#include<iostream>
using namespace std;

//Write the function printO() here
char printO(int rows, int cols){
	if (rows <= 0 || cols <= 0){
		cout << "Invalid input";
		return ' ';
	}
	
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			cout << "O";
		}
		cout << "\n";
	}
	return ' ';
}

int main(){
	
	return 0;
}
