/*
 * XREFs of RtlNotifyFeatureUsage @ 0x14058E070
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402528AC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x1404ED774 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1)
{
  return CmFcManagerNotifyFeatureUsage(a1, a1);
}
