/*
 * XREFs of Feature_DropPowerReferenceOnLPE__private_IsEnabled @ 0x1C000CCD4
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000D220 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000DA50 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0077890 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C95C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C000C9E4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 Feature_DropPowerReferenceOnLPE__private_IsEnabled()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  if ( (Feature_DropPowerReferenceOnLPE__private_featureState & 1) != 0 )
    v0 = Feature_DropPowerReferenceOnLPE__private_featureState;
  else
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_DropPowerReferenceOnLPE__private_featureState,
           (unsigned int)Feature_DropPowerReferenceOnLPE__private_featureState,
           (__int64)&wil_details_featureDescriptors_a);
  v1 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (volatile signed __int32 *)&Feature_DropPowerReferenceOnLPE__private_reporting,
    0x29A9286u,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (__int64)&Feature_DropPowerReferenceOnLPE_logged_traits,
    v1,
    v3);
  return v1;
}
