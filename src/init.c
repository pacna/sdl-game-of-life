#include "global.h"

int init_SDL()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("Could not initialize SDL: %s\n", SDL_GetError());
        return FAIL;
    }

    return SUCCESS;
}

int init_window()
{
    window = NULL;

    if (!init_SDL())
    {
        return FAIL;
    }

    window = SDL_CreateWindow(
        "SDL Game of Life",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        SDL_WINDOW_SHOWN);

    if (window == NULL)
    {
        printf("Could not initialize window: %s\n", SDL_GetError());
        return FAIL;
    }

    return SUCCESS;
}

int init_game_of_life()
{
    if (!init_window())
    {
        return FAIL;
    }

    return SUCCESS;
}
