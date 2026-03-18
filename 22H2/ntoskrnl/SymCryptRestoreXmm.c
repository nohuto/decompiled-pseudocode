/*
 * XREFs of SymCryptRestoreXmm @ 0x14056D25C
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5510 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
