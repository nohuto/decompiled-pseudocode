/*
 * XREFs of Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage @ 0x1C00DDE50
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0161760 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback @ 0x1C00DDE88 (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback.c)
 */

__int64 Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ThrottleBackgroundRawMouseInput__private_featureState & 0x10) != 0 )
    return Feature_ThrottleBackgroundRawMouseInput__private_featureState & 1;
  else
    return Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback(
             (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_featureState,
             3LL);
}
