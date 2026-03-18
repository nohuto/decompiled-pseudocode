/*
 * XREFs of PspStorageAllocSlot @ 0x14082150C
 * Callers:
 *     CmpInitSiloSupport @ 0x14080EB40 (CmpInitSiloSupport.c)
 *     PsAllocSiloContextSlot @ 0x1408213F0 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x140821410 (PsRegisterSiloMonitor.c)
 *     VRegSetup @ 0x140858970 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140B4CF10 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x140295D80 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  ULONG ClearBitsAndSet; // ebx
  char v5; // di

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v3 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v3;
}
