
#include<iostream>
using namespace std;

string isPresent(int arr[], int size, int key){
    int s=0, e=size-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid]==key){
            return "True";
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return "False";
}

int lowerBound(int arr[], int size, int key){
    int s=0, e=size-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]<key){
             s= mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int upperBound(int arr[], int size, int key){
    int s=0, e=size-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]<=key){
            s=mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    int n;
    cin>>n;

    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    int key;
    cin>>key;

    cout<<"Lower bound is: "<<lowerBound(A, n, key)<<endl;
    cout<<"Upper bound is: "<<upperBound(A, n, key)<<endl;
    cout<<"is Present : "<<isPresent(A, n, key)<<endl;



}
