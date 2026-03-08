/*
 * XREFs of WheapGenerateETWEvents @ 0x140610F18
 * Callers:
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x14060EC70 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x14085D1A0 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x14037D730 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x14060E978 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x140610D80 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140610E00 (WheapGenerateETWErrorRecordLarge.c)
 */

char __fastcall WheapGenerateETWEvents(__int64 a1)
{
  char result; // al

  result = WheaIsCriticalState();
  if ( !result && (*(_DWORD *)(a1 + 104) & 0x100) == 0 )
  {
    WheapCompressErrorRecord(3, a1);
    if ( *(_DWORD *)(a1 + 20) <= 0xEFFBu )
      return WheapGenerateETWErrorRecord(a1);
    else
      return WheapGenerateETWErrorRecordLarge(a1);
  }
  return result;
}
