/*
 * XREFs of PspLookupSyscallProviderById @ 0x1405A2870
 * Callers:
 *     PspSyscallProviderOptIn @ 0x1409B1F2C (PspSyscallProviderOptIn.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x1409B1E1C (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspLookupSyscallProviderById(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSyscallProviderRegistrationLock, 0LL);
  v5 = PspLookupSyscallProviderByIdNoLock(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
