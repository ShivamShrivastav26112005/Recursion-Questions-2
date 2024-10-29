// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<max(2,3)<<endl;
//     cout<<min(2,3);
// }




// Ques.1- Find out maximum element of an array using recursion.

// Print maximum element -: 

// #include<iostream>
// #include<limits.h>
// using namespace std;
// void display(int arr[],int n, int idx, int max)
// {
//     if(idx==n) {
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx])
//     max=arr[idx];
//     display(arr,n,idx+1,max);
// }
// int main()
// {
//    int arr[]={1,7,3,5,2,9,4,6,1,0,1};
//    int n= sizeof(arr)/sizeof(arr[0]);
//    display(arr,n,0,INT_MIN);
// }





// // Ques.2- Find out minimum element of an array using recursion.

// #include<iostream>
// #include<climits>
// using namespace std;
// void display(int arr[], int n, int idx, int min)
// {
//     if(idx==n) {
//         cout<<min;
//         return;
//     }

//     if(min>arr[idx])
//     min=arr[idx];

//     display(arr,n,idx+1,min);
// }
// int main()
// {
//     int arr[]={4523,562,345,46,45,645,76,52354,345};
//     int n= sizeof(arr)/sizeof(arr[0]);


//     display(arr,n,0,INT_MAX);
// }