/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1405AA130
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x1406171A4 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1)
{
  return CmFcManagerNotifyFeatureUsage(a1, a1);
}
