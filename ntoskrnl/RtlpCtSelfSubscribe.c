/*
 * XREFs of RtlpCtSelfSubscribe @ 0x1409BF33C
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1405AEDD0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
