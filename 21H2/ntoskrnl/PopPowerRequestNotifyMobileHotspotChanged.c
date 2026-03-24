/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E1B6C
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140568ED0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14067B148 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140772464 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsScenarioStateChange @ 0x1407724B0 (PopStatsScenarioStateChange.c)
 */

void __fastcall PopPowerRequestNotifyMobileHotspotChanged(char a1)
{
  unsigned __int64 v2; // rcx

  PopAcquirePowerRequestPushLock(1);
  BYTE1(PopExecutionRequiredContext) = a1;
  PopStatsScenarioStateChange(1LL, a1);
  PopHandleExecutionRequiredEnablementUpdate(v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
