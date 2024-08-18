#include<iostream>
int main(){
    std::cout<<"hello world";
    //write a code to add the elements of an array 
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    std::cout<<"\nSum of the elements in the array: "<<sum;
    return 0;
}