/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@QEAA_NXZ @ 0x180127528
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180124648 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180121BAC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialC_ea_180121BAC.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18012570C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupO.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
