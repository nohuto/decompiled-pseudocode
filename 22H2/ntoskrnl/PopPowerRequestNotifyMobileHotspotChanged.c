/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x1409817B8
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140587410 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085641C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 */

void __fastcall PopPowerRequestNotifyMobileHotspotChanged(char a1)
{
  PopAcquirePowerRequestPushLock(1);
  if ( byte_140C3F691 != a1 )
  {
    byte_140C3F691 = a1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, a1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
