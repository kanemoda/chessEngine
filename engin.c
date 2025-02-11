#include "therook.h"

int main(int argc, char const *argv[])
{
    AllInit();
    uint64 playBitBoard = 0ULL;
    printf("Start:\n\n");
    printBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(D2));

    printf("D2 Added:\n\n");
    printBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(G2));

    printf("G2 Added:\n\n");
    printBitBoard(playBitBoard);

    return 0;
}
