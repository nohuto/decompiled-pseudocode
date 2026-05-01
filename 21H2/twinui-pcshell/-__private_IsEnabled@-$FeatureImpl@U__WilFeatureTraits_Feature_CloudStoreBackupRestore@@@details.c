/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudStoreBackupRestore@@@details@wil@@QEAA_NXZ @ 0x1801274B0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2 @ 0x18011C380 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$2.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudStoreBackupRestore@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801219A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudStoreBackupRestore@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudStoreBackupRestore@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180125604 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudStoreBackupRestore@@@details@wil@@QE.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudStoreBackupRestore>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudStoreBackupRestore>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudStoreBackupRestore>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
