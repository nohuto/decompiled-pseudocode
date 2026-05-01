/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800D3BA0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D3AD0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssis.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A9850 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@wil@@QEAAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v3; // edi
  int v5; // edx
  __int64 v6; // r8
  char v7; // al
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(49467103LL, 3LL);
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
  if ( (_DWORD)v6 )
  {
    v10 = 0;
    if ( (_DWORD)v6 == 2 )
      v10 = 64;
  }
  else
  {
    v10 = 64;
  }
  v11 = v10 | v9;
  *(_DWORD *)a2 = v11;
  if ( (v11 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxSettingTest>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_UxSettingTest>::GetImpl'::`2'::impl,
      v8,
      v6);
    v3 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
