/*
 * XREFs of WheaSelLogCheckPoint @ 0x140A04B94
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     WheaSelLogInitialize @ 0x140B482FC (WheaSelLogInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IpmiHwContextInitialized @ 0x1406751AC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140675868 (IpmiLibAddSelCheckpointRecord.c)
 */

__int64 WheaSelLogCheckPoint()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v1, (__int64)&WheaIpmiContextLock);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) || WheaIpmiHwLogLocked )
    v5 = -1073741823;
  else
    v5 = IpmiLibAddSelCheckpointRecord(v4);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
