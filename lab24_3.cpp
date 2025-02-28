#include<iostream>

using namespace std;

int count(int a[], int N){
    
    set<int> myset;
    int count = 0;
    
    
    for(int i=0; i < N; i++){
        myset.insert(a[i]);
    }
    
    set<int>::iterator c;
    for(c = myset.begin(); c != myset.end(); c++){
        count++;
    }
    return count;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
