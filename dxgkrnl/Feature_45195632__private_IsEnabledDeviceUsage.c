/*
 * XREFs of Feature_45195632__private_IsEnabledDeviceUsage @ 0x1C0026904
 * Callers:
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C01F120C (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     Feature_45195632__private_IsEnabledFallback @ 0x1C002693C (Feature_45195632__private_IsEnabledFallback.c)
 */

__int64 Feature_45195632__private_IsEnabledDeviceUsage()
{
  if ( (Feature_45195632__private_featureState & 0x10) != 0 )
    return Feature_45195632__private_featureState & 1;
  else
    return Feature_45195632__private_IsEnabledFallback((unsigned int)Feature_45195632__private_featureState, 3LL);
}
