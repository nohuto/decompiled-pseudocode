/*
 * XREFs of Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting @ 0x14040AF98
 * Callers:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1402AE1AC (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x14040B024 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 *     KiFlushSharedReadyQueueReadyLists @ 0x14057BA1C (KiFlushSharedReadyQueueReadyLists.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 * Callees:
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity @ 0x14040AE78 (Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage @ 0x14040AEB0 (Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting @ 0x14040AF40 (Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting(int a1)
{
  switch ( a1 )
  {
    case 0:
      return Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting();
    case 3:
      return Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage();
    case 4:
      return Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity();
  }
  return Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting(a1);
}
