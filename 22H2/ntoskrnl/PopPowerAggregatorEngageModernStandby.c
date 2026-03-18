/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x1409937E4
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140885D10 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14035DFE8 (PopDirectedDripsClearDisengageReason.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C733C (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1408782B8 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140993758 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorEngageModernStandby(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  __int64 v2; // r9
  unsigned __int8 v3; // di
  unsigned int v4; // esi
  unsigned int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  _OWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
  v3 = *(_BYTE *)(v2 + 42);
  v4 = *(_DWORD *)(v2 + 76);
  memset(v9, 0, sizeof(v9));
  v5 = MonitorReasonFromPowerEventId & 0xFFFFFF;
  LODWORD(v9[0]) = 1;
  PopPowerAggregatorSetCurrentState(v2, (__int64)v9);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(2, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  dword_140C39A34 = 0;
  dword_140C39A38 = PopDripsWatchdogDebounceTickInterval;
  byte_140C39A50 = v3;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v10 = v3;
  PopDirectedDripsNotify(6, (char *)&v10);
  PopPowerAggregatorEngageAggressiveStandbyActions(v7);
  ((void (__fastcall *)(_QWORD))qword_140C6B098)(v4);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
