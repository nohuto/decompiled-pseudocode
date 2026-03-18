/*
 * XREFs of Feature_1109720378__private_IsEnabledDeviceUsage @ 0x1404118C4
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     Feature_1109720378__private_IsEnabledFallback @ 0x1404118FC (Feature_1109720378__private_IsEnabledFallback.c)
 */

__int64 Feature_1109720378__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1109720378__private_featureState & 0x10) != 0 )
    return Feature_1109720378__private_featureState & 1;
  else
    return Feature_1109720378__private_IsEnabledFallback((unsigned int)Feature_1109720378__private_featureState, 3LL);
}
