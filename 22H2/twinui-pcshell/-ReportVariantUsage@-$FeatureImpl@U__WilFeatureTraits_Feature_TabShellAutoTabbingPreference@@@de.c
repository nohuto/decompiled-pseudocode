/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@QEAAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@3@_K@Z @ 0x1802F2934
 * Callers:
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1802F1C98 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x1800996F0 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F20F4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::ReportVariantUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+74h] [rbp+Ch]

  v6 = a2;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  LODWORD(a5) = v7;
  if ( (v7 & 4) != 0 )
  {
    v9 = a5;
  }
  else
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCachedVariantState(
                      (volatile signed __int64 *)a1,
                      (__int64)&v12);
    a5 = v9;
    v7 = v9;
  }
  if ( a3 )
    v10 = HIDWORD(v9);
  else
    LODWORD(v10) = 0;
  v13 = 0;
  v14 = 0;
  return wil::details::ReportVariantUsageToService(
           (char *)a1 + 8,
           0x10447E5u,
           (v7 >> 10) & 1,
           (v7 >> 11) & 1,
           (__int64)&v13,
           v6,
           a3,
           v10,
           2);
}
