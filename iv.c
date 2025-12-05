#include <stdio.h>
#include <stdlib.h>
#include <SDL3/SDL.h>

int main()
{
  SDL_Window *pwindow = SDL_CreateWindow("Spl Lab2", 1080, 560, SDL_WINDOW_OPENGL);
  if (pwindow == NULL)
  {
    SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
    return 1;
  }

  SDL_Delay(3000);
  return 0;
}