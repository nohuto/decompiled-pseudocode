/*
 * XREFs of KeReadStateSemaphore @ 0x1402CBA80
 * Callers:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403F7FE0 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140973330 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
