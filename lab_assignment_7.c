#include <stdio.h>

// int bubbleSort( int* arr);
// int selectionSort( int* arr) ;
void printArray(int arr[], int n);

int bubbleSort( int* arr, int* arrSwaps);
int selectionSort( int* arr, int* arrSwaps);


int main(void) //MUST OOUTPRINT BUBLE AND SELCTION SORT FOR BOTH ARRAY1 and ARRAY2, total 4 array outputs
{
    //Arrays 1 & 2
    int arr1 [] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; //Arrays to use for buble sort
    int arr2 [] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int arr11 [] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; //Arrays to use for selction sort
    int arr22 [] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int arr1Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    int arr11Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0};


    int arr2Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int arr22Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    //Print out arr1 BubleSort
    int bubble = bubbleSort(arr1, arr1Swaps);

    printf("Array1 BubleSort: \n");
    puts(" ");

    for (int i  = 0; i < 9; i++) 
    {
        printf("%d: %d of times %d swapped\n", arr1[i], arr1Swaps[i], arr1[i]);
    }

    puts(" ");
    puts(" ");
    printf("Total %d of swaps\n", bubble);
    puts(" ");

    //Print out arr1 SelectionSort
    int select = selectionSort(arr11, arr11Swaps);

    printf("Array1 SelectionSort: \n");
    puts(" ");

    for (int i  = 0; i < 9; i++) 
    {
        printf("%d: %d of times %d swapped\n", arr1[i], arr11Swaps[i], arr1[i]);
    }


    puts(" ");
    puts(" ");
    printf("Total %d of swaps\n", select);


    puts(" ");
    puts(" ");

    //Print out arr2 BubleSort
    bubble = bubbleSort(arr2, arr2Swaps);

    printf("Array2 BubleSort: \n");
    puts(" ");

    for (int i  = 0; i < 9; i++) 
    {
        printf("%d: %d of times %d swapped\n", arr2[i], arr2Swaps[i], arr2[i]);
    }

    puts(" ");
    puts(" ");
    printf("Total %d of swaps\n", bubble);
    puts(" ");

    //Print out arr2 SelectionSort
    select = selectionSort(arr22, arr22Swaps);

    printf("Array2 SelectionSort: \n");
    puts(" ");

    for (int i  = 0; i < 9; i++) 
    {
        printf("%d: %d of times %d swapped\n", arr2[i], arr22Swaps[i], arr2[i]);
    }

    puts(" ");
    puts(" ");
    printf("Total %d of swaps\n", select);
}


//Function to perform bubble sort and return how many swaps performed
int bubbleSort( int* arr, int* arrSwaps) 
{
    int swap = 0;

    for (int i = 0; i < 9 - 1; i++) 
    {
        for (int j = 0; j < (9 - i - 1); j++) 
        {
            if (arr[j] > arr[j + 1]) //Swap
            {
                swap++;

                arrSwaps[j] = arrSwaps[j] + 1;
                arrSwaps[j + 1] = arrSwaps[j + 1] + 1;


                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }

    return swap;
}

int selectionSort( int* arr, int* arrSwaps) 
{
    int swap = 0;

    for (int i = 0; i < 9 - 1; i++) 
    {
        int min = i;
        for (int j = i + 1; j < 9; j++) 
        {
            if (arr[j] < arr[min]) //Check to see if found smaller element
            {
                min = j;

                arrSwaps[j] = arrSwaps[j] + 1;
                arrSwaps[j + 1] = arrSwaps[j + 1] + 1;
                swap++; //Increase swap counter

                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;

            }

            // int temp = arr[i];
            // arr[i] = arr[min];
            // arr[min] = temp;

            // arrSwaps[j] = arrSwaps[j] + 1;
            // arrSwaps[j + 1] = arrSwaps[j + 1] + 1;

            // swap++; //Increase swap counter
        }
    }

    return swap;
}


// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}


// #include <stdio.h>

// int bubbleSort( int* arr);
// int selectionSort( int* arr) ;
// void printArray(int arr[], int n);

// int main(void) 
// {
//     //Arrays 1 & 2
//     int arr1 [9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
//     int arr2 [9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

//     //Print out arr1
//     int bubble = bubbleSort(arr1);
//     int select = selectionSort(arr1);

//     printf("Array1: \n");
//     printf("%d\n", bubble);
//     printf("%d\n", select);
//     puts("");
//     puts("");
//     printf("%d\n", (bubble + select));


//     puts("");
//     puts("");

//     //Print out arr2
//     bubble = bubbleSort(arr2);
//     select = selectionSort(arr2);

//     printf("Array2: \n");
//     printf("%d\n", bubble);
//     printf("%d\n", select);
//     puts("");
//     puts("");
//     printf("%d\n", (bubble + select));

//     puts(" ");

//     printArray(arr1, 9);
//     printArray(arr2, 9);
// }

// //Function to perform bubble sort and return how many swaps performed
// int bubbleSort( int* arr) 
// {
//     int swap = 0;

//     for (int i = 0; i < 9; i++) 
//     {
//         for (int j = 0; j < 9 - i; j++) 
//         {
//             if (arr[j] > arr[j + 1]) //Swap
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }

//         }
//     }

//     return swap;
// }

// int selectionSort( int* arr) 
// {
//     int swap = 0;

//     for (int i = 0; i < 9; i++) 
//     {
//         int min = i;
//         for (int j = i + 1; j < 9; j++) 
//         {
//             if (arr[j] < arr[min]) //Check to see if found smaller element
//             {
//                 min = j;
//             }

//             int temp = arr[i];
//             arr[i] = arr[min];
//             arr[min] = temp;

//             swap++; //Increase swap counter
//         }
//     }

//     return swap;
// }


// // A utility function to print an array of size n
// void printArray(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     printf("\n");
// }







// #include <stdio.h>

// // int bubbleSort( int* arr);
// // int selectionSort( int* arr) ;
// void printArray(int arr[], int n);

// int bubbleSort( int* arr, int* arrSwaps);
// int selectionSort( int* arr, int* arrSwaps);


// int main(void) //MUST OOUTPRINT BUBLE AND SELCTION SORT FOR BOTH ARRAY1 and ARRAY2, total 4 array outputs
// {
//     //Arrays 1 & 2
//     int arr1 [] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; //Arrays to use for buble sort
//     int arr2 [] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

//     int arr11 [] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; //Arrays to use for selction sort
//     int arr22 [] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

//     int arr1Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0}; 
//     int arr11Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0};


//     int arr2Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
//     int arr22Swaps [] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

//     //Print out arr1
//     //int bubble = bubbleSort(arr1, arr1Swaps);
//     //int select = selectionSort(arr1, arr1Swaps);

//     int bubble = bubbleSort(arr1, arr1Swaps);
//     int select = selectionSort(arr11, arr1Swaps);

//     for (int i  = 0; i < 9; i++) 
//     {
//         printf("%d: %d of times %d swapped\n", arr1[i], arr1Swaps[i], arr1[i]);
//     }

//     puts(" ");
//     puts(" ");
//     printf("Total %d of swaps\n", (bubble + select));


//     puts(" ");
//     puts(" ");

//     //Print out arr2
//     bubble = bubbleSort(arr2, arr2Swaps);
//     select = selectionSort(arr22, arr2Swaps);

//     for (int i  = 0; i < 9; i++) 
//     {
//         printf("%d: %d of times %d swapped\n", arr2[i], arr2Swaps[i], arr2[i]);
//     }

//     puts(" ");
//     puts(" ");
//     printf("Total %d of swaps\n", (bubble + select));

//     // printf("Array1: \n");
//     // printf("%d\n", bubble);
//     // printf("%d\n", select);
//     // puts("");
//     // puts("");
//     // printf("%d\n", (bubble + select));


//     // puts("");
//     // puts("");

//     // //Print out arr2
//     // bubble = bubbleSort(arr2, arr2Swaps);
//     // select = selectionSort(arr2, arr2Swaps);

//     // printf("Array2: \n");
//     // printf("%d\n", bubble);
//     // printf("%d\n", select);
//     // puts("");
//     // puts("");
//     // printf("%d\n", (bubble + select));

//     // puts(" ");

//     // printArray(arr1, 9);
//     // printArray(arr2, 9);

//     // puts(" ");

//     // printArray(arr1Swaps, 9);
//     // printArray(arr2Swaps, 9);
// }

// //Function to perform bubble sort and return how many swaps performed
// int bubbleSort( int* arr, int* arrSwaps) 
// {
//     int swap = 0;

//     for (int i = 0; i < 9 - 1; i++) 
//     {
//         for (int j = 0; j < 9 - i - 1; j++) 
//         {
//             if (arr[j] > arr[j + 1]) //Swap
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;

//                 arrSwaps[j] = arrSwaps[j] + 1;
//                 arrSwaps[j + 1] = arrSwaps[j + 1] + 1;

//                 swap++;
//             }

//         }
//     }

//     return swap;
// }

// int selectionSort( int* arr, int* arrSwaps) 
// {
//     int swap = 0;

//     for (int i = 0; i < 9 - 1; i++) 
//     {
//         int min = i;
//         for (int j = i + 1; j < 9; j++) 
//         {
//             if (arr[j] < arr[min]) //Check to see if found smaller element
//             {
//                 min = j;

//                 arrSwaps[j] = arrSwaps[j] + 1;
//                 arrSwaps[j + 1] = arrSwaps[j + 1] + 1;
//                 swap++; //Increase swap counter

//                 int temp = arr[i];
//                 arr[i] = arr[min];
//                 arr[min] = temp;

//             }

//             // int temp = arr[i];
//             // arr[i] = arr[min];
//             // arr[min] = temp;

//             // arrSwaps[j] = arrSwaps[j] + 1;
//             // arrSwaps[j + 1] = arrSwaps[j + 1] + 1;

//             // swap++; //Increase swap counter
//         }
//     }

//     return swap;
// }


// // A utility function to print an array of size n
// void printArray(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     printf("\n");
// }