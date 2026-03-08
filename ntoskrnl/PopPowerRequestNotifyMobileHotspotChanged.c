/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x14097E708
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140584EE0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408525A4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1408525EC (PopPowerRequestStatsNotifyScenarioStateChange.c)
 */

void __fastcall PopPowerRequestNotifyMobileHotspotChanged(char a1)
{
  PopAcquirePowerRequestPushLock(1);
  if ( byte_140C3F251 != a1 )
  {
    byte_140C3F251 = a1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, a1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
