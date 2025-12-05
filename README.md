## This is a project for my SPL project of Term 2 Level 1.

### Instructions to set up SDL library:
You need to download the SDL library to run this project. goto this link to download the library: [button][https://github.com/libsdl-org/SDL/releases]
After downloading the library, extract the contents and set up the include and lib paths in your IDE or compiler settings.
### To compile the code, use the following command:

```
gcc iv.c -o iv.exe -I "C:\SDL\x86_64-w64-mingw32\include" -L "C:\SDL\x86_64-w64-mingw32\lib" -lSDL3
```

### To run the code, use the following command:

```
iv.exe
```

first make sure you copy and paste the SDL3.dll file from the SDL bin folder to the same directory where your iv.exe file is located.