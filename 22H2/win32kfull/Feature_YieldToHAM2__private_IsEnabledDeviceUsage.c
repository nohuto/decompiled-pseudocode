/*
 * XREFs of Feature_YieldToHAM2__private_IsEnabledDeviceUsage @ 0x1C0139D48
 * Callers:
 *     xxxQueryInformationThread @ 0x1C00E21E4 (xxxQueryInformationThread.c)
 * Callees:
 *     Feature_YieldToHAM2__private_IsEnabledFallback @ 0x1C0139D80 (Feature_YieldToHAM2__private_IsEnabledFallback.c)
 */

__int64 Feature_YieldToHAM2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_YieldToHAM2__private_featureState & 0x10) != 0 )
    return Feature_YieldToHAM2__private_featureState & 1;
  else
    return Feature_YieldToHAM2__private_IsEnabledFallback((unsigned int)Feature_YieldToHAM2__private_featureState, 3LL);
}
