/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14036C70C
 * Callers:
 *     EtwpTraceMessageVa @ 0x14025CDC0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x1405A5FE0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6488 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  else
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
}
