/*
 * XREFs of _anonymous_namespace_::StrictIAMForegroundCheck @ 0x1C01000B4
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

char anonymous_namespace_::StrictIAMForegroundCheck()
{
  int v1; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_StrictIAMForegroundCheck__private_reporting,
    0x1BFEEBFu,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v1);
  return 0;
}
