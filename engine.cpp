#include <algorithm>
#include <random>
#include <iostream>
#include <thread>
#include "board.hpp"
#include "engine.hpp"
#include "butils.hpp"
using namespace std;
int evalfn7_3(Board &d)
{
    std::string s = board_to_str(&d.data);
    int eval1 = 0;
    for (int i = 0; i < 55; i++)
    {
        if (s[i] == 'r')
            eval1 -= 50;
        else if (s[i] == 'R')
            eval1 += 50;
        else if (s[i] == 'b')
            eval1 -= 30;
        else if (s[i] == 'B')
            eval1 += 30;
        else if (s[i] == 'p')
            eval1 -= 10;
        else if (s[i] == 'P')
            eval1 += 10;
    }
    if (d.data.player_to_play == BLACK)
        if (d.in_check())
            eval1 += 50;
    if (d.data.player_to_play == WHITE)
        if (d.in_check())
            eval1 -= 50;
    if (d.under_threat(d.data.w_bishop))
        eval1 -= 20;
    if (d.under_threat(d.data.b_bishop))
        eval1 += 20;
    if (d.under_threat(d.data.b_rook_1))
        eval1 += 40;
    if (d.under_threat(d.data.b_rook_2))
        eval1 += 40;
    if (d.under_threat(d.data.b_pawn_1))
        eval1 += 5;
    if (d.under_threat(d.data.b_pawn_2))
        eval1 += 5;
    if (d.under_threat(d.data.w_pawn_1))
        eval1 -= 5;
    if (d.under_threat(d.data.w_pawn_2))
        eval1 -= 5;
    if (d.under_threat(d.data.w_rook_1))
        eval1 -= 40;
    if (d.under_threat(d.data.w_rook_2))
        eval1 -= 40;
    return eval1;
}
int evalfn8_4(Board &d)
{
    string s = board_to_str(&d.data);
    int eval1 = 0;
    for (int i = 0; i < 71; i++)
    {
        if (s[i] == 'r')
            eval1 -= 50;
        else if (s[i] == 'R')
            eval1 += 50;
        else if (s[i] == 'b')
            eval1 -= 30;
        else if (s[i] == 'B')
            eval1 += 30;
        else if (s[i] == 'p')
            eval1 -= 10;
        else if (s[i] == 'P')
            eval1 += 10;
    }
    if (d.data.player_to_play == BLACK)
        if (d.in_check())
            eval1 += 50;
    if (d.data.player_to_play == WHITE)
        if (d.in_check())
            eval1 -= 50;
    if (d.under_threat(d.data.w_bishop))
        eval1 -= 20;
    if (d.under_threat(d.data.b_bishop))
        eval1 += 20;
    if (d.under_threat(d.data.b_rook_1))
        eval1 += 40;
    if (d.under_threat(d.data.b_rook_2))
        eval1 += 40;
    if (d.under_threat(d.data.b_pawn_1))
        eval1 += 5;
    if (d.under_threat(d.data.b_pawn_2))
        eval1 += 5;
    if (d.under_threat(d.data.b_pawn_3))
        eval1 += 5;
    if (d.under_threat(d.data.b_pawn_4))
        eval1 += 5;
    if (d.under_threat(d.data.w_pawn_1))
        eval1 -= 5;
    if (d.under_threat(d.data.w_pawn_2))
        eval1 -= 5;
    if (d.under_threat(d.data.w_pawn_3))
        eval1 -= 5;
    if (d.under_threat(d.data.w_pawn_4))
        eval1 -= 5;
    if (d.under_threat(d.data.w_rook_1))
        eval1 -= 40;
    if (d.under_threat(d.data.w_rook_2))
        eval1 -= 40;
    return eval1;
}
int evalfn8_2(Board &d)
{
    string s = board_to_str(&d.data);
    cout << s << endl;
    int eval1 = 0;
    for (int i = 0; i < 71; i++)
    {
        if (s[i] == 'n')
            eval1 -= 30;
        else if (s[i] == 'N')
            eval1 += 30;
        else if (s[i] == 'r')
            eval1 -= 50;
        else if (s[i] == 'R')
            eval1 += 50;
        else if (s[i] == 'b')
            eval1 -= 30;
        else if (s[i] == 'B')
            eval1 += 30;
        else if (s[i] == 'p')
            eval1 -= 10;
        else if (s[i] == 'P')
            eval1 += 10;
    }
    if (d.data.player_to_play == BLACK)
        if (d.in_check())
            eval1 += 50;
    if (d.data.player_to_play == WHITE)
        if (d.in_check())
            eval1 -= 50;
    if (d.under_threat(d.data.w_bishop))
        eval1 -= 20;
    if (d.under_threat(d.data.b_bishop))
        eval1 += 20;
    if (d.under_threat(d.data.b_rook_1))
        eval1 += 40;
    if (d.under_threat(d.data.b_rook_2))
        eval1 += 40;
    if (d.under_threat(d.data.b_pawn_1))
        eval1 += 5;
    if (d.under_threat(d.data.b_pawn_2))
        eval1 += 5;
    if (d.under_threat(d.data.b_pawn_3))
        eval1 += 5;
    if (d.under_threat(d.data.b_pawn_4))
        eval1 += 5;
    if (d.under_threat(d.data.w_pawn_1))
        eval1 -= 5;
    if (d.under_threat(d.data.w_pawn_2))
        eval1 -= 5;
    if (d.under_threat(d.data.w_pawn_3))
        eval1 -= 5;
    if (d.under_threat(d.data.w_pawn_4))
        eval1 -= 5;
    if (d.under_threat(d.data.w_rook_1))
        eval1 -= 40;
    if (d.under_threat(d.data.w_rook_2))
        eval1 -= 40;
    if (d.under_threat(d.data.w_knight_1))
        eval1 -= 20;
    if (d.under_threat(d.data.b_knight_1))
        eval1 += 20;
    if (d.under_threat(d.data.b_knight_2))
        eval1 += 20;
    if (d.under_threat(d.data.w_knight_2))
        eval1 -= 20;
    return eval1;
}
void Engine::find_best_move(const Board &b)
{
    // pick a random move
    auto moveset = b.get_legal_moves();
    if (moveset.size() == 0)
    {
        std::cout << board_to_str(&b.data);
        this->best_move = 0;
    }
    else
    {
        std::vector<U16> moves;
        for (auto m : moveset)
        {
            std::cout << move_to_str(m) << " ";
            moves.push_back(m);
        }
        std::cout << std::endl;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(moves.begin(), moves.end(), g);
        U16 mv = moves[0];
        if (b.data.player_to_play == WHITE)
        {
            int mn = -10000;
            for (U16 m : moves)
            {
                Board *c = new Board(b.data);
                c->do_move_(m);
                auto next_moves = c->get_legal_moves();
                if (c->get_legal_moves().size() == 0 && c->in_check())
                {
                    this->best_move = m;
                    delete c;
                    return;
                }
                else
                {
                    std::vector<U16> next_moves1;
                    for (auto bm : next_moves)
                    {
                        next_moves1.push_back(bm);
                    }
                    std::shuffle(next_moves1.begin(), next_moves1.end(), g);
                    int n = 10000;
                    for (auto bm : next_moves1)
                    {
                        Board *d = new Board(c->data);
                        d->do_move_(bm);
                        int z = 0;
                        if (d->data.board_type == SEVEN_THREE)
                        {
                            z = evalfn7_3(*d);
                        }
                        else if (d->data.board_type == EIGHT_FOUR)
                        {
                            z = evalfn8_4(*d);
                        }
                        else
                        {
                            z = evalfn8_2(*d);
                        }
                        if (n > z)
                        {
                            n = z;
                        }

                        delete d;
                    }
                    if (n > mn)
                    {
                        mn = n;
                        mv = m;
                    }
                    delete c;
                }
            }
        }
        else
        {
            int mn = 10000;
            for (U16 m : moves)
            {
                Board *c = new Board(b.data);
                c->do_move_(m);
                auto next_moves = c->get_legal_moves();
                if (c->get_legal_moves().size() == 0 && c->in_check())
                {
                    this->best_move = m;
                    delete c;
                    return;
                }
                else
                {
                    std::vector<U16> next_moves1;
                    for (auto bm : next_moves)
                    {
                        next_moves1.push_back(bm);
                    }
                    std::shuffle(next_moves1.begin(), next_moves1.end(), g);
                    int n = -10000;
                    for (auto bm : next_moves1)
                    {
                        Board *d = new Board(c->data);
                        d->do_move_(bm);
                        int z = 0;
                        if (d->data.board_type == SEVEN_THREE)
                            z = evalfn7_3(*d);
                        else if (d->data.board_type == EIGHT_FOUR)
                            z = evalfn8_4(*d);
                        else
                            z = evalfn8_2(*d);
                        if (n < z)
                        {
                            n = z;
                        }
                        delete d;
                    }
                    if (n < mn)
                    {
                        mn = n;
                        mv = m;
                    }
                    delete c;
                }
            }
        }
        this->best_move = mv;
    }
    // just for debugging, to slow down the moves
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
}
