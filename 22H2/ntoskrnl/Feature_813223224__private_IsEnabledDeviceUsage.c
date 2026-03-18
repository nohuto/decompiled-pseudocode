/*
 * XREFs of Feature_813223224__private_IsEnabledDeviceUsage @ 0x140410940
 * Callers:
 *     NtQueryDirectoryObject @ 0x1406C2680 (NtQueryDirectoryObject.c)
 * Callees:
 *     Feature_813223224__private_IsEnabledFallback @ 0x140410978 (Feature_813223224__private_IsEnabledFallback.c)
 */

__int64 Feature_813223224__private_IsEnabledDeviceUsage()
{
  if ( (Feature_813223224__private_featureState & 0x10) != 0 )
    return Feature_813223224__private_featureState & 1;
  else
    return Feature_813223224__private_IsEnabledFallback((unsigned int)Feature_813223224__private_featureState, 3LL);
}
