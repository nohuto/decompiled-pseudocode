/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800118E8
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_LoadIsGameModeEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800393D8 (-_LoadIsGameModeEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180011778 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        int a7)
{
  unsigned int v9; // ecx

  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v9 = a6 == 0 ? 4 : 0;
        goto LABEL_17;
      case 2:
        v9 = a6 != 0 ? 1 : 5;
        goto LABEL_17;
      case 3:
        v9 = a6 != 0 ? 2 : 6;
        goto LABEL_17;
      case 4:
        v9 = a6 != 0 ? 3 : 7;
        goto LABEL_17;
      case 5:
        v9 = a6 != 0 ? 8 : 10;
        goto LABEL_17;
      case 6:
        v9 = a6 != 0 ? 9 : 11;
        goto LABEL_17;
    }
    if ( (unsigned __int8)(a7 - 100) <= 0x31u )
    {
      v9 = (unsigned __int8)(a7 - 100) + (a6 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v9 = 255;
LABEL_17:
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, a3, a4, v9, 0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
  }
}
