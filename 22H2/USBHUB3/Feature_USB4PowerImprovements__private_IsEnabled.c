/*
 * XREFs of Feature_USB4PowerImprovements__private_IsEnabled @ 0x1C000CC4C
 * Callers:
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0019800 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0019A70 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025990 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0026E0C (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x1C003064C (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     HUBMISC_ComputeU1Timeout @ 0x1C003070C (HUBMISC_ComputeU1Timeout.c)
 *     HUBMISC_ComputeU2Timeout @ 0x1C00309CC (HUBMISC_ComputeU2Timeout.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0077890 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007BF50 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007CFF0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C0083F98 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C95C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C000C9E4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 Feature_USB4PowerImprovements__private_IsEnabled()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  if ( (Feature_USB4PowerImprovements__private_featureState & 1) != 0 )
    v0 = Feature_USB4PowerImprovements__private_featureState;
  else
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_USB4PowerImprovements__private_featureState,
           (unsigned int)Feature_USB4PowerImprovements__private_featureState,
           (__int64)&Feature_USB4PowerImprovements__private_descriptor);
  v1 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (volatile signed __int32 *)&Feature_USB4PowerImprovements__private_reporting,
    0x295B56Du,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (__int64)&Feature_DropPowerReferenceOnLPE_logged_traits,
    v1,
    v3);
  return v1;
}
