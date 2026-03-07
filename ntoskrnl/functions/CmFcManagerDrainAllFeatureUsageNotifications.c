char CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  __int64 v2; // r8
  signed __int8 v3; // cf
  __int64 v4; // rdi
  __int64 v5; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&stru_140C14048, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C14048, 0LL);
  v4 = v1;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&stru_140C14048, v1, (__int64)&stru_140C14048);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v2);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14048, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14048);
  KeAbPostRelease((ULONG_PTR)&stru_140C14048);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
