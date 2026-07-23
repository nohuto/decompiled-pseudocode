/*
 * XREFs of SymCryptRestoreXmm @ 0x140515180
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EF244 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
