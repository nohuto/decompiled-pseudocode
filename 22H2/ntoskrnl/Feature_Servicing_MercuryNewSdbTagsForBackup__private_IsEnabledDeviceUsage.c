/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x140419BFC
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DE54 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140759490 (SdbpCheckAttribute.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x140A4F580 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140A50910 (SdbpCheckPackageAttributes.c)
 *     SdbpFreeAppAttributes @ 0x140A50D9C (SdbpFreeAppAttributes.c)
 *     SdbpCheckFromStringVersion @ 0x140A53458 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x140A535D0 (SdbpCheckUptoStringVersion.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x140419C34 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 1;
  else
    return Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState,
             3LL);
}
