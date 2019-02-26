#include <stdio.h>
#include <cs50.h>
//this program was made by Aniya Forte and Matthew Delgato//
int main(void){
    int a= get_int("How many different assignments?\n");//Ask for the number of assignments//
    
    int earned[a];//Creates array for earned points//
    int possible[a];//Creates array for possible points//
    
    for(int i=0; i<a; i++){
        earned[i]= get_int("Points Earned %i: \n", i+1);//Ask for points earned//
        possible[i]= get_int("Points Possible %i: \n", i+1);//Ask for points possible//
    }
    
    int totalEarned=0;
    int totalPossible=0;
    for(int i=0; i<a; i++){
        totalEarned+= earned[i];//Add all the points earned//
        totalPossible+= possible[i];}//Add all the points possible//
    {
        
        printf("Grade is: %f%%\n",(float)totalEarned / totalPossible *100);//Find the average of all the earned points and possible points///
    }
   
}
