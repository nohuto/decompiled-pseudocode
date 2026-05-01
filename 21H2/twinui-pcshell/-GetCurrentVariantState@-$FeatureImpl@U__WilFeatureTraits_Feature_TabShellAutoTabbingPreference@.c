/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802F24D0
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F2364 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004A614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007FD80 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCurrentVariantState(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  char FeatureVariant; // al
  unsigned int v5; // ecx
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = HIDWORD(a1);
  v7 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x10447E5, 0LL, (__int64)&v9, &v7, a3);
  v5 = v7;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)a2 = (v5 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    0);
  *(_DWORD *)(a2 + 4) = 0;
  result = a2;
  *(_DWORD *)a2 &= 0xFFFC0FFF;
  return result;
}
