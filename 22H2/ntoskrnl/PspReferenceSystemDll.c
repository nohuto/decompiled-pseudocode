/*
 * XREFs of PspReferenceSystemDll @ 0x1406FD074
 * Callers:
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1406FCA38 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140A4B9EC (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A93648 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402062F8 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp

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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v2;
}
