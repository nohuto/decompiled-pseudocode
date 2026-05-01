/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804C4308
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804C4120 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804C5A28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEA.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax
  int v3; // ebx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(21892848LL, 0LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  v6 = 0;
  if ( (v5 & 0xFFFFFF3F) == 2 )
    v6 = 64;
  v7 = v6 | (8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3))))));
  *(_DWORD *)a2 = v7;
  if ( (v7 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetImpl'::`2'::impl);
    v7 = *(_DWORD *)a2;
    v3 = 1;
  }
  result = a2;
  *(_DWORD *)a2 = v3 | v7 & 0xFFFFFFFE;
  return result;
}
