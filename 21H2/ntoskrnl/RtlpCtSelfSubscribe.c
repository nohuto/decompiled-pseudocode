/*
 * XREFs of RtlpCtSelfSubscribe @ 0x1409197E0
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x14058EA60 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
