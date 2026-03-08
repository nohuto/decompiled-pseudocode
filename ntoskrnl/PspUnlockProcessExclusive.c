/*
 * XREFs of PspUnlockProcessExclusive @ 0x1403587C0
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PspUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 1080;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
