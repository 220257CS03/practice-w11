#include <iostream>
#include <vector>
#include <array>
using namespace std;
void values(vector<int>marks);
int main() {
//    PROBLEM 1
    int a = 0;
    cin>>a;
    cout<<&a<<endl;
//
////    PROBLEM 2
    int a = 0;
    cin>>a;
    int *ptr = &a;
    cout<<ptr<<endl;
//
////    PROBLEM 3
    int a, b = 0;
    cin>>a>>b;
    int *ptrA = &a;
    int *ptrB = &b;
    cout<<*ptrA<<endl;
    cout<<*ptrB<<endl;
    
//    PROBLEM 4
    int a = 0;
    cin>>a;
    int *ptr = &a;
    cout<<*ptr<<endl;
    
//    PROBLEM 5
    int a = 0;
    int *ptr = &a;
    cin>>*ptr;

    cout<<*ptr;
    
    
//    PROBLEM 6
    int a = 6;
    int b = 10;
    int *ptrA = &a;
    int *ptrB = &b;
    cout<<*ptrA + *ptrB<<endl;
    
//    PROBLEM 7
    int a = 6;
    int b = 10;
    int *ptrA = &a;
    int *ptrB = &b;
    cout<<*ptrA * *ptrB<<endl;
    
//    PROBLEM 8
    
    int a, b ,c = 0;
    cin>>a>>b>>c;
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    if(*ptrA > *ptrB && *ptrA > *ptrC){
        cout<<*ptrA<<endl;
    }else if(*ptrB > *ptrA && *ptrB > *ptrC){
        cout<<*ptrB<<endl;
    }else{
        cout<<*ptrC<<endl;
    }
    
////    PROBLEM 9
    int a, b ,c = 0;
    cin>>a>>b>>c;
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    if(*ptrA < *ptrB && *ptrA < *ptrC){
        cout<<*ptrA<<endl;
    }else if(*ptrB < *ptrA && *ptrB < *ptrC){
        cout<<*ptrB<<endl;
    }else{
        cout<<*ptrC<<endl;
    }
    
//    PROBLEM 10
    
    vector<int> marks = {1,2,3,4,5};
    
//    PROBLEM 11
    vector<int>marks = {1,2,3,4,5};
    for(int values : marks){
        cout<<values<<endl;
    }
    
//    PROBLEM 12
    vector<int>marks = {1,2,3,4,5};
    marks.push_back(632);
        for(int values : marks){
            cout<<values<<endl;
        }
//    PROBLEM 13
//    vector<int>marks = {10,20,30,40,50};
//    marks.pop_back();
//    for(int values : marks){
//        cout<<values<<endl;
//    }
    
//    PROBLEM 14
//
//    vector<int> marks = {1,2,3,4,5,6,7,8,89,9,5};
//    values(marks);
    
//    PROBLEM 15
    
    vector<vector<int>>nums = {
        {2,3,1,4},
        {3,7,8,9}
        
    };
    for(int row = 0; row < 2; row++){
        for(int col = 0; col < 4; col++){
            cout<< nums[row][col] <<" ";
        }
        cout<<endl;
    }
    return 0;
}

//void values(vector<int> marks){
//    for(int smth : marks){
//        cout<<smth<<endl;
//    }
//}
