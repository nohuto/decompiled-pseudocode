/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_46969563@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A5598
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_46969563@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A3234 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_46969563@@@details@wil@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A9850 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@wil@@QEAAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_46969563>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v3; // edi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(46969563LL, 3LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    v6 = 0;
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v6 = 64;
  }
  else
  {
    v6 = 64;
  }
  v7 = v6 | (8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3))))));
  *(_DWORD *)a2 = v7;
  if ( (v7 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxSettingTest>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_UxSettingTest>::GetImpl'::`2'::impl);
    v3 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
