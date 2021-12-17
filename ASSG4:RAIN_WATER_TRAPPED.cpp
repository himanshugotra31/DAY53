// Problem Description

// Given a vector A of non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.


// Problem Constraints

// 1 <= |A| <= 100000


// Input Format

// First and only argument is the vector A


// Output Format

// Return one integer, the answer to the question


// Example Input

// Input 1:

// A = [0, 1, 0, 2]

// Input 2:

// A = [1, 2]



// Example Output

// Output 1:

// 1

// Output 2:

// 0



// Example Explanation

// Explanation 1:

// 1 unit is trapped on top of the 3rd element.

// Explanation 2:

// No water is trapped.

int Solution::trap(const vector<int> &A) 
{
    int n=A.size();
    vector<int> X(n);                //right_most_highest_bulding_array
    vector<int> Y(n);                //left_most_highest_building_array
    int right=A[n-1];                //iterating_a_right_most_building
    int left=A[0];                    //iterating_a_left_most_building
    X[n-1]=A[n-1];
    Y[0]=A[0];
    for(int i=n-2;i>=0;i--)                 //calculating right most for every building
    {
        if(A[i]>right)
        {
            right=A[i];
        }
        X[i]=right;
    }
    for(int i=1;i<n;i++)                     //calculating left most for every building
    {
        if(A[i]>left)
        {
            left=A[i];
        }
        Y[i]=left;
    }
    int total=0;                      //total_rain_water_trapped
    int min=0;
    for(int i=0;i<n;i++)              //calculating total rain water trapped
    {
        if(X[i]>Y[i])
        {
            min=Y[i];
        }
        else
        {
            min=X[i];
        }
        total+=min-A[i];
    }
    return total;
}
