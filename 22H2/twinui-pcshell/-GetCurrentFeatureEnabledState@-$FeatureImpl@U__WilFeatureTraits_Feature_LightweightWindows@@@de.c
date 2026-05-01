/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801DA6B8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801DA430 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@det.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationContent@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801DB908 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationContent@@@details@wil@@QEAAX_N.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax
  int v3; // edi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(16095113LL, 0LL);
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
  v7 = (8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))))) | v6;
  *(_DWORD *)a2 = v7;
  if ( (v7 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationContent>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_ApplicationContent>::GetImpl'::`2'::impl);
    v3 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
