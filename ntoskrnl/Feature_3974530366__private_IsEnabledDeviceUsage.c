/*
 * XREFs of Feature_3974530366__private_IsEnabledDeviceUsage @ 0x14040D3C0
 * Callers:
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 * Callees:
 *     Feature_3974530366__private_IsEnabledFallback @ 0x14040D3F8 (Feature_3974530366__private_IsEnabledFallback.c)
 */

__int64 Feature_3974530366__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3974530366__private_featureState & 0x10) != 0 )
    return Feature_3974530366__private_featureState & 1;
  else
    return Feature_3974530366__private_IsEnabledFallback((unsigned int)Feature_3974530366__private_featureState, 3LL);
}
