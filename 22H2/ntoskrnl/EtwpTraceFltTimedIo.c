/*
 * XREFs of EtwpTraceFltTimedIo @ 0x140467AD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTimedEvent @ 0x140338BB0 (EtwTraceTimedEvent.c)
 */

void __fastcall EtwpTraceFltTimedIo(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  EtwTraceTimedEvent(a4, a3, a1, a2, 0x401803u, a5);
}
