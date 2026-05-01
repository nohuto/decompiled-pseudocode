/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180359CA8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180359878 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@wil@@@details@wil@@SA_NXZ @ 0x180284F40 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180285A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAltTabView>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v4 = 1;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(7923995LL, 1LL);
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
  if ( (v7 & 0x40) == 0
    || (wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetImpl'::`2'::impl,
          1u,
          0),
        !wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>>::IsEnabled()) )
  {
    v4 = 0;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v4;
  return result;
}
