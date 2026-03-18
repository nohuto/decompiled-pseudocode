/*
 * XREFs of ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C01B7060
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C01B7538 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

void Feature_PenTapped_ReportUsage()
{
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_PenTapped__private_reporting,
    14300127LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
    1,
    2);
}
