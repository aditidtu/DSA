#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr) / sizeof(arr[0]);

//1
    for(int i=0; i<n; i++){
        for( int j=i; j<n; j++){
            for( int k=i,sum=0; k<=j; k++){
                sum = sum + arr[k];
                cout<<sum<<' ';
            }cout<<endl;
        }
    }cout<<endl;

//2
    for(int i=0; i<n; i++){
        for( int j=i; j<n; j++){
            int sum=0;
            for( int k=i; k<=j; k++){
                sum = sum + arr[k];
            }cout<<sum<<' ';
            cout<<endl;
        }cout<<endl;
    }cout<<endl;

//3
    for(int i=0,sum=0; i<n; i++){      
        sum = sum + arr[i];
        cout<<sum<<' ';
    }cout<<endl<<endl;

//4
    for(int i=0,j; i<n; i++){
        int sum=0;
        for(int j=0; j<=i; j++){
            cout<<arr[j]<<' ';
            sum = sum + arr[j];
        }cout<<' '<<'_'<<sum<<endl;
    }cout<<endl<<endl;

//5
    for(int i=0,sum=0,j; i<n; i++){
        for(int j=0; j<=i; j++){
            sum = sum + arr[j];
        }cout<<sum<<' ';
    }cout<<endl;
}
