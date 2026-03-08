/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1405A5220
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x140614CE8 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1)
{
  return CmFcManagerNotifyFeatureUsage(a1, a1);
}
