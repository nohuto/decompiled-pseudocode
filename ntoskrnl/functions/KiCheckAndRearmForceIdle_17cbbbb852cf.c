void KiCheckAndRearmForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  int v4; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v5; // [rsp+38h] [rbp+10h] BYREF

  v5.QuadPart = 0LL;
  if ( KiForceIdleDisabled )
    return;
  _disable();
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v4);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx((__int64)&KiForceIdleStartDpc, 0);
    KiSetForceIdleState(2LL);
LABEL_9:
    KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec + RtlGetInterruptTimePrecise(&v5);
    goto LABEL_10;
  }
  if ( KiForceIdleState == 2 )
    goto LABEL_9;
LABEL_10:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v2 = *SchedulerAssist;
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(SchedulerAssist, v2 & 0xFFDFFFFF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
}
