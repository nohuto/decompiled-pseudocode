/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabIdStability@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E6964
 * Callers:
 *     ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1802DB670 (-AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableS.c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1802DBBC0 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x1802EDAE0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097584 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabIdStability@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802DEEF8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabIdStability@@@details.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabIdStability>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabIdStability>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v7);
    v7 = v3;
  }
  BYTE4(v8) = 0;
  LODWORD(v8) = 1;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0xF54BD1u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)va,
           v5,
           3u);
}
