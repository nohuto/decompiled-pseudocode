/*
 * XREFs of RtlpCtSelfSubscribe @ 0x1409BEB80
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1405EDDF0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
