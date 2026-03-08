/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAA_NXZ @ 0x180111B70
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009AF40 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18023C1BC (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180111948 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180111AEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2831068478>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2831068478>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2831068478>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
