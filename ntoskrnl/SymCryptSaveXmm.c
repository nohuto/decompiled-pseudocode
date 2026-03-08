/*
 * XREFs of SymCryptSaveXmm @ 0x14056ADFC
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EFFF0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptSaveXmm()
{
  return PdcCreateWatchdogAroundClientCall();
}
