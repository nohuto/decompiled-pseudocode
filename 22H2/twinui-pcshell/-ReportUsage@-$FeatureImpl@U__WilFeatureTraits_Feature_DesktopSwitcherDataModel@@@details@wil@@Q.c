/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028541C
 * Callers:
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@wil@@@details@wil@@SA_NXZ @ 0x180284D90 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802838F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  volatile unsigned __int32 v3; // r8d
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Ch]
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v3 = v8;
  }
  BYTE4(v8) = 3;
  v6 = 4;
  v7 = WORD2(v8);
  LODWORD(v8) = 4;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x8C9E5Au,
           (v3 >> 10) & 1,
           (v3 >> 11) & 1,
           (__int64)&v6,
           1u,
           0);
}
