#include <iostream>
using namespace std;

//student grade manager assignment 

#define title_height 5
#define title_width 22
string title = "STUDENT GRADE MANAGER"; 


int main() {
    for(int j = 0; j < title_height; j++){
        for(int i = 0; i < title_width; i++){
            if(j == 0 || j == 4){
                cout<<"-";
            }
            else if(j == 2 && i == 0){
                cout<<title; 
                i = i + (title.length() - 1); // place i after the title(skip it)
            }
            else
                cout<<"  ";
        }
        cout<<endl; 
    }
}                                              