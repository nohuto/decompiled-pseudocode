/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTP@@@details@wil@@QEAA_NXZ @ 0x1800C7158
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_W32PTP@@@wil@@SA_NXZ @ 0x1800C6F30 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_W32PTP@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTP@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C6BA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W32PTP@@@details@wil@@AE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C7024 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W32PTP@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTP>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTP>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTP>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
