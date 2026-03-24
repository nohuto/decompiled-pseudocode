/*
 * XREFs of Feature_1445264698__private_IsEnabledDeviceUsage @ 0x1403F8A24
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1406BC01C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     Feature_1445264698__private_IsEnabledFallback @ 0x1403F8A5C (Feature_1445264698__private_IsEnabledFallback.c)
 */

__int64 Feature_1445264698__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1445264698__private_featureState & 0x10) != 0 )
    return Feature_1445264698__private_featureState & 1;
  else
    return Feature_1445264698__private_IsEnabledFallback((unsigned int)Feature_1445264698__private_featureState, 3LL);
}
