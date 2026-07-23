/*
 * XREFs of WheapFreeErrorRecord @ 0x1405BBCD8
 * Callers:
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBE00 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x1407D3740 (WheapEtwEnableCallback.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall WheapFreeErrorRecord(ULONG_PTR a1)
{
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (PSLIST_ENTRY)(unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  else
    return ExFreeHeapPool(a1);
}
