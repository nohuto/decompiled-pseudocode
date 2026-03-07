__int64 KiSetClockIntervalToMinimumRequested()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // esi
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 InterruptTimePrecise; // rax
  unsigned int v4; // r11d
  unsigned __int64 v5; // rbx
  unsigned int ClockIntervalOneShot; // r10d
  unsigned __int64 v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // rdx
  char v10; // dl
  char v11; // bp
  unsigned int v12; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int16 v18; // [rsp+30h] [rbp-8h]
  LARGE_INTEGER v19; // [rsp+40h] [rbp+8h] BYREF

  v19.QuadPart = 0LL;
  if ( (qword_140D0C178 & 1) != 0 )
  {
    if ( qword_140D0C178 == 1 )
      v0 = 0LL;
    else
      v0 = qword_140D0C178 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v0 = qword_140D0C178;
  }
  v1 = *(_DWORD *)(v0 + 28);
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
  v4 = -1;
  v5 = InterruptTimePrecise;
  ClockIntervalOneShot = -1;
  if ( KiClockOwnerOneShotRequest )
    ClockIntervalOneShot = KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, InterruptTimePrecise);
  v7 = KiClockOwnerOneShotCorrectiveRequest;
  if ( KiClockOwnerOneShotCorrectiveRequest > v5
    || KiClockOwnerOneShotRequestState == 2 && !KiClockOwnerOneShotCorrectiveRequest )
  {
    v8 = KePseudoHrTimeIncrement;
    v9 = KiLastPseudoHrTimerExpiration;
    if ( KiLastPseudoHrTimerExpiration + (unsigned __int64)(unsigned int)KePseudoHrTimeIncrement > KiLastNonHrTimerExpiration
                                                                                                 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement )
    {
      v9 = KiLastNonHrTimerExpiration;
      v8 = KeNonHrTimeIncrement;
    }
    v7 = v5 + v8 - (v5 - v9) % v8;
    v4 = KiGetClockIntervalOneShot(v7, v5);
  }
  v10 = 0;
  v11 = 0;
  if ( ClockIntervalOneShot > v1 || ClockIntervalOneShot > v4 )
  {
    if ( v4 >= v1 )
    {
      ClockIntervalOneShot = v1;
      KiClockOwnerOneShotCorrectiveRequest = v5;
    }
    else
    {
      v10 = 1;
      KiClockOwnerOneShotCorrectiveRequest = v7;
      v11 = 1;
      ClockIntervalOneShot = v4;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    v10 = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2
    && (ClockIntervalOneShot == KiLastRequestedTimeIncrement || ClockIntervalOneShot == KeTimeIncrement) )
  {
    v12 = KeTimeIncrement;
  }
  else
  {
    v12 = KiSetClockTickRate(ClockIntervalOneShot, v10);
  }
  if ( v11 )
    PoTraceSystemTimerResolutionKernel(v12, 1129271880, 1);
  if ( (v18 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      _m_prefetchw(v14);
      v15 = *v14;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(v14, v15 & 0xFFDFFFFF, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v12;
}
