#ifndef DEF_RESTAURANT
#define DEF_RESTAURANT

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

class Initialize{	 
	public:
		string str; 
		int i=0;
		string array[15];
		string array2; string array1;
		fstream infile;
		fstream outfile;
		int limit;
		virtual void Food_1()=0;
};
class Menue_1:public Initialize{
    private:
	    int num1,num2,num3,num4;
		string names[15]; 
		double nums[15];	
		int num_1[15];	
		string N_1,N_2,N_3,N_4; 
		double n_1,n_2,n_3,n_4;
		double bill=0.0;
	public:
		string s_1, s_2; 
		string s1[15];
		double s11[15];
		string s111[15];
		//Menue_1();
		//infile.open("menu.txt",ios::in);
	    //outfile.open("bill.txt",ios::out | ios::app);
        //}
		Menue_1(){
		infile.open("menu.txt",ios::in);
	    outfile.open("bill.txt",ios::out | ios::app);
}
	    void Food_1();
	    void menue_1();
	    void menue_2();
	    void menue_3();
	    void menue_4();
	    void menue_5();
	    void menue_6();
	    void menue_7();
	    void menue_8();
	    void menue_9();
	    void menue_10();
	    void menue_11();
	    void menue_12();
	    void menue_13();
	    
	    void menu_select_1();
	    
	    void menu_num1();
	    void menu_num2();
	    void menu_num3();
	    void menu_num4();
	    
	    void menu_num1_1();
	    void menu_num2_2();
	    void menu_num3_3();
	    void menu_num4_4();
	    
	    void menu_bill();
	    
	    ~Menue_1(){
		outfile.close();
	    infile.close();
	    }
};

#endif

















