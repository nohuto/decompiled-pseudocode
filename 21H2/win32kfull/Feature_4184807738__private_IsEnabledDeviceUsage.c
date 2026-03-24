/*
 * XREFs of Feature_4184807738__private_IsEnabledDeviceUsage @ 0x1C016DC28
 * Callers:
 *     GreMakeBitmapStock @ 0x1C00A9660 (GreMakeBitmapStock.c)
 * Callees:
 *     Feature_4184807738__private_IsEnabledFallback @ 0x1C016DC60 (Feature_4184807738__private_IsEnabledFallback.c)
 */

__int64 Feature_4184807738__private_IsEnabledDeviceUsage()
{
  if ( (Feature_4184807738__private_featureState & 0x10) != 0 )
    return Feature_4184807738__private_featureState & 1;
  else
    return Feature_4184807738__private_IsEnabledFallback((unsigned int)Feature_4184807738__private_featureState, 3LL);
}
