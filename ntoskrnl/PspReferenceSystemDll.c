/*
 * XREFs of PspReferenceSystemDll @ 0x140727C90
 * Callers:
 *     PspMapSystemDll @ 0x140727ACC (PspMapSystemDll.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     MmInitSystemDll @ 0x140B720A8 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B9391C (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x1403434A0 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x140580610 (ObFastReferenceObjectLocked.c)
 */

unsigned __int64 __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
    v2 = ObFastReferenceObjectLocked(a1, 0x64537350u);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v2;
}
