/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x140818060
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

char __fastcall CmFcpManagerSoftwareHiveReady(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  __int64 v5; // rsi

  *(_BYTE *)(a1 + 336) = 1;
  v1 = (unsigned __int64 *)(a1 + 328);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 328, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
