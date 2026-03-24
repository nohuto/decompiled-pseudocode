/*
 * XREFs of PopQueueWorkItem @ 0x1402D3A34
 * Callers:
 *     PopCheckForIdleness @ 0x140280EE0 (PopCheckForIdleness.c)
 *     PpmPerfTelemetryCallback @ 0x1402D3A10 (PpmPerfTelemetryCallback.c)
 *     PopBsdHandleRequest @ 0x1403F8020 (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x14056F770 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056F7F0 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x14056F8D0 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x140576380 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140576A00 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140578680 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1405786B0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1405787E0 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140578B54 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x140775630 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140779E50 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x140796800 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407D2E18 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408E3194 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408E3FE0 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408EF890 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408F1C74 (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
