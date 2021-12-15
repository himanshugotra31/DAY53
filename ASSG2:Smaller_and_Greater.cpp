// You are given an Array A of size N.

// Find for how many elements, there is a strictly smaller element and a strictly greater element.


// Input Format

// Given only argument A an Array of Integers.

// Output Format

// Return an Integer X, i.e number of elements.

// Constraints

// 1 <= N <= 1e5
// 1 <= A[i] <= 1e6

// For Example

// Example Input:
//     A = [1, 2, 3]

// Example Output:
//     1

// Explanation:
//     only 2 have a strictly smaller and strictly greater element, 1 and 3 respectively.


int Solution::solve(vector<int> &A) 
{
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    int count=0;         //strictly smaller element and a strictly greater element
    for(int i=0;i<A.size();i++)
    {
        count++;
        if(A[i]==max or A[i]==min)
        {
            count--;
        }
        
    }
    return count;
}
