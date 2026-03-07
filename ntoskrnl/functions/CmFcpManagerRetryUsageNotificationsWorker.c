char __fastcall CmFcpManagerRetryUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a2 + 328);
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a2 + 328, 0LL);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v5, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  *(_BYTE *)(a2 + 337) = 0;
  CmFcpManagerDrainUsageNotifications(a2, 1, v6);
  CmFcpManagerDrainUsageNotifications(a2, 1, v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
