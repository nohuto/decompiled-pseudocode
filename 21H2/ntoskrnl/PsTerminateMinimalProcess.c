/*
 * XREFs of PsTerminateMinimalProcess @ 0x14090AE6C
 * Callers:
 *     PspTeardownPartition @ 0x14090D1F0 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x14092F3B0 (VmTerminateMemoryProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 */

bool __fastcall PsTerminateMinimalProcess(_DWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v5; // ebp
  volatile signed __int64 *v6; // rsi
  signed __int32 v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v8, v9, v10);
  result = (v5 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return PspRundownSingleProcess((ULONG_PTR)BugCheckParameter1, 1);
  return result;
}
