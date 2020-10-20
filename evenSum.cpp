//Purpose of the below code: Receives five integers from the user and returns the sum of only the even numbers. 

#include <iostream>
using namespace std; 

int main() {
  //declaration of the variables sum and number
  int sum; 
  int number;  

  //loop used to receive 5 integers from the user
  for(int i = 0; i < 5; i++){
    cout << "Please enter an integer below" << endl; 
    cin >> number;

    //an if conditional statement used to evaluate if a number is even or not
    if(number % 2 == 0){
       sum += number;   
    }
  }
  cout << "The sum of the numbers is " << sum << endl; 
}

