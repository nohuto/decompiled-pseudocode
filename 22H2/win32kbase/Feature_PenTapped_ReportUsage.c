/*
 * XREFs of Feature_PenTapped_ReportUsage @ 0x1C00CCB38
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0180D8C (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114434 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 Feature_PenTapped_ReportUsage()
{
  return wil_details_FeatureReporting_ReportUsageToService(&Feature_PenTapped__private_descriptor, 1LL, 2LL);
}
