/*
 * XREFs of Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage @ 0x140411810
 * Callers:
 *     AslPathClean @ 0x140A51F28 (AslPathClean.c)
 * Callees:
 *     Feature_Mercury_App_Backup_V2__private_IsEnabledFallback @ 0x140411848 (Feature_Mercury_App_Backup_V2__private_IsEnabledFallback.c)
 */

__int64 Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Mercury_App_Backup_V2__private_featureState & 0x10) != 0 )
    return Feature_Mercury_App_Backup_V2__private_featureState & 1;
  else
    return Feature_Mercury_App_Backup_V2__private_IsEnabledFallback(
             (unsigned int)Feature_Mercury_App_Backup_V2__private_featureState,
             3LL);
}
