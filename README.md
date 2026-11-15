# Number Guessing Game

A simple command-line number guessing game written in C. The program chooses a number from 1 to 100, and you try to guess it with hints along the way.

## Features

- Random secret number between 1 and 100
- “Too high” and “too low” hints
- Input validation for non-integer guesses and values outside the range
- Displays your attempt count and final score when you win

## Requirements

- A C compiler, such as GCC or Clang
- A terminal or command prompt

## Build

From the project directory, compile the source file with GCC:

```sh
gcc Num_gs.c -o Num_gs
```

On Windows, you can optionally name the executable with its `.exe` extension:

```sh
gcc Num_gs.c -o Num_gs.exe
```

## Run

On macOS or Linux:

```sh
./Num_gs
```

On Windows:

```powershell
.\Num_gs.exe
```

If you compiled without the `.exe` suffix, run `.\Num_gs` instead.

## How to Play

1. Start the program.
2. Enter an integer from 1 to 100 when prompted.
3. Use the hints to adjust your next guess.
4. Keep guessing until you find the secret number.

Guesses outside the range do not count as attempts. A non-integer input ends the game with an error message.

## Scoring

The program reports the number of valid guesses and calculates the final score as:

```text
100 - (attempts - 1)
```

The score decreases by one point for each guess after the first. There is no minimum score, so it can become negative if it takes more than 101 guesses.

## Project Files

- `Num_gs.c` — game source code

## License

No license is currently specified. Add a license before allowing others to reuse or distribute this project.
