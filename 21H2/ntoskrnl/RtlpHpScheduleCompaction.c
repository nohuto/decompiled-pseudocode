/*
 * XREFs of RtlpHpScheduleCompaction @ 0x140313038
 * Callers:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140312480 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLfhVsDecommit @ 0x140312A30 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140312B20 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
