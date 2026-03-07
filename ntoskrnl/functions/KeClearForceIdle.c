void __fastcall KeClearForceIdle(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleDisabled )
    goto LABEL_16;
  switch ( KiForceIdleState )
  {
    case 1:
      KiSetForceIdleState(0LL);
      KeRemoveQueueDpcEx((__int64)&KiForceIdleStartDpc, 0);
      goto LABEL_15;
    case 2:
      KiSetForceIdleState(0LL);
      goto LABEL_15;
    case 3:
      if ( !KiForceIdleStartTime )
        break;
LABEL_15:
      KiForceIdleStartTime = 0LL;
      break;
    case 4:
      LOBYTE(a2) = 1;
      KiResetForceIdle(3LL, a2);
      break;
  }
LABEL_16:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v4 = *SchedulerAssist;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
