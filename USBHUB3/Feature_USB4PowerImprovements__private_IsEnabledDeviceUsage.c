/*
 * XREFs of Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C000CE04
 * Callers:
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0019930 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0019BA0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025AA0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0026F1C (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x1C003075C (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     HUBMISC_ComputeU1Timeout @ 0x1C003081C (HUBMISC_ComputeU1Timeout.c)
 *     HUBMISC_ComputeU2Timeout @ 0x1C0030ADC (HUBMISC_ComputeU2Timeout.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007DFC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C0084F64 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     Feature_USB4PowerImprovements__private_IsEnabledFallback @ 0x1C000CDE8 (Feature_USB4PowerImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage()
{
  if ( (WPP_MAIN_CB.DeviceLock.Header.Type & 0x10) != 0 )
    return WPP_MAIN_CB.DeviceLock.Header.Type & 1;
  else
    return Feature_USB4PowerImprovements__private_IsEnabledFallback(
             (unsigned int)WPP_MAIN_CB.DeviceLock.Header.Lock,
             3u);
}
