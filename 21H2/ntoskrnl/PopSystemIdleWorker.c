/*
 * XREFs of PopSystemIdleWorker @ 0x1408F1260
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402434B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PopUpdateLastUserInputTime @ 0x140781780 (PopUpdateLastUserInputTime.c)
 *     PopPulseSystemIdleEvent @ 0x14078EB10 (PopPulseSystemIdleEvent.c)
 *     PopIdleDetection @ 0x1408E43B0 (PopIdleDetection.c)
 *     PopExecuteSystemIdleAction @ 0x1408F0F54 (PopExecuteSystemIdleAction.c)
 *     PopIsSystemIdle @ 0x1408F1064 (PopIsSystemIdle.c)
 */

__int64 PopSystemIdleWorker()
{
  int v1; // ecx
  int v2; // edi
  unsigned __int8 IsSystemIdle; // bl
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x100uLL, 0LL, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v1, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v1));
    if ( v1 == 2 )
      PopPulseSystemIdleEvent(2u);
  }
  PopUpdateLastUserInputTime();
  v2 = dword_140C0F214;
  IsSystemIdle = PopIsSystemIdle((__int64)&unk_140C0F228, dword_140C0F214, &v5, (__int64)&unk_140C0F328);
  dword_140C0F308 = PopSystemIdleContext;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  PopIdleDetection(v2, v5 / (unsigned int)PopIdleScanInterval);
  PopExecuteSystemIdleAction((unsigned int)dword_140C0F308, IsSystemIdle, (__int64)&unk_140C0F310);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140C0F308 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  return 0LL;
}
