/*
 * XREFs of Feature_2723316028__private_IsEnabledDeviceUsage @ 0x14040A1F0
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 * Callees:
 *     Feature_2723316028__private_IsEnabledFallback @ 0x14040A228 (Feature_2723316028__private_IsEnabledFallback.c)
 */

__int64 Feature_2723316028__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2723316028__private_featureState & 0x10) != 0 )
    return Feature_2723316028__private_featureState & 1;
  else
    return Feature_2723316028__private_IsEnabledFallback((unsigned int)Feature_2723316028__private_featureState, 3LL);
}
