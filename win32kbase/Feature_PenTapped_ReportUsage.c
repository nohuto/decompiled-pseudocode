/*
 * XREFs of Feature_PenTapped_ReportUsage @ 0x1C00DF604
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C01DF7B8 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 Feature_PenTapped_ReportUsage()
{
  return wil_details_FeatureReporting_ReportUsageToService(&Feature_PenTapped__private_descriptor, 1LL, 2LL);
}
