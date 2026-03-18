/*
 * XREFs of WmiTraceMessageVa @ 0x140460660
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x14022A8D0 (EtwpTraceMessageVa.c)
 */

__int64 __fastcall WmiTraceMessageVa(unsigned __int64 a1, __int64 a2, __int128 *a3, unsigned __int16 a4, __int64 a5)
{
  return EtwpTraceMessageVa(a1, a2, a3, a4, a5, 0);
}
