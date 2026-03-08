/*
 * XREFs of Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledDeviceUsage @ 0x14040AC58
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x14037E220 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledFallback @ 0x14040AC90 (Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_AmdDisableEarlyIBPB__private_featureState & 0x10) != 0 )
    return Feature_Servicing_AmdDisableEarlyIBPB__private_featureState & 1;
  else
    return Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AmdDisableEarlyIBPB__private_featureState,
             3LL);
}
