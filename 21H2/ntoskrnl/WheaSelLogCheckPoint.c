/*
 * XREFs of WheaSelLogCheckPoint @ 0x140A087A4
 * Callers:
 *     WheaSelLogInitialize @ 0x140B31348 (WheaSelLogInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     IpmiHwContextInitialized @ 0x1406528CC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140652DB0 (IpmiLibAddSelCheckpointRecord.c)
 */

__int64 WheaSelLogCheckPoint()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  unsigned int v4; // edi

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
    v4 = -1073741823;
  else
    v4 = IpmiLibAddSelCheckpointRecord();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
