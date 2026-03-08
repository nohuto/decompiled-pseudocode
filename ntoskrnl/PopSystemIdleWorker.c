/*
 * XREFs of PopSystemIdleWorker @ 0x14073B6A0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402F6DE0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopScanIdleList @ 0x1402BC8E0 (PopScanIdleList.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     PopPulseSystemIdleEvent @ 0x14073ADD8 (PopPulseSystemIdleEvent.c)
 *     PopExecuteSystemIdleAction @ 0x14073B810 (PopExecuteSystemIdleAction.c)
 *     PopUpdateLastUserInputTime @ 0x14073BC30 (PopUpdateLastUserInputTime.c)
 *     PopIsSystemIdle @ 0x14073BC88 (PopIsSystemIdle.c)
 */

__int64 PopSystemIdleWorker()
{
  bool v0; // si
  int v2; // ecx
  int v3; // ebx
  char IsSystemIdle; // di
  __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  v0 = PopIdleLoopExecuted.Header.SignalState == 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v2, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v2));
    if ( v2 == 2 )
      PopPulseSystemIdleEvent(2u);
  }
  PopUpdateLastUserInputTime();
  v3 = dword_140C09804;
  IsSystemIdle = PopIsSystemIdle(&unk_140C09818, (unsigned int)dword_140C09804, &v7, &unk_140C09918);
  dword_140C098F8 = PopSystemIdleContext;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  if ( PsWin32CalloutsEstablished )
    PopScanIdleList(v3, v7 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v5) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140C098F8, v5, &unk_140C09900);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140C098F8 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  if ( v0 )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
