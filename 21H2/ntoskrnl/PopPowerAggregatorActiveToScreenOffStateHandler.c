/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EE060
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776368 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x140382C34 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopThermalCsEntry @ 0x14056F9B0 (PopThermalCsEntry.c)
 *     PopPowerAggregatorStartNextSession @ 0x140774E54 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776208 (PopPowerAggregatorSetCurrentState.c)
 *     PopTransitionTelemetryOsState @ 0x140798C44 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopPowerAggregatorActiveToScreenOffStateHandler(__int64 a1)
{
  int MonitorReasonFromPowerEventId; // eax
  _DWORD v4[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, 32);
  v4[0] = 3;
  PopPowerAggregatorSetCurrentState(a1, (__int64)v4);
  PopPowerAggregatorStartNextSession(1u, *(_DWORD *)(a1 + 32));
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopTransitionTelemetryOsState(3, 6);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 32));
  PopThermalCsEntry(MonitorReasonFromPowerEventId == 23);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
