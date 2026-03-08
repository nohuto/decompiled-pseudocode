/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x140990734
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140880F30 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1402F2FE8 (PopDirectedDripsClearDisengageReason.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C2490 (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409906A8 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
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
  dword_140C39634 = 0;
  dword_140C39638 = PopDripsWatchdogDebounceTickInterval;
  byte_140C39650 = v3;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v10 = v3;
  PopDirectedDripsNotify(6, (char *)&v10);
  PopPowerAggregatorEngageAggressiveStandbyActions(v7);
  ((void (__fastcall *)(_QWORD))qword_140C6AC28)(v4);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
