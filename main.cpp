#include "MancalaGame.cpp"
#include "BoardManager.cpp"
#include "MancalaVisitor.hpp"
//#include "DistVisitor.hpp"

int main() {

     //   MancalaGame* newgame = new MancalaGame();
 MancalaGame* game = MancalaGame::getInstance();
game->GameUpdate();
       // newgame->GameUpdate();
}
