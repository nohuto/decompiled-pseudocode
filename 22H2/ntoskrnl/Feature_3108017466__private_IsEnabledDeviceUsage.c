/*
 * XREFs of Feature_3108017466__private_IsEnabledDeviceUsage @ 0x14040F61C
 * Callers:
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 * Callees:
 *     Feature_3108017466__private_IsEnabledFallback @ 0x14040F654 (Feature_3108017466__private_IsEnabledFallback.c)
 */

__int64 Feature_3108017466__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3108017466__private_featureState & 0x10) != 0 )
    return Feature_3108017466__private_featureState & 1;
  else
    return Feature_3108017466__private_IsEnabledFallback((unsigned int)Feature_3108017466__private_featureState, 3LL);
}
