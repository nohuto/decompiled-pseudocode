/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x1402F0984
 * Callers:
 *     KeClockInterruptNotify @ 0x140221600 (KeClockInterruptNotify.c)
 *     KiCheckForTimerExpiration @ 0x1402247B0 (KiCheckForTimerExpiration.c)
 *     KiSetClockInterval @ 0x1402F045C (KiSetClockInterval.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405208D4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTickRate @ 0x1402F0A50 (KiSetClockTickRate.c)
 *     KiGetClockIntervalOneShot @ 0x1402F10CC (KiGetClockIntervalOneShot.c)
 */

__int64 __fastcall KiSetClockIntervalToMinimumRequested(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbp
  bool v4; // di
  unsigned int v5; // ebx
  char v6; // si
  __int64 InterruptTimePrecise; // rax
  unsigned int ClockIntervalOneShot; // eax
  __int64 result; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]
  LARGE_INTEGER v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_140CEC388 & 1) != 0 )
  {
    if ( qword_140CEC388 == 1 )
      v2 = 0LL;
    else
      v2 = qword_140CEC388 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v2 = qword_140CEC388;
  }
  v3 = KiClockOwnerOneShotRequest;
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 28);
  v6 = 0;
  if ( KiClockOwnerOneShotRequest )
  {
    _disable();
    v4 = (v10 & 0x200) != 0;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v11);
    ClockIntervalOneShot = KiGetClockIntervalOneShot(v3, InterruptTimePrecise);
    if ( ClockIntervalOneShot < v5 )
    {
      v5 = ClockIntervalOneShot;
      v6 = 1;
    }
  }
  if ( KiClockOwnerOneShotRequestState != 2 && (v5 == KiLastRequestedTimeIncrement || v5 == KeTimeIncrement) )
  {
    result = (unsigned int)KeTimeIncrement;
  }
  else
  {
    LOBYTE(a2) = v6;
    result = KiSetClockTickRate(v5, a2);
  }
  if ( v4 )
    _enable();
  return result;
}
