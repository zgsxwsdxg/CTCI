# Cracking the Coding Interview

## 1 Arrays and Strings
1.1 [Implement an algorithm to determine if a string has all unique characters What if you can not use additional data structures?](./code/1.1.cpp)  # easy

1.2 [Write code to reverse a C-Style String (C-String means that “abcd” is represented  as five characters, including the null character )](./code/1.2.cpp) # easy

1.3 [Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer NOTE: One or two additional variables are fine An extra copy of the array is not](./code/1.3.cpp) #easy

1.4 [Write a method to decide if two strings are anagrams or not](./code/1.4.cpp) # easy;anagrams :由颠倒字母顺序而构成的字 

1.5 [Write a method to replace all spaces in a string with ‘%20’](./code/1.5.cpp) # easy

1.6 [Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees Can you do this in place?](https://github.com/fishermanzhangzhen/leetcode/blob/master/Rotate_Image.cpp) done

1.7 [Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0](https://github.com/fishermanzhangzhen/leetcode/blob/master/Set_Matrix_Zeroes.cpp) done

1.8 [Assume you have a method isSubstring which checks if one word is a substring of another Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring](./code/1.8.cpp) #easy

## 2 Linked Lists
2.1 [Write code to remove duplicates from an unsorted linked list.How would you solve this problem if a temporary buffer is not allowed?](./code/2.1.cpp) #ok

2.2 [Implement an algorithm to find the nth to last element of a singly linked list](https://github.com/fishermanzhangzhen/leetcode/blob/master/Remove_Nth_Node_From_End_of_List.cpp) done

2.3 [Implement an algorithm to delete a node in the middle of a single linked list, given only access to that node](./code/2.3.cpp) #ok

2.4 [You have two numbers represented by a linked list, where each node contains a single digit The digits are stored in reverse order, such that the 1’s digit is at the head off the list Write a function that adds the two numbers and returns the sum as a  linked list](./code/2.4.cpp) easy

2.5 [Given a circular linked list, implement an algorithm which returns node at the beginning of the loop](https://github.com/fishermanzhangzhen/leetcode/blob/master/Linked_List_Cycle_II.cpp) # done, ok, good question

## 3 Stacks and Queues
3.1 [Describe how you could use a single array to implement three stacks]()

3.2 [How would you design a stack which, in addition to push and pop, also has a function min which returns the minimum element? Push, pop and min should all operate in O(1) time](https://github.com/fishermanzhangzhen/leetcode/blob/master/Min_Stack.cpp) done

3.3 [Imagine a (literal) stack of plates If the stack gets too high, it might topple Therefore, in real life, we would likely start a new stack when the previous stack exceeds some threshold Implement a data structure SetOfStacks that mimics this SetOfStacks should be composed of several stacks, and should create a new stack once the previous one exceeds capacity SetOfStacks push() and SetOfStacks pop() should behave identically to a single stack (that is, pop() should return the same values as it would if there were just a single stack) Implement a function popAt(int index) which performs a pop operation on a specific sub-stack]()

3.4 [In the classic problem of the Towers of Hanoi, you have 3 rods and N disks of different sizes which can slide onto any tower The puzzle starts with disks sorted in ascending order of size from top to bottom (e g , each disk sits on top of an even larger one) You have the following constraints:
(A) Only one disk can be moved at a time
(B) A disk is slid off the top of one rod onto the next rod
(C) A disk can only be placed on top of a larger disk
Write a program to move the disks from the first rod to the last using Stacks]()

3.5 [Implement a MyQueue class which implements a queue using two stacks](./code/3.5.cpp) # one more

3.6 [Write a program to sort a stack in ascending order You should not make any assumptions about how the stack is implemented The following are the only functions that should be used to write this program: push | pop | peek | isEmpty](./code/3.6.cpp) #one more

## 4 Trees and Graphs
4.1 [Implement a function to check if a tree is balanced  For the purposes of this question, a balanced tree is defined to be a tree such that no two leaf nodes differ in distance from the root by more than one ](https://github.com/fishermanzhangzhen/leetcode/blob/master/Balanced_Binary_Tree.cpp) ok

4.2 [Given a directed graph, design an algorithm to find out whether there is a route between two nodes ]()

4.3 [Given a sorted (increasing order) array, write an algorithm to create a binary tree with minimal height ](./code/4.3.cpp) easy

4.4 [Given a binary search tree, design an algorithm which creates a linked list of all the nodes at each depth (i e , if you have a tree with depth D, you’ll have D linked lists) ](https://github.com/fishermanzhangzhen/leetcode/blob/master/Binary_Tree_Level_Order_Traversal.cpp) ok.

4.5 [Write an algorithm to find the ‘next’ node (i e , in-order successor) of a given node in a binary search tree where each node has a link to its parent ](./code/4.5.cpp) ok

4.6 [Design an algorithm and write code to find the first common ancestor of two nodes in a binary tree  Avoid storing additional nodes in a data structure  NOTE: This is not necessarily a binary search tree ](./code/4.6.cpp) good question , one more

4.7 [You have two very large binary trees: T1, with millions of nodes, and T2, with hundreds of nodes  Create an algorithm to decide if T2 is a subtree of T1 ]()

4.8 [You are given a binary tree in which each node contains a value  Design an algorithm to print all paths which sum up to that value  Note that it can be any path in the tree - it does not have to start at the root]()


## 5 Bit Manipulation
5.1 [You are given two 32-bit numbers, N and M, and two bit positions, i and j  Write a method to set all bits between i and j in N equal to M (e g , M becomes a substring of N located at i and starting at j) ](./code/5.1.cpp) ok

5.2 [Given a (decimal - e g  3 72) number that is passed in as a string, print the binary representation  If the number can not be represented accurately in binary, print “ERROR”]()  no idea

5.3 [Given an integer, print the next smallest and next largest number that have the same number of 1 bits in their binary representation ]()

5.4 [Explain what the following code does: ((n & (n-1)) == 0) ](./code/5.4.cpp) ok ,easy

5.5 [Write a function to determine the number of bits required to convert integer A to integer B ](./code/5.5.cpp) ok

5.6 [Write a program to swap odd and even bits in an integer with as few instructions as possible (e g , bit 0 and bit 1 are swapped, bit 2 and bit 3 are swapped, etc) ](./code/5.6.cpp) ok

5.7 [An array A[1   n] contains all the integers from 0 to n except for one number which is missing  In this problem, we cannot access an entire integer in A with a single operation  The elements of A are represented in binary, and the only operation we can use to access them is “fetch the jth bit of A[i]”, which takes constant time  Write code to find the missing integer  Can you do it in O(n) time?]()

## 6 Brain Teases

## 7 Object Oriented Design
7.1 [Design the data structures for a generic deck of cards  Explain how you would subclass it to implement particular card games.]()

7.2 [Imagine you have a call center with three levels of employees: fresher, technical lead (TL), product manager (PM)  There can be multiple employees, but only one TL or PM  An incoming telephone call must be allocated to a fresher who is free  If a fresher can’t handle the call, he or she must escalate the call to technical lead  If the TL is not free or not able to handle it, then the call should be escalated to PM  Design the classes and data structures for this problem  Implement a method getCallHandler() ]()

7.3 [Design a musical juke box using object oriented principles_]()

7.4 [Design a chess game using object oriented principles ]()

7.5 [Design the data structures for an online book reader system ]()

7.6 [Implement a jigsaw puzzle  Design the data structures and explain an algorithm to solve the puzzle ]()

7.7 [Explain how you would design a chat server  In particular, provide details about the various backend components, classes, and methods  What would be the hardest problems to solve?]()

7.8 [Othello is played as follows: Each Othello piece is white on one side and black on the other  When a piece is surrounded by its opponents on both the left and right sides,or both the top and bottom, it is said to be captured and its color is flipped  On your turn, you must capture at least one of your opponent’s pieces  The game ends when either user has no more valid moves, and the win is assigned to the person with the most pieces  Implement the object oriented design for Othello ]()

7.9 [Explain the data structures and algorithms that you would use to design an in-memory file system  Illustrate with an example in code where possible]()

7.10 [Describe the data structures and algorithms that you would use to implement a garbage collector in C++ ]()

## 8 Recursion
8.1 [Write a method to generate the nth Fibonacci number ](./code/8.1.cpp) easy

8.2 [Imagine a robot sitting on the upper left hand corner of an NxN grid  The robot can only move in two directions: right and down  How many possible paths are there for the robot?](https://github.com/fishermanzhangzhen/leetcode/blob/master/Unique_Paths.cpp) ok

8.3 [Write a method that returns all subsets of a set ](./code/8.3.cpp) ok

8.4 [Write a method to compute all permutations of a string ](./code/8.4.cpp) ok

8.5 [Implement an algorithm to print all valid (e g , properly opened and closed) combinations of n-pairs of parentheses ](./code/8.5.cpp) ok

8.6 [Implement the “paint fill” function that one might see on many image editing programs  That is, given a screen (represented by a 2 dimensional array of Colors), a point, and a new color, fill in the surrounding area until you hit a border of that color ’]()

8.7 [Given an infinite number of quarters (25 cents), dimes (10 cents), nickels (5 cents) and pennies (1 cent), write code to calculate the number of ways of representing n cents ]()

8.8 [Write an algorithm to print all ways of arranging eight queens on a chess board so that none of them share the same row, column or diagonal ]()

## 9 Sorting and Searching

## 10 Mathematical

## 11 Testing

## 12 System Design and Memory Limits


