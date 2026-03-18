/*
 * XREFs of Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage @ 0x1C00037E8
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 * Callees:
 *     Feature_Servicing_UniqueTagging__private_IsEnabledFallback @ 0x1C0003820 (Feature_Servicing_UniqueTagging__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_UniqueTagging__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UniqueTagging__private_featureState & 1;
  else
    return Feature_Servicing_UniqueTagging__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UniqueTagging__private_featureState,
             3LL);
}
