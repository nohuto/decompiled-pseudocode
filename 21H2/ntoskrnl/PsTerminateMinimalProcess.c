/*
 * XREFs of PsTerminateMinimalProcess @ 0x1409B137C
 * Callers:
 *     PspTeardownPartition @ 0x1409B3490 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x1409D9A20 (VmTerminateMemoryProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 */

bool __fastcall PsTerminateMinimalProcess(_DWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v5; // ebp
  volatile signed __int64 *v6; // rsi
  signed __int32 v7; // r14d
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  v5 = 8;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(BugCheckParameter1 + 270);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(BugCheckParameter1 + 270), 0LL);
  if ( !BugCheckParameter1[380] )
  {
    v5 = 33554440;
    if ( BugCheckParameter1[501] == 259 )
      BugCheckParameter1[501] = a2;
  }
  _m_prefetchw(BugCheckParameter1 + 281);
  v7 = _InterlockedOr(BugCheckParameter1 + 281, v5);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = (v5 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return PspRundownSingleProcess((__int64)BugCheckParameter1, 1);
  return result;
}
