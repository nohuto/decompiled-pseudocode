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
  NTSTATUS v0; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  if ( !TrkContext
    || (Handles[0] = *((HANDLE *)TrkContext + 1),
        Handles[1] = *((HANDLE *)TrkContext + 3),
        Timeout.QuadPart = -100000000LL,
        ZwSetEvent(*((HANDLE *)TrkContext + 2), 0LL),
        v0 = NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, &Timeout),
        v0 != 1) )
  {
    byte_18016DC08 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
