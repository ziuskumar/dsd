#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n == 0){//base case
        return;
    }

    cout<<n<<" ";//kaam
    print(n-1);//faith 
}

int sum(int n){
    if(n == 1){
        return 1;
    }

    return n + sum(n-1);
}

int firstocc(int arr[], int i, int target){

    if(arr[i] == target){   
        return i;
    }
}

int fibb(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return fibb(n-1) + fibb(n-2);
}

int factorail(int n){
    if(n == 0){
        return 1;
    }

    return n * factorail(n-1);

}

bool issorted( int arr[], int n, int i){
    if(i == n-1){
        return true;
    }

    if(arr[i] > arr[i+1]){
        return false;
    }

    return issorted(arr,n,i+1);
}

int main(){
    // cout<<"factorial of "<<factorail(5);
    // print(4);
    // cout<<fibb(5);
    int arr[] = {1,2,3,4,5,6,7};
    // int arr2[5] = {1,2,3,5,4};

    // cout<< issorted(arr2,5,0);
}