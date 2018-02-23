/*
 * BSD 2-Clause License
 *
 * Copyright (c) 2018, Pranav Inani
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 *  list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *  this list of conditions and the following disclaimer in the documentation
 *  and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#include <Node.h>

using namespace std;

void Node::printPuzzle() {
  int count = 0;
  for (auto i : puzzle) {
    if (count % 3 == 0)
      std::cout << std::endl;
    std::cout << i << ' ';
    count++;
  }
  }
int Node::findZero() {
  std::vector<int>::iterator it;
  it = find(puzzle.begin(), puzzle.end(), 0);
  auto z = std::distance(puzzle.begin(), it);
  return (int) z;
}


void Node::moveUp() {
  int zPos = findZero();
  vector<int> temp = puzzle;
  if (zPos != 0 && zPos != 1 && zPos != 2)
    std::swap(temp[zPos], temp[zPos - 3]);
  Node* child = new Node(temp, this);
  children.push_back(child);

}

void Node::moveDown() {
  int zPos = findZero();
  vector<int> temp = puzzle;
  if (zPos != 6 && zPos != 7 && zPos != 8)
    std::swap(temp[zPos], temp[zPos + 3]);
  Node* child = new Node(temp, this);
  children.push_back(child);
}

void Node::moveRight() {
  int zPos = findZero();
  vector<int> temp = puzzle;
  if (zPos != 2 && zPos != 5 && zPos != 8)
    std::swap(temp[zPos], temp[zPos + 1]);
  Node* child = new Node(temp, this);
  children.push_back(child);
}

void Node::moveLeft() {
  int zPos = findZero();
  vector<int> temp = puzzle;
  if (zPos != 0 && zPos != 3 && zPos != 6)
    std::swap(temp[zPos], temp[zPos - 1]);
  Node* child = new Node(temp, this);
  children.push_back(child);
    }

