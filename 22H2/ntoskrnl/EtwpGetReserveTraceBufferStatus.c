/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14036A548
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F30 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     EtwpLogSystemEventUnsafe @ 0x14038C540 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140467D22 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FF3C8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
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
