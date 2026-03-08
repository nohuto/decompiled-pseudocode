/*
 * XREFs of ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140785D64
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall ExEnableRaiseUMExceptionOnInvalidHandleClose(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v3; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  if ( a2 )
  {
    if ( a2 == 1 )
      *(_BYTE *)(a1 + 44) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(a1 + 44) &= ~0x10u;
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
