/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabWin32@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180359A98
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabWin32@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803596D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabWin32@@@detail.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18035ABB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@QEAAX_NW4Re.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAltTabWin32>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v3; // ebx
  int v5; // edx
  int v6; // ecx

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(17826155LL, 1LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  if ( (v5 & 0xFFFFFF3F) == 2 )
    v3 = 64;
  v6 = v3 | (8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3))))));
  *(_DWORD *)a2 = v6;
  if ( (v6 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAltTabView>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::GetImpl'::`2'::impl,
      0LL,
      0LL);
    v6 = *(_DWORD *)a2;
  }
  *(_DWORD *)a2 = v6 & 0xFFFFFFFE;
  return a2;
}
