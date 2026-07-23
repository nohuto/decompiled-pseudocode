/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180108F48
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800F2C08 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x180108E80 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016D568 & 1) == 0 )
  {
    dword_18016D568 = 3;
    qword_18016D570 = 0LL;
    qword_18016D5A0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_18016D5A8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_18016D578 = 0LL;
    qword_18016D580 = 0LL;
    qword_18016D588 = 0LL;
    qword_18016D598 = 0LL;
    qword_18016D590 = 0LL;
    qword_18016D5B0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
