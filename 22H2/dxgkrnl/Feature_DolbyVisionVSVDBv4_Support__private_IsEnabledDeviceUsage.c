/*
 * XREFs of Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage @ 0x1C002730C
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C0207988 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0228380 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback @ 0x1C0027344 (Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DolbyVisionVSVDBv4_Support__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionVSVDBv4_Support__private_featureState & 1;
  else
    return Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionVSVDBv4_Support__private_featureState,
             3LL);
}
