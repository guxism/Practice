- yywrap(), return 0 or 1, called after eof is met
    - 1: default, done and no more
    - 0: continue to read from yyin
- override yyin with FILE*
- to read from command line, there is a hook thing: YY_INPUT, a macro, deal with that