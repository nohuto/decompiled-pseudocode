/*
 * XREFs of PspStorageFreeSlot @ 0x1409B4AD0
 * Callers:
 *     PsFreeSiloContextSlot @ 0x1409AB6D0 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x140AFF540 (PspInitializeSiloStructures.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageFreeSlot(unsigned int a1)
{
  unsigned int v1; // edi
  RTL_BITMAP *v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi

  v1 = a1;
  if ( a1 >= 0x20 )
  {
    v1 = a1 - 32;
    v2 = &PspStorageExpansionBitmap;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    v2 = &PspStorageBitmap;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  if ( _bittest64((const signed __int64 *)v2->Buffer, v1) )
  {
    _bittestandreset((signed __int32 *)v2->Buffer, v1);
    v4 = 0;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
