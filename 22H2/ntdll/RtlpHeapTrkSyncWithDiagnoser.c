/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800FE858
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FE560 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800FE764 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18009D6A0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18009E030 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_18016DC08 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
