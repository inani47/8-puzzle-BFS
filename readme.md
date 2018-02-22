# 8-puzzle-BFS


## Overview
8 puzzle solver using breadth-first-search in c++. This program uses a node class that stores the puzzles current state and a pointer to the parent node. The node class consists method to move up, move down, move right, move left, check if the current node is goal and print the existing puzzle. The main program consists of the actual search algorithm. It is implemented using queues of pointers for open list and close list. Once the goal is found the path is traced by recursively iterating through the parent nodes starting from goal node till the inital node is found. The path is then reversed and printed out on the screen.

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

## License

This software is released under the BSD-2 License, see [LICENSE](LICENSE).






