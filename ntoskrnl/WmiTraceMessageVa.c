/*
 * XREFs of WmiTraceMessageVa @ 0x140460310
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x140205450 (EtwpTraceMessageVa.c)
 */

__int64 __fastcall WmiTraceMessageVa(unsigned __int64 a1, __int64 a2, LONG *a3, unsigned __int16 a4, __int64 a5)
{
  return EtwpTraceMessageVa(a1, a2, a3, a4, a5, 0);
}
