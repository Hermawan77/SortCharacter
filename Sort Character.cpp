#include <iostream>
#include <bits/stdc++.h> 
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	string kata;
	
	cout << "Input kata : ";
	getline(cin, kata);
	
	int n = kata.length();
	char kata_array[n];
	char huruf_vokal[n];
	char huruf_konsonan[n];
	char spasi[n];
	
	strcpy(kata_array, kata.c_str());
	strlwr(kata_array);
	int v = 0;
	int k = 0;
	int j = 0;
	int l = 0;
	
	for (int i = 0; i < n; i++){
        if(kata_array[i] =='a'|| kata_array[i] =='i'|| kata_array[i] == 'u'|| kata_array[i] == 'e'|| kata_array[i] =='o'){
			huruf_vokal[j] = kata_array[i];
			v = v +1;
			j = j +1;
		}
		else if(kata_array[i] == ' '){
			spasi[i] == kata_array[i];
		}
		else{
			huruf_konsonan[l] = kata_array[i];
			k = k + 1;
			l = l + 1;
		}
	}
	
	cout << "Huruf Vokal : ";

	char temp[1];

	for(int i=1;i<v;i++){
  		for(int j=0;j<v;j++){
   			if(huruf_vokal[i]<huruf_vokal[j]){
    		temp[0]=huruf_vokal[i];
    		huruf_vokal[i]=huruf_vokal[j];
    		huruf_vokal[j]=temp[0];
   			}
  		}
 	}
	 	
	cout << endl;
	for(int i=0;i<v;i++){
		cout << huruf_vokal[i];
	}
	
	cout << endl;
	cout << "Huruf Konsonan : ";
	
		for(int i=1;i<l;i++){
  		for(int j=0;j<l;j++){
   			if(huruf_konsonan[i]<huruf_konsonan[j]){
    		temp[0]=huruf_konsonan[i];
    		huruf_konsonan[i]=huruf_konsonan[j];
    		huruf_konsonan[j]=temp[0];
   			}
  		}
 	}
 	
 	cout << endl;
	for(int i=0;i<l;i++){
		cout << huruf_konsonan[i];
	}
	
}
