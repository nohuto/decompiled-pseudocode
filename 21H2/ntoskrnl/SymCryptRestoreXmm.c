/*
 * XREFs of SymCryptRestoreXmm @ 0x14056AF50
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403FD830 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
