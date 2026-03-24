/*
 * XREFs of Feature_895686970__private_IsEnabledDeviceUsage @ 0x1C016B250
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0276D30 (DxgkEngBltViaGDI.c)
 * Callees:
 *     Feature_895686970__private_IsEnabledFallback @ 0x1C016B288 (Feature_895686970__private_IsEnabledFallback.c)
 */

__int64 Feature_895686970__private_IsEnabledDeviceUsage()
{
  if ( (Feature_895686970__private_featureState & 0x10) != 0 )
    return Feature_895686970__private_featureState & 1;
  else
    return Feature_895686970__private_IsEnabledFallback((unsigned int)Feature_895686970__private_featureState, 3LL);
}
