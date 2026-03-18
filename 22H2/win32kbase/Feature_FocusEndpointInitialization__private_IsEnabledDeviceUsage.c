/*
 * XREFs of Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsage @ 0x1C00D54E4
 * Callers:
 *     InitializeInputComponents @ 0x1C00821D8 (InitializeInputComponents.c)
 * Callees:
 *     Feature_FocusEndpointInitialization__private_IsEnabledFallback @ 0x1C00D551C (Feature_FocusEndpointInitialization__private_IsEnabledFallback.c)
 */

__int64 Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsage()
{
  if ( (Feature_FocusEndpointInitialization__private_featureState & 0x10) != 0 )
    return Feature_FocusEndpointInitialization__private_featureState & 1;
  else
    return Feature_FocusEndpointInitialization__private_IsEnabledFallback(
             (unsigned int)Feature_FocusEndpointInitialization__private_featureState,
             3LL);
}
