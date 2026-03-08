/*
 * XREFs of PspStorageAllocSlot @ 0x14080C8BC
 * Callers:
 *     PsAllocSiloContextSlot @ 0x14080C7A0 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x14080C7C0 (PsRegisterSiloMonitor.c)
 *     CmpInitSiloSupport @ 0x140816810 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x1408543D0 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140B3E8CC (PspInitializeSiloStructures.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
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
