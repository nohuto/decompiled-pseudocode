/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180056ED8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056DBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOn.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180057138 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@deta_ea_180057138.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCurrentFeatureEnabledState(
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
    v5 = v2(26769179LL, 0LL);
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
  if ( (v7 & 0x40) != 0
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl) )
  {
    v3 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
