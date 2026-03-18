/*
 * XREFs of RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404115DC
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedFeatureUsageDataBuffer(void *a1, size_t a2)
{
  return memset(a1, 0, a2);
}
