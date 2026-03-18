/*
 * XREFs of WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00B2AB0
 * Callers:
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     WindowMargins::_anonymous_namespace_::CalculateWindowMargins @ 0x1C00B2B24 (WindowMargins--_anonymous_namespace_--CalculateWindowMargins.c)
 *     WindowMargins::_anonymous_namespace_::GetDpiForWindowMargin @ 0x1C00B2CBC (WindowMargins--_anonymous_namespace_--GetDpiForWindowMargin.c)
 */

__int64 __fastcall WindowMargins::_anonymous_namespace_::GetWindowMargins(
        struct tagWND *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int DpiForWindowMargin; // eax
  int v7; // [rsp+30h] [rbp-18h]

  if ( !IsTopLevelWindow((__int64)a1) )
    return 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_UseWin32kMargins__private_reporting,
    0x1B65B59u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v7);
  DpiForWindowMargin = WindowMargins::_anonymous_namespace_::GetDpiForWindowMargin(a1, a3);
  return WindowMargins::_anonymous_namespace_::CalculateWindowMargins(a1, DpiForWindowMargin);
}
