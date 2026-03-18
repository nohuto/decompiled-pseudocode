/*
 * XREFs of SymCryptSaveXmm @ 0x14056D28C
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5510 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptSaveXmm()
{
  return PdcCreateWatchdogAroundClientCall();
}
