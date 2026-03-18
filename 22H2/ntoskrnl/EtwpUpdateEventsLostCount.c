/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x140366014
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F30 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x1402340E0 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x140365E7C (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x14038C540 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1406021D0 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 240));
  result = *(unsigned int *)(a1 + 816);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 448) = 1;
  return result;
}
