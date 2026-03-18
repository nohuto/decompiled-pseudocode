/*
 * XREFs of Feature_2473223486__private_IsEnabledDeviceUsage @ 0x1C001CFD8
 * Callers:
 *     UsbhBuildClassCompatibleID @ 0x1C004F94C (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildCompatibleID @ 0x1C004FEC0 (UsbhBuildCompatibleID.c)
 *     UsbhBuildContainerID @ 0x1C0050024 (UsbhBuildContainerID.c)
 *     UsbhBuildDeviceID @ 0x1C005068C (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C00509B0 (UsbhBuildHardwareID.c)
 *     UsbhBuildUnknownIds @ 0x1C0050E08 (UsbhBuildUnknownIds.c)
 *     UsbhGetLocationIdString @ 0x1C0051374 (UsbhGetLocationIdString.c)
 *     UsbhMakeId @ 0x1C0051A64 (UsbhMakeId.c)
 * Callees:
 *     Feature_2473223486__private_IsEnabledFallback @ 0x1C001D010 (Feature_2473223486__private_IsEnabledFallback.c)
 */

__int64 Feature_2473223486__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.Dpc.SystemArgument1 & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Dpc.SystemArgument1 & 1;
  else
    return Feature_2473223486__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1), 3LL);
}
