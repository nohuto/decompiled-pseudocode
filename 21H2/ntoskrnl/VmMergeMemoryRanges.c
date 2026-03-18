/*
 * XREFs of VmMergeMemoryRanges @ 0x1409D9620
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     VmpMergeMemoryRanges @ 0x14062AAC8 (VmpMergeMemoryRanges.c)
 */

__int64 __fastcall VmMergeMemoryRanges(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax

  v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 88, 0LL);
    v5 = VmpMergeMemoryRanges((PEX_SPIN_LOCK)v4, a1 >> 12, a2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 88), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 88);
    KeAbPostRelease(v4 + 88);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return v5;
}
