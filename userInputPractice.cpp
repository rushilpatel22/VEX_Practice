#include <iostream>
using namespace std; 
string name; 
string id; 
string grade; 
string array1[5][3]; 

void returnValues(){
 for(int k = 0; k<5; k++){
    for(int z = 0; z<3; z++){
        if(z==0){
          cout << "Name: " << array1[k][z] << endl;   
        }
        if(z==1){
          cout << "ID: " << array1[k][z] << endl;   
        }
        if(z==2){
          cout << "Grade: " << array1[k][z] << endl;   
        }
      }
}
}
int main() {
  for(int i = 0; i<5; i++){
    for(int j = 0; j<3; j++){
        if(j==0){
            cout<< "Enter in the name of the student" << endl; 
            cin >> name; 
            array1[i][0] = name; 
          }
        if(j==1){
            cout<< "Enter in the ID of the student" << endl; 
            cin >> id; 
            array1[i][1] = id; 
          }
          if(j==2){
            cout<< "Enter in the grade of the student" << endl; 
            cin >> grade; 
            array1[i][2] = grade; 
          }
        }
      }
    returnValues();  
  }

