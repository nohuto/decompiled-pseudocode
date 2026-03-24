/*
 * XREFs of WheapFreeErrorRecord @ 0x1405BBAA8
 * Callers:
 *     WheaReportHwError @ 0x1405BB130 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBBD0 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x1407D35D0 (WheapEtwEnableCallback.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall WheapFreeErrorRecord(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (PSLIST_ENTRY)(unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  else
    return ExFreeHeapPool(a1, a2, a3, a4);
}
