/*
 * XREFs of Feature_UpdateDelayEventThresholds__private_IsEnabledDeviceUsage @ 0x1C00DDEA4
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 * Callees:
 *     Feature_UpdateDelayEventThresholds__private_IsEnabledFallback @ 0x1C00DDEDC (Feature_UpdateDelayEventThresholds__private_IsEnabledFallback.c)
 */

__int64 Feature_UpdateDelayEventThresholds__private_IsEnabledDeviceUsage()
{
  if ( (Feature_UpdateDelayEventThresholds__private_featureState & 0x10) != 0 )
    return Feature_UpdateDelayEventThresholds__private_featureState & 1;
  else
    return Feature_UpdateDelayEventThresholds__private_IsEnabledFallback(
             (unsigned int)Feature_UpdateDelayEventThresholds__private_featureState,
             3LL);
}
