/*
 * XREFs of SymCryptRestoreXmm @ 0x14056ADCC
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EFFF0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
