/*
 * XREFs of PspStorageAllocSlot @ 0x140795A48
 * Callers:
 *     PsAllocSiloContextSlot @ 0x140795920 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x140795940 (PsRegisterSiloMonitor.c)
 *     CmpInitSiloSupport @ 0x1407A58F8 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x1407CB1E0 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140A3DBC4 (PspInitializeSiloStructures.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  int v2; // edi
  ULONG ClearBitsAndSet; // ebx
  char v4; // al

  v2 = 0;
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
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
