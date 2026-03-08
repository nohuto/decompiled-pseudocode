/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x1405AEDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCtSelfSubscribe @ 0x1409BF33C (RtlpCtSelfSubscribe.c)
 */

__int64 __fastcall RtlpRtlpCtSelfSubscribeCallback(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  if ( (a3 & 8) != 0 )
    return RtlpCtSelfSubscribe(a6);
  else
    return 0LL;
}
