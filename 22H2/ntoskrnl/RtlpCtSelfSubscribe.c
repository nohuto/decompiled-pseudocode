/*
 * XREFs of RtlpCtSelfSubscribe @ 0x1409196D0
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x14058E770 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
