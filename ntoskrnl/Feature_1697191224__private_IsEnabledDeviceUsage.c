/*
 * XREFs of Feature_1697191224__private_IsEnabledDeviceUsage @ 0x14040D488
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     Feature_1697191224__private_IsEnabledFallback @ 0x14040D4C0 (Feature_1697191224__private_IsEnabledFallback.c)
 */

__int64 Feature_1697191224__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1697191224__private_featureState & 0x10) != 0 )
    return Feature_1697191224__private_featureState & 1;
  else
    return Feature_1697191224__private_IsEnabledFallback((unsigned int)Feature_1697191224__private_featureState, 3LL);
}
