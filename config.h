#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("^C2^",  "sb-mic",      0,     11)  \
    X("^C3^",  "sb-cpu",      10,    18)  \
    X("^C4^",  "sb-torrent",  20,    7) \
    X("^C5^",  "sb-forecast", 18000, 5)  \
    X("^C6^",  "sb-memory",   10,    4) \
    X("^C7^",  "sb-volume",   0,     10) \
    X("^C9^",  "sb-nettraf",  1,     16) \
    X("^C10^",  "sb-battery",  5,     3) \
    X("^C11^", "sb-clock",    60,    8) \
    X("^C12^", "sb-internet", 60,    1)

#endif  // CONFIG_H
