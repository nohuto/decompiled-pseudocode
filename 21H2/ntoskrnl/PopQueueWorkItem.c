/*
 * XREFs of PopQueueWorkItem @ 0x14036AAC4
 * Callers:
 *     PopCheckForIdleness @ 0x1402D66F0 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1403698C4 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestUnrevokeRequests @ 0x140369A40 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestReferenceRelease @ 0x140369FDC (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14036A2C8 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14036A5FC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopThermalSxExit @ 0x14038AB60 (PopThermalSxExit.c)
 *     PopPowerRequestRevokeRequests @ 0x140397BB4 (PopPowerRequestRevokeRequests.c)
 *     PpmPerfTelemetryCallback @ 0x1403A15B0 (PpmPerfTelemetryCallback.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403D33C4 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x1405C6B50 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405C6B80 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PopThermalCsEntry @ 0x1405D03D0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1405D0450 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x1405D06C0 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1405D6A80 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405D6DA0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1405D8820 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1405D8850 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1405D8980 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1405D8DC8 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownCancelled @ 0x1406EADA0 (PoUserShutdownCancelled.c)
 *     PopUpdateExternalDisplayState @ 0x1406EB8A4 (PopUpdateExternalDisplayState.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 *     PopNetSetConnectivityConstraint @ 0x140864194 (PopNetSetConnectivityConstraint.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x14098BC1C (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x14098C9B0 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x140996B90 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x14099858C (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
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
