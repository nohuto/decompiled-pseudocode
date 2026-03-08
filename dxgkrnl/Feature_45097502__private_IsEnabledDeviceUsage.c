/*
 * XREFs of Feature_45097502__private_IsEnabledDeviceUsage @ 0x1C0026D20
 * Callers:
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0218370 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 * Callees:
 *     Feature_45097502__private_IsEnabledFallback @ 0x1C0026D58 (Feature_45097502__private_IsEnabledFallback.c)
 */

__int64 Feature_45097502__private_IsEnabledDeviceUsage()
{
  if ( (Feature_45097502__private_featureState & 0x10) != 0 )
    return Feature_45097502__private_featureState & 1;
  else
    return Feature_45097502__private_IsEnabledFallback((unsigned int)Feature_45097502__private_featureState, 3LL);
}
