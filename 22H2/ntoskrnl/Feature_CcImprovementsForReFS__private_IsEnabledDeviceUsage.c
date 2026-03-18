/*
 * XREFs of Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage @ 0x14040F3F4
 * Callers:
 *     CcInitializeCacheManager @ 0x140B4D188 (CcInitializeCacheManager.c)
 * Callees:
 *     Feature_CcImprovementsForReFS__private_IsEnabledFallback @ 0x14040F42C (Feature_CcImprovementsForReFS__private_IsEnabledFallback.c)
 */

__int64 Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage()
{
  if ( (Feature_CcImprovementsForReFS__private_featureState & 0x10) != 0 )
    return Feature_CcImprovementsForReFS__private_featureState & 1;
  else
    return Feature_CcImprovementsForReFS__private_IsEnabledFallback(
             (unsigned int)Feature_CcImprovementsForReFS__private_featureState,
             3LL);
}
