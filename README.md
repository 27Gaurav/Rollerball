# Starter Code Overview

Rollerball's GUI is implemented in JavaScript, and the core engine is written in C++. 

## Requirements

1. gcc >= 11
2. python >= 3.7
## Note :  Starter code link is given in the PDF
## Quickstart

```bash
git clone https://github.com/Aniruddha-Deb/rollerball-v2 && cd rollerball-v2
make rollerball
```

If all goes well, you should have an executable called `rollerball` in `bin`. To run the GUI, launch a web server from the `web` directory.

```bash
cd web
python3 -m http.server 8080
```

You can then open [localhost:8080](http://localhost:8080) on your browser to view the GUI. Here you can select one of the three board types. 

To launch the bots (assuming you're in the directory)

```bash
./bin/rollerball -p 8181
```

You can then connect the GUI to the bots. You would also need to start another bot for black on port 8182 to join and start the game.





## Implementing the Engine

I needed to implement the `get_best_move` method in `engine.cpp`. This method will be called on an engine object when the server decides to search for a move, and it should do the following:

- Search for the best move given the board type, and store this best move in `best_move`.
- Terminate before the time specified in `time_left` runs out. 

The starter code's engine.cpp randomly picks a move from the moveset and sets the best move to it, as an example.I needed to edit both `engine.cpp` and `engine.hpp`. 

