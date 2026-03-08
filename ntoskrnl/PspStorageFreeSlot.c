/*
 * XREFs of PspStorageFreeSlot @ 0x1409B4EC4
 * Callers:
 *     PsFreeSiloContextSlot @ 0x1409A95C0 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1070 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x140B3E8CC (PspInitializeSiloStructures.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
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
    *((_BYTE *)v2->Buffer + ((unsigned __int64)v1 >> 3)) &= ~(1 << (v1 & 7));
    v4 = 0;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
