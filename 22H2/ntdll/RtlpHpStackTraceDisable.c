/*
 * XREFs of RtlpHpStackTraceDisable @ 0x180108EF4
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180108E80 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007529C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18011837C (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016D568 & 1) != 0 )
  {
    dword_18016D568 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_18016D570);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
