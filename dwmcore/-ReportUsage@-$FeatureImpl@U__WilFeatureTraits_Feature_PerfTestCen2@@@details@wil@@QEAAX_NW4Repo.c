/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115814
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801165EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAA_.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800392F4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011225C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@w.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PerfTestCen2>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  signed __int32 v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PerfTestCen2>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v10 = 2;
  v9 = 0;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x2E30985u,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           (__int64)&v9,
           v6,
           0);
}
