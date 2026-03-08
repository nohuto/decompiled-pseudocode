/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140872D84
 * Callers:
 *     CcSetValidData @ 0x140209160 (CcSetValidData.c)
 *     CcAsyncCopyRead @ 0x140216AA0 (CcAsyncCopyRead.c)
 *     CcCopyWriteEx @ 0x14021C0A0 (CcCopyWriteEx.c)
 *     CcCopyReadEx @ 0x14021E070 (CcCopyReadEx.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     CcInitializeTelemetry @ 0x140B31E14 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140C5F614, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C5F620);
  return v1;
}
