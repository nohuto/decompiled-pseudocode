/*
 * XREFs of Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage @ 0x1C0139640
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledFallback @ 0x1C0139678 (Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Ni_EventShutDownCSRSSLeakFix__private_featureState & 0x10) != 0 )
    return Feature_Ni_EventShutDownCSRSSLeakFix__private_featureState & 1;
  else
    return Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledFallback(
             (unsigned int)Feature_Ni_EventShutDownCSRSSLeakFix__private_featureState,
             3LL);
}
