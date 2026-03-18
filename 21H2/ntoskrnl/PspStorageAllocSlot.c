/*
 * XREFs of PspStorageAllocSlot @ 0x1408258B8
 * Callers:
 *     PsAllocSiloContextSlot @ 0x140825790 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x1408257B0 (PsRegisterSiloMonitor.c)
 *     VRegSetup @ 0x14085B100 (VRegSetup.c)
 *     CmpInitSiloSupport @ 0x140861E5C (CmpInitSiloSupport.c)
 *     PspInitializeSiloStructures @ 0x140AFF540 (PspInitializeSiloStructures.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  ULONG ClearBitsAndSet; // ebx
  char v5; // di

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v2 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
