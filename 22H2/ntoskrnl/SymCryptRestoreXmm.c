/*
 * XREFs of SymCryptRestoreXmm @ 0x140514E80
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EE9D4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A2F0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
