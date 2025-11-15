# Calendar Generator – README

This program takes a month and a year as input and prints a formatted calendar for that month. It calculates the correct starting weekday by counting the total number of days from year 1 up to the requested date.

## What the Program Does

1. Asks the user for a month number between 1 and 12.
2. Asks for a year between 1 and 9999.
3. Validates both inputs.
4. Calculates:
   - Total days passed before the given year.
   - Total days passed before the given month in that year.
   - The number of days in the selected month, including leap-year handling.
5. Determines the starting weekday based on accumulated days.
6. Prints a clean, aligned monthly calendar showing days under Sun–Sat.

## How the Calculation Works

- Every year before the input year is added to `totalDays`.
- Leap years follow the standard rule:
  - divisible by 4
  - not divisible by 100 unless also divisible by 400
- Each previous month adds its number of days.
- `totalDays % 7` gives the weekday offset for alignment.

## How to Use

1. Compile the file:
   ```
   g++ filename.cpp -o calendar
   ```
2. Run the program:
   ```
   ./calendar
   ```
3. Enter the month when prompted.
4. Enter the year.
5. The program prints the formatted calendar immediately.

## Output Example

You’ll see a header with the month and year, followed by weekdays and aligned day numbers.
