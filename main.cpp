#include<bits/stdc++.h>
#include "RubiksCube.h"
#include "RubiksCube3d.cpp"
#include "DFSSolver.h"
#include "RubiksCubeBitboard.cpp"
#include "BFSSolver.h"

int main()
{
    


    RubiksCubeBitboard cube;
    cube.print();

    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();

    BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
    vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();

    for(auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    bfsSolver.rubiksCube.print();

    
    return 0;

}