/*
 * XREFs of PspStorageMakeSlotReadOnly @ 0x140690B2C
 * Callers:
 *     PsMakeSiloContextPermanent @ 0x140690B00 (PsMakeSiloContextPermanent.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x140692BA8 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageMakeSlotReadOnly(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbx
  char v6; // si
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  v8 = 0LL;
  result = PspGetStorageArray(a1, a2, &v7, &v8);
  v3 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = v8 + 16LL * v7;
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    if ( (*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
    else
      v3 = -1073741811;
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease(v5);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}
