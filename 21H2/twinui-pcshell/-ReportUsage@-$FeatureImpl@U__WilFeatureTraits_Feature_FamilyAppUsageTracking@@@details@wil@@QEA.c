/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804C5A28
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804C4308 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingA.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097584 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804C3FD8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  volatile unsigned __int32 v3; // r8d
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v3 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v6 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v3 = v6;
  }
  BYTE4(v7) = 3;
  LODWORD(v7) = 0;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x135AED7u,
           (v3 >> 10) & 1,
           (v3 >> 11) & 1,
           (__int64)va,
           1u,
           0);
}
