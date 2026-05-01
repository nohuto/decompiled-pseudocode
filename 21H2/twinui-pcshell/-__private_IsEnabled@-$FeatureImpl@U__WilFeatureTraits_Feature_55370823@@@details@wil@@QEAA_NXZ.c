/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ @ 0x1800AB610
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ @ 0x1800A2CF0 (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ.c)
 *     ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1800A3018 (-DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?ShouldInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAA_NXZ @ 0x1800A9BD8 (-ShouldInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ @ 0x1800AC834 (-evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ.c)
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x180265B20 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180265DF4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A343C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8904 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
