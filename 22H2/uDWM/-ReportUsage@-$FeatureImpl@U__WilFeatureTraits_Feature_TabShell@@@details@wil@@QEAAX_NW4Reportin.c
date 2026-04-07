/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000FEB4
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ED30 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18000FC60 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18001618C (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004D3C8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A850 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004DB58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055D40 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned int v5; // r8d
  int v6; // esi
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int16 v9; // [rsp+54h] [rbp+Ch]
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState(
                       a1,
                       (__int64 *)va);
    v5 = v10;
  }
  LODWORD(v10) = 1;
  BYTE4(v10) = 0;
  v9 = WORD2(v10);
  v8 = 1;
  return wil::details::ReportUsageToService(a1 + 2, 10727725LL, (v5 >> 10) & 1, (v5 >> 11) & 1, &v8, v6, v3);
}
