/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00767A0
 * Callers:
 *     SetIconMetrics @ 0x1C00761C4 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00763E0 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0076530 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2)
{
  FastGetProfileIntFromID(a1, 23LL, a2);
  return 0LL;
}
