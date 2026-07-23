/*
 * XREFs of PspReferenceSystemDll @ 0x1406C1094
 * Callers:
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1406C0A58 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140A4C9EC (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A94648 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
    v2 = ObFastReferenceObjectLocked(a1);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
  }
  return v2;
}
