/*
 * XREFs of Feature_1875039550__private_IsEnabledDeviceUsage @ 0x14040BBB4
 * Callers:
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x1407EB0A8 (LdrpResGetMappingSize.c)
 * Callees:
 *     Feature_1875039550__private_IsEnabledFallback @ 0x14040BBEC (Feature_1875039550__private_IsEnabledFallback.c)
 */

__int64 Feature_1875039550__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1875039550__private_featureState & 0x10) != 0 )
    return Feature_1875039550__private_featureState & 1;
  else
    return Feature_1875039550__private_IsEnabledFallback((unsigned int)Feature_1875039550__private_featureState, 3LL);
}
