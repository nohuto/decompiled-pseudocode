/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180284C44
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802844E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@wil@@@details@wil@@SA_NXZ @ 0x180284F40 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180285A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edi
  int v5; // edx
  unsigned int v6; // r8d
  char v7; // al
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v4 = 1;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(7923987LL, 1LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  v6 = v5 & 0xFFFFFF3F;
  v7 = v5;
  v8 = (unsigned __int8)v5 & 0x80;
  v9 = 8 * (v8 | (4 * (v7 & 0x40 | (4 * (v6 & 3)))));
  if ( v6 )
  {
    v10 = 0;
    if ( v6 == 2 )
      v10 = 64;
  }
  else
  {
    v10 = 64;
  }
  v11 = v9 | v10;
  *(_DWORD *)a2 = v11;
  if ( (v11 & 0x40) == 0
    || (LOBYTE(v8) = 1,
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetImpl'::`2'::impl,
          v8,
          0LL),
        !(unsigned __int8)wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>>::IsEnabled()) )
  {
    v4 = 0;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v4;
  return result;
}
