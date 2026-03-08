/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C010CE38
 * Callers:
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C010CA78 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C010CBC8 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2)
{
  FastGetProfileIntFromID(a1, 23LL, a2);
  return 0LL;
}
