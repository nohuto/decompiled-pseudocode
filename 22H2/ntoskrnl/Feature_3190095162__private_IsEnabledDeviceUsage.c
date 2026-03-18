/*
 * XREFs of Feature_3190095162__private_IsEnabledDeviceUsage @ 0x140411798
 * Callers:
 *     EtwpValidateFlagExtension @ 0x1407F8470 (EtwpValidateFlagExtension.c)
 * Callees:
 *     Feature_3190095162__private_IsEnabledFallback @ 0x1404117D0 (Feature_3190095162__private_IsEnabledFallback.c)
 */

__int64 Feature_3190095162__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3190095162__private_featureState & 0x10) != 0 )
    return Feature_3190095162__private_featureState & 1;
  else
    return Feature_3190095162__private_IsEnabledFallback((unsigned int)Feature_3190095162__private_featureState, 3LL);
}
