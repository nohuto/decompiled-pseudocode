/*
 * XREFs of CmFcpManagerDrainUsageNotificationsWorker @ 0x140A24EF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140818490 (CmFcpManagerDrainUsageNotifications.c)
 */

char __fastcall CmFcpManagerDrainUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a2 + 328);
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a2 + 328, 0LL);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v5, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  CmFcpManagerDrainUsageNotifications(a2, 0, v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
