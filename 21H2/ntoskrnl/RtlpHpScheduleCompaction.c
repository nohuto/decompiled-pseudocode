/*
 * XREFs of RtlpHpScheduleCompaction @ 0x1403082E8
 * Callers:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140307730 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLfhVsDecommit @ 0x140307CE0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140307DD0 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     ExSetTimer @ 0x140280070 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
