__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(unsigned __int64 CurrentIrql, unsigned __int8 a2)
{
  volatile signed __int32 *v3; // rsi
  unsigned int v4; // ebx
  signed __int32 v5; // eax
  signed __int32 v6; // edx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r9
  __int64 v13; // rdx

  v3 = (volatile signed __int32 *)CurrentIrql;
  v4 = 0;
  _m_prefetchw((const void *)CurrentIrql);
  v5 = *(_DWORD *)CurrentIrql;
  do
  {
    if ( v5 < 0 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedOr(v3, 0x40000000u);
        if ( a2 != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0
              && (unsigned __int8)CurrentIrql <= 0xFu
              && a2 <= 0xFu
              && (unsigned __int8)CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              CurrentIrql = (unsigned int)a2 + 1;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v10 = ~(unsigned __int16)(-1LL << (a2 + 1));
              v11 = (v10 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v10;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(a2);
        }
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
        if ( a2 != 0xFF )
        {
          a2 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && a2 <= 0xFu )
            {
              v12 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( a2 == 2 )
              {
                LODWORD(v13) = 4;
              }
              else
              {
                CurrentIrql = (unsigned int)a2 + 1;
                v13 = (-1LL << (a2 + 1)) & 4;
              }
              v12[5] |= v13;
            }
          }
        }
        v5 = *v3;
      }
      while ( *(int *)v3 < 0 );
    }
    CurrentIrql = (unsigned int)(v5 + 1);
    v6 = v5;
    LODWORD(CurrentIrql) = CurrentIrql & 0xBFFFFFFF;
    v5 = _InterlockedCompareExchange(v3, CurrentIrql, v5);
  }
  while ( v5 != v6 );
  return v4;
}
