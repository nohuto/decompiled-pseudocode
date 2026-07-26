/*
 * XREFs of Feature_94813501__private_IsEnabledDeviceUsage @ 0x1C003DAC4
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0145710 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     Feature_94813501__private_IsEnabledFallback @ 0x1C003DAFC (Feature_94813501__private_IsEnabledFallback.c)
 */

__int64 Feature_94813501__private_IsEnabledDeviceUsage()
{
  if ( (Feature_94813501__private_featureState & 0x10) != 0 )
    return Feature_94813501__private_featureState & 1;
  else
    return Feature_94813501__private_IsEnabledFallback((unsigned int)Feature_94813501__private_featureState, 3LL);
}
