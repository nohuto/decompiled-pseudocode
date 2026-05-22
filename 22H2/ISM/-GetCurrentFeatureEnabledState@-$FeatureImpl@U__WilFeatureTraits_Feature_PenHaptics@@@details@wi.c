/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PenHaptics@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180047E50
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PenHaptics@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180047D78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PenHaptics@@@details@wil.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PenIdentity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180020874 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PenIdentity@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003F1AC (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenHaptics>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // ebx
  unsigned int v7; // r9d
  int v8; // edx
  int v9; // eax
  int v10; // edx
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xF48866, 0LL, a3, a4);
  v6 = 0;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  *a2 = 0LL;
  v8 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x40) != 0 ? 0x800 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x400
                                                                                           : 0);
  v9 = 0;
  if ( v7 == 2 )
    v9 = 64;
  v10 = v9 | v8;
  *(_DWORD *)a2 = v10;
  if ( (v10 & 0x40) != 0 )
  {
    v6 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenIdentity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::GetImpl'::`2'::impl,
      1u,
      0);
    v10 = *(_DWORD *)a2;
  }
  result = a2;
  *(_DWORD *)a2 = v6 | v10 & 0xFFFFFFFE;
  return result;
}
