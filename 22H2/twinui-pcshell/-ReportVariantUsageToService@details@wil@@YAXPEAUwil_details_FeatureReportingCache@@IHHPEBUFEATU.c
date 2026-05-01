/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x1800996F0
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_K@Z @ 0x18007FB70 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wi.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX_NW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_K@Z @ 0x1800B7730 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@QEAAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@3@_K@Z @ 0x1802F2934 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@de.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800975F8 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall wil::details::ReportVariantUsageToService(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned int a8,
        int a9)
{
  _UNKNOWN **result; // rax
  unsigned int v12; // ecx
  int v13; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  switch ( a9 )
  {
    case 0:
      return result;
    case 1:
      v13 = a6 != 0 ? 448 : 384;
      break;
    case 2:
      v13 = a6 != 0 ? 320 : 256;
      break;
    default:
      v12 = 255;
      goto LABEL_8;
  }
  v12 = a7 + v13;
LABEL_8:
  result = (_UNKNOWN **)wil::details::ReportUsageToServiceDirect(a1, a2, a3, a4, v12, a8);
  if ( (_DWORD)result )
  {
    result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, 0LL, &a9, a7, 1LL);
  }
  return result;
}
