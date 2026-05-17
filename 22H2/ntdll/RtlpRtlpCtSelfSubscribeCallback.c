/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x1801024E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x18009D6A0 (ZwSetEvent.c)
 */

__int64 RtlpRtlpCtSelfSubscribeCallback()
{
  ZwSetEvent();
  return 0LL;
}
