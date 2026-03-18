/*
 * XREFs of GreNamedEscape @ 0x1C02A5034
 * Callers:
 *     NtGdiExtEscape @ 0x1C00108F0 (NtGdiExtEscape.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     AtmDrvFontManagementRedirector @ 0x1C029D4D4 (AtmDrvFontManagementRedirector.c)
 */

__int64 __fastcall GreNamedEscape(const wchar_t *a1, int a2, int a3, int *a4, int a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-18h]

  if ( !_wcsicmp(a1, L"atmfd.dll") )
    return AtmDrvFontManagementRedirector(v10, v9, a2, a3, a4, a5, a6);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GdiEnableTestEscapeAPI__private_reporting,
    0x1C342DEu,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_GdiEnableTestEscapeAPI_logged_traits,
    0,
    v12);
  return 0LL;
}
