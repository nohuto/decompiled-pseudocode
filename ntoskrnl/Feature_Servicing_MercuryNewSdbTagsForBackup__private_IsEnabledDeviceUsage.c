/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x1404117B8
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x1407A0F7C (SdbpCheckAttribute.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x140A4C8B0 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140A4DC40 (SdbpCheckPackageAttributes.c)
 *     SdbpFreeAppAttributes @ 0x140A4E0CC (SdbpFreeAppAttributes.c)
 *     SdbpCheckFromStringVersion @ 0x140A50788 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x140A50900 (SdbpCheckUptoStringVersion.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x1404117F0 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
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
