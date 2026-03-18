/*
 * XREFs of Feature_2140978491__private_IsEnabledDeviceUsage @ 0x140411744
 * Callers:
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 * Callees:
 *     Feature_2140978491__private_IsEnabledFallback @ 0x14041177C (Feature_2140978491__private_IsEnabledFallback.c)
 */

__int64 Feature_2140978491__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2140978491__private_featureState & 0x10) != 0 )
    return Feature_2140978491__private_featureState & 1;
  else
    return Feature_2140978491__private_IsEnabledFallback((unsigned int)Feature_2140978491__private_featureState, 3LL);
}
