/*
 * XREFs of Feature_3058082109__private_IsEnabledDeviceUsage @ 0x1C00DE03C
 * Callers:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 * Callees:
 *     Feature_3058082109__private_IsEnabledFallback @ 0x1C00DE074 (Feature_3058082109__private_IsEnabledFallback.c)
 */

__int64 Feature_3058082109__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3058082109__private_featureState & 0x10) != 0 )
    return Feature_3058082109__private_featureState & 1;
  else
    return Feature_3058082109__private_IsEnabledFallback((unsigned int)Feature_3058082109__private_featureState, 3LL);
}
