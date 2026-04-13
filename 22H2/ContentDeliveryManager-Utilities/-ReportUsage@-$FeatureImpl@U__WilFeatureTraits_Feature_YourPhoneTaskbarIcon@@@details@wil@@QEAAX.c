/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017BD0
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000E360 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E454 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180018784 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@d.c)
 */

__int64 *wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  __int64 *result; // rax
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  result = (__int64 *)&retaddr;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    result = (__int64 *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState(
                          a1,
                          &v9);
    v9 = *result;
    v6 = v9;
  }
  LODWORD(v10) = 2;
  BYTE4(v10) = 3;
  if ( (_BYTE)v4 )
    return (__int64 *)wil::details::ReportUsageToService(
                        a1 + 2,
                        0xF81202u,
                        (v6 >> 10) & 1,
                        (v6 >> 11) & 1,
                        (__int64)va,
                        v7,
                        v4);
  return result;
}
