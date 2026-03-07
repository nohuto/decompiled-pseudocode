__int64 Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Mercury_App_Backup_V2__private_featureState & 0x10) != 0 )
    return Feature_Mercury_App_Backup_V2__private_featureState & 1;
  else
    return Feature_Mercury_App_Backup_V2__private_IsEnabledFallback(
             (unsigned int)Feature_Mercury_App_Backup_V2__private_featureState,
             3LL);
}
