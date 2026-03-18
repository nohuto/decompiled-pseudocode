/*
 * XREFs of ShouldRunShared @ 0x1C0038570
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C006E560 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003869C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ShouldRunShared(int a1)
{
  __int64 v1; // rdx
  void *v2; // rcx
  int v4; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    if ( a1 <= 4 )
    {
      v1 = 24533020LL;
      v2 = &Feature_UserCritOpt__private_reporting;
      goto LABEL_14;
    }
    switch ( a1 )
    {
      case 5:
        v4 = 3;
        if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                             &Feature_UseSharedCreateDestroyWindowsHooks__private_reporting,
                             26492038LL,
                             0LL,
                             0LL,
                             2) )
        {
          if ( g_wil_details_pfnFeatureLoggingHook )
            g_wil_details_pfnFeatureLoggingHook(
              0x1943C86u,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
              0LL,
              1,
              (const enum wil_ReportingKind *)&v4,
              0LL,
              0,
              1uLL);
        }
        return 1;
      case 6:
        v1 = 26488667LL;
        v2 = &Feature_UseSharedCreateDestroyWinEventHooks__private_reporting;
        goto LABEL_14;
      case 7:
        v1 = 28853153LL;
        v2 = &Feature_UseSharedMsgFilter__private_reporting;
        goto LABEL_14;
      case 8:
        v1 = 31059856LL;
        v2 = &Feature_EnumDisplayMonitors_UseSharedLock__private_reporting;
LABEL_14:
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)v2,
          v1,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
          1,
          3);
        return 1;
    }
  }
  return 0;
}
