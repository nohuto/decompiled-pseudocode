/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x1409959F8
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408091B0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopDirectedDripsClearDisengageReason @ 0x1402500D4 (PopDirectedDripsClearDisengageReason.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x14039ADE8 (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 *     PopDirectedDripsNotify @ 0x140811764 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14099596C (PopPowerAggregatorEngageAggressiveStandbyActions.c)
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
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(2, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  dword_140C208D4 = 0;
  dword_140C208D8 = PopDripsWatchdogDebounceTickInterval;
  byte_140C208F0 = v3;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v10 = v3;
  PopDirectedDripsNotify(6, &v10);
  PopPowerAggregatorEngageAggressiveStandbyActions(v7);
  ((void (__fastcall *)(_QWORD))qword_140C5ADD8)(v4);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
