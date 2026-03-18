/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x140881090
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252440 (KeSetCoalescableTimer.c)
 *     CcForEachPartition @ 0x140310BEC (CcForEachPartition.c)
 *     CcHasGlobalTelemetryChanged @ 0x1403D0A54 (CcHasGlobalTelemetryChanged.c)
 *     CcPostVolumeTelemetry @ 0x1403D0A70 (CcPostVolumeTelemetry.c)
 */

void CcTelemetryPeriodicTimerCallback()
{
  char HasGlobalTelemetryChanged; // di
  char v1; // cl

  if ( CcTelemetryGlobalData )
  {
    _InterlockedExchange(&dword_140C5FA78, 0);
    if ( _InterlockedIncrement(&dword_140C5FA70) == 1 && !_InterlockedCompareExchange(&dword_140C5FA74, 1, 0) )
    {
      ++qword_140C5F970;
      qword_140C5F978 += (unsigned int)CcNumberOfMappedVacbs;
      HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
      CcForEachPartition(
        (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcPartitionTelemetryCallback,
        0LL,
        v1,
        v1);
      CcPostVolumeTelemetry();
      if ( byte_140C5F961 || !HasGlobalTelemetryChanged )
        _InterlockedExchange(&dword_140C5FA74, 0);
      else
        KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C5FA80);
    }
    _InterlockedDecrement(&dword_140C5FA70);
  }
}
