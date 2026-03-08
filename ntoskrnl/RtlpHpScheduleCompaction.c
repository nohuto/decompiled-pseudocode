/*
 * XREFs of RtlpHpScheduleCompaction @ 0x14030A7E4
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x14024DF10 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14030A210 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLfhVsDecommit @ 0x14030A650 (RtlpHpSegLfhVsDecommit.c)
 * Callees:
 *     ExSetTimer @ 0x1402042A0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpScheduleCompaction(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  ULONG_PTR v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( ExpHpGCInitialized )
  {
    if ( BYTE1(*a1) == 1 )
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledNonPaged, 1, 0);
      v3 = ExpHpGCTimerNonPaged;
    }
    else
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledPaged, 1, 0);
      v3 = ExpHpGCTimerPaged;
    }
    if ( !v2 )
    {
      v5[1] = -1LL;
      v5[0] = 0LL;
      ExSetTimer(v3, -10000000LL, 0LL, (__int64)v5);
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
