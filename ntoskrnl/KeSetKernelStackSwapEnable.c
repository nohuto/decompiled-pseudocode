/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x140283360
 * Callers:
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     ExpWorkerThread @ 0x140352200 (ExpWorkerThread.c)
 *     KiEpfStart @ 0x140576BB4 (KiEpfStart.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x140AA7FA0 (ExpSetSwappingKernelApc.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0;
  if ( Enable != result )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
  }
  return result;
}
