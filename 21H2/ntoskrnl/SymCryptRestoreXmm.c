/*
 * XREFs of SymCryptRestoreXmm @ 0x140514F40
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EF0D4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A9F0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
