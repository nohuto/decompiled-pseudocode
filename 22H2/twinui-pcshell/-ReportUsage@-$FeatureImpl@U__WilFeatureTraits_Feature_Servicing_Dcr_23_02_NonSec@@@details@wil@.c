/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_02_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8F78
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_03_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A609C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_03_Non.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_02_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A4150 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_02_NonS.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_23_02_NonSec>::ReportUsage(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  unsigned int v3; // r8d
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v3 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v6 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_23_02_NonSec>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v3 = v6;
  }
  BYTE4(v7) = 3;
  LODWORD(v7) = 0;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x2AF2CA8u,
           (v3 >> 10) & 1,
           (v3 >> 11) & 1,
           (__int64)va,
           1u,
           0);
}
