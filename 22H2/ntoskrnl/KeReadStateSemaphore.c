/*
 * XREFs of KeReadStateSemaphore @ 0x1402F8730
 * Callers:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FD500 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1409763D0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
