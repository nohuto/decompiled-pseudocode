void PoExecutePerfCheck()
{
  signed __int64 v0; // rbx
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  volatile signed __int32 *SchedulerAssist; // rcx
  signed __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v6; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int16 v9; // [rsp+40h] [rbp-8h]

  v0 = PpmCheckLastEffectiveExecutionTime;
  if ( PpmCheckLastEffectiveExecutionTime )
  {
    v1 = (unsigned int)KeTimeIncrement;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
      v1 = PpmCheckPeriod;
    if ( v1 + PpmCheckLastEffectiveExecutionTime <= MEMORY[0xFFFFF78000000008] )
    {
      _disable();
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x200000u);
      KxAcquireSpinLock(&PpmCheckExecutionLock);
      if ( PpmCheckLastActualExecutionTime + (v1 >> 1) <= v2 )
      {
        v4 = v2;
        if ( v0 != 1 && v0 + (unsigned int)KeMaximumIncrement + v1 > v2 )
          v4 = v1 + v0;
        if ( v0 == _InterlockedCompareExchange64(&PpmCheckLastEffectiveExecutionTime, v4, v0) )
        {
          PpmCheckLastActualExecutionTime = v2;
          KiInsertQueueDpc((ULONG_PTR)&PpmCheckStartDpc, 0);
        }
      }
      KxReleaseSpinLock(&PpmCheckExecutionLock);
      if ( (v9 & 0x200) != 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( v6 )
        {
          _m_prefetchw(v6);
          v7 = *v6;
          do
          {
            v8 = v7;
            v7 = _InterlockedCompareExchange(v6, v7 & 0xFFDFFFFF, v7);
          }
          while ( v8 != v7 );
          if ( (v7 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
      }
    }
  }
}
