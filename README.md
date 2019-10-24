# AI-tic-tac-toe
Approach includes of construction of two models each which gets trained according to the first choice made by the player.
The game works as firstly, the CPU plays with each other and store the results of each move in a list.
Here the CPU is given a reward for each profitable move that decreases the probability of opponent to win and thus each move has a reward point.
Among all such possible moves the CPU chooses the one with maximum rewards points and then successively proceeds till any one player wins.


## Installation

Use the package manager [pip](https://pip.pypa.io/en/stable/).
```bash
pip install keras
```
Install matplotlib and csv library
```
pip install matplotlib
```
```
pip install csv
```
## Dependencies
* numpy
* matplotlib
* csv
* keras
## Usage
```bash
python deepdeep.py
```
