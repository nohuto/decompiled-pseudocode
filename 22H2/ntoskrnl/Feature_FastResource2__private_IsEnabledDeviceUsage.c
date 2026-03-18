/*
 * XREFs of Feature_FastResource2__private_IsEnabledDeviceUsage @ 0x1404122DC
 * Callers:
 *     ExpInitSystemPhase0 @ 0x140B61954 (ExpInitSystemPhase0.c)
 * Callees:
 *     Feature_FastResource2__private_IsEnabledFallback @ 0x140412314 (Feature_FastResource2__private_IsEnabledFallback.c)
 */

__int64 Feature_FastResource2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_FastResource2__private_featureState & 0x10) != 0 )
    return Feature_FastResource2__private_featureState & 1;
  else
    return Feature_FastResource2__private_IsEnabledFallback(
             (unsigned int)Feature_FastResource2__private_featureState,
             3LL);
}
