/*
 * XREFs of WheapFreeErrorRecord @ 0x140643F08
 * Callers:
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x140644030 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F60 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall WheapFreeErrorRecord(ULONG_PTR a1)
{
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  else
    return ExFreeHeapPool(a1);
}
