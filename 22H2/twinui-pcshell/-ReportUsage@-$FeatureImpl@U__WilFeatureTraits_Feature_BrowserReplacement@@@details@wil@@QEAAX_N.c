/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180107E6C
 * Callers:
 *     ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180107D88 (-IsBrowserReplacementFeaturePresent@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180107678 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@det.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  unsigned int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v8);
    v5 = v8;
  }
  LODWORD(v9) = 0;
  BYTE4(v9) = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x142FEC4u,
           (v5 >> 10) & 1,
           (v5 >> 11) & 1,
           (__int64)va,
           v6,
           v3);
}
