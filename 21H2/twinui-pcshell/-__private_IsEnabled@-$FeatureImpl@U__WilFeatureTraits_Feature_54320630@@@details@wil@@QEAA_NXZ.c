/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54320630@@@details@wil@@QEAA_NXZ @ 0x1800B9FAC
 * Callers:
 *     _lambda_6e6fea714a04690c65ea3b6c1455a89e_::operator() @ 0x1800B15E0 (_lambda_6e6fea714a04690c65ea3b6c1455a89e_--operator().c)
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78D4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54320630@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B2E3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54320630@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54320630@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B6DCC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54320630@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_54320630>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54320630>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54320630>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
