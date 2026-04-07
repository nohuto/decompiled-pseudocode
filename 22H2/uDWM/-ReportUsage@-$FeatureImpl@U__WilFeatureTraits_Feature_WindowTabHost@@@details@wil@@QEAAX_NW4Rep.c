/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056B60
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x180056D0C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180057138 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@deta_ea_180057138.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055D40 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056518 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  unsigned int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int16 v9; // [rsp+54h] [rbp+Ch]
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::GetCachedFeatureEnabledState(
                       a1,
                       (signed __int32 *)va);
    v5 = v10;
  }
  LODWORD(v10) = 0;
  v8 = 0;
  BYTE4(v10) = 2;
  v9 = WORD2(v10);
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x181ED72u,
           (v5 >> 10) & 1,
           (v5 >> 11) & 1,
           (__int64)&v8,
           v6,
           v3);
}
