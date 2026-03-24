/*
 * XREFs of RtlpCtSelfSubscribe @ 0x140919680
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x14058E830 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
