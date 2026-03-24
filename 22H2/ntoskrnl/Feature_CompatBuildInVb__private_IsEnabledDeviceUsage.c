/*
 * XREFs of Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F8D3C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140753CB0 (SdbpCheckMatchingFiles.c)
 *     SdbpMatchList @ 0x140754098 (SdbpMatchList.c)
 *     SdbpReleaseSearchDBContext @ 0x1407543EC (SdbpReleaseSearchDBContext.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140759CC0 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpCreateSearchDBContext @ 0x14075A630 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAttribute @ 0x1407B267C (SdbpCheckAttribute.c)
 *     SdbpCheckMatchingDir @ 0x1409643C0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409650D0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpMatchOne @ 0x140966050 (SdbpMatchOne.c)
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledFallback @ 0x1403F8D74 (Feature_CompatBuildInVb__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatBuildInVb__private_IsEnabledDeviceUsage()
{
  if ( (Feature_CompatBuildInVb__private_featureState & 0x10) != 0 )
    return Feature_CompatBuildInVb__private_featureState & 1;
  else
    return Feature_CompatBuildInVb__private_IsEnabledFallback(
             (unsigned int)Feature_CompatBuildInVb__private_featureState,
             3LL);
}
