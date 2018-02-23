# 8-puzzle-BFS


## Overview
8 puzzle solver using breadth-first-search in c++. This program uses a node class that stores the puzzles current state and a pointer to the parent node. The node class consists method to move up, move down, move right, move left, check if the current node is goal and print the existing puzzle. The main program consists of the actual search algorithm. It is implemented using queues of pointers for open list and close list. Once the goal is found the path is traced by recursively iterating through the parent nodes starting from goal node till the inital node is found. The path is then reversed and printed out on the screen.

## Build and Run Steps
Ubuntu 
gcc compiler

## Build and Run Steps
In a new terminal:

```
git clone --recursive https://github.com/inani47/8-puzzle-BFS
cd 8-puzzle-BFS 
mkdir build
cd build
cmake ..
make
./app/shell-app
```
## Note to Grader
The source files (main.cpp & Node.cpp) can be found in the app folder. The header file for Node.cpp is in the include folder. 

## License

This software is released under the BSD-2 License, see [LICENSE](LICENSE).

## Output

The 100000 generated nodes and their parents can be found in the text file Nodes.txt in the output folder.

Example output:

The number of possible positions of an 8-puzzle is 9! = 362880. Half of these cannot be reached from a given starting position, so there's really only 181440 possibilities. Below is a the output which shows that if the code is not stopped at the goal state then this code generates all possible nodes and stops when there are new no nodes left to be explored (openList is empty). Since the program stops at the 181440th iteration of the while loop, it proves that there are no duplicate nodes being created. Below is a picture of the following:






