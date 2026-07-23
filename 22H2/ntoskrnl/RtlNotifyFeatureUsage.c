/*
 * XREFs of RtlNotifyFeatureUsage @ 0x14058E070
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402528AC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x1404ED774 (CmFcManagerNotifyFeatureUsage.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  return CmFcManagerNotifyFeatureUsage((__int64)FeatureUsageReport, (__int64)FeatureUsageReport);
}
