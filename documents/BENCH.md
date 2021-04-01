# Benchmark
I applied the benchmark test written by Mr. Jullien to Easy-ISLisp. 
see bench folder.

# Constraint 
The compiled code of frpoly.lsp does not work properly due to GCC compiler optimization.
Therefore, the compiler version excludes frpoly. 

# Hardware
Intel(R) Core(TM) i5-6500 CPU @ 3.20GHz

# Interpreter
$ eisl -s bench/runbench.lsp

```

Test 01: Fib     -> ok, time =   0.006509s.
Test 02: Tak     -> ok, time =   0.025662s.
Test 03: Stak    -> ok, time =   0.07359s.
Test 04: Ctak    -> ok, time =   0.037173s.
Test 05: Takl    -> ok, time =   0.146051s.
Test 06: Takr    -> ok, time =   0.027699s.
Test 07: Boyer   -> T, time =   0.371107s.
Test 08: Browse  -> ok, time =   0.409977s.
Test 09: Destru  -> ok, time =   0.05987s.
Test 10: Travini -> ok, time =   0.494095s.
Test 11: Travrun -> ok, time =   6.826968s.
Test 12: Deriv   -> ok, time =   0.054394s.
Test 13: Dderiv  -> ok, time =   0.061663s.
Test 14: Divit   -> ok, time =   0.049307s.
Test 15: Divrec  -> ok, time =   0.060932s.
Test 16: FFT     -> ok, time =   0.200734s.
Test 17: Puzzle  -> ok, time =   0.540896s.
Test 18: Triang  -> ok, time =   7.674351s.
Test 19: Fprint  -> ok, time =   0.00048s.
Test 20: Fread   -> ok, time =   0.000454s.
Test 21: Tprint  -> ok, time = 5e-0600s.
Test 22: Frpoly  -> ok, time =   0.022222s.

Total  17.144139s.


```


# Compiler
$ eisl -c -s bench/runcpbench.lsp

```
Test 01: Fib     -> ok, time =   0.0008050000000000001s.
Test 02: Tak     -> ok, time =   0.003552s.
Test 03: Stak    -> 12, time =   0.020667s.
Test 04: Ctak    -> ok, time =   0.009361s.
Test 05: Takl    -> ok, time =   0.003979s.
Test 06: Takr    -> ok, time =   0.004532s.
Test 07: Boyer   -> T, time =   0.092349s.
Test 08: Browse  -> ok, time =   0.349342s.
Test 09: Destru  -> ok, time =   0.007962s.
Test 10: Travini -> ok, time =   0.045832s.
Test 11: Travrun -> ok, time =   0.991067s.
Test 12: Deriv   -> ok, time =   0.083801s.
Test 13: Dderiv  -> ok, time =   0.085697s.
Test 14: Divit   -> ok, time =   0.014502s.
Test 15: Divrec  -> ok, time =   0.003212s.
Test 16: FFT     -> ok, time =   0.08823499999999999s.
Test 17: Puzzle  -> ok, time =   0.292409s.
Test 18: Triang  -> ok, time =   2.988443s.
Test 19: Fprint  -> ok, time =   0.000387s.
Test 20: Fread   -> ok, time =   0.000619s.
Test 21: Tprint  -> ok, time = 4e-0600s.
Test 22: Frpoly  -> ok, time =   0.125247s.

Total   5.212003999999999s.

```