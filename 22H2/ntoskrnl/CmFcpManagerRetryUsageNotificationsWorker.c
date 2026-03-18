/*
 * XREFs of CmFcpManagerRetryUsageNotificationsWorker @ 0x140A27EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140810588 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *__fastcall CmFcpManagerRetryUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a2 + 328);
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a2 + 328, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v5, (__int64)v3);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  *(_BYTE *)(a2 + 337) = 0;
  CmFcpManagerDrainUsageNotifications(a2, 1);
  CmFcpManagerDrainUsageNotifications(a2, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
