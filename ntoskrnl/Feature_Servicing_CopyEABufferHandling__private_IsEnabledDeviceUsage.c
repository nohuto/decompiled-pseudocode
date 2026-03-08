/*
 * XREFs of Feature_Servicing_CopyEABufferHandling__private_IsEnabledDeviceUsage @ 0x14040A170
 * Callers:
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 * Callees:
 *     Feature_Servicing_CopyEABufferHandling__private_IsEnabledFallback @ 0x14040A1A8 (Feature_Servicing_CopyEABufferHandling__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CopyEABufferHandling__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CopyEABufferHandling__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CopyEABufferHandling__private_featureState & 1;
  else
    return Feature_Servicing_CopyEABufferHandling__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CopyEABufferHandling__private_featureState,
             3LL);
}
