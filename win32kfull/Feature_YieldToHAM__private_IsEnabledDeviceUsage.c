/*
 * XREFs of Feature_YieldToHAM__private_IsEnabledDeviceUsage @ 0x1C012D3D4
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0093274 (xxxQueryInformationThread.c)
 * Callees:
 *     Feature_YieldToHAM__private_IsEnabledFallback @ 0x1C012D40C (Feature_YieldToHAM__private_IsEnabledFallback.c)
 */

__int64 Feature_YieldToHAM__private_IsEnabledDeviceUsage()
{
  if ( (Feature_YieldToHAM__private_featureState & 0x10) != 0 )
    return Feature_YieldToHAM__private_featureState & 1;
  else
    return Feature_YieldToHAM__private_IsEnabledFallback((unsigned int)Feature_YieldToHAM__private_featureState, 3LL);
}
