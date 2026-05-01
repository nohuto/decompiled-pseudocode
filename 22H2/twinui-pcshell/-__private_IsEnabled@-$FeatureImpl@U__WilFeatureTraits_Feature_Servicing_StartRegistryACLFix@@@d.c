/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix@@@details@wil@@QEAA_NXZ @ 0x1800CC3E0
 * Callers:
 *     ?PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ @ 0x1800CC0B8 (-PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CBE54 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartRegistryA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CC330 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix@@@details@w.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
