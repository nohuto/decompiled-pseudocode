__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(int *CurrentIrql, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int *v4; // rsi
  int i; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  _DWORD *v11; // r9
  __int64 v12; // rdx

  v2 = 0;
  v4 = CurrentIrql;
  do
  {
    _m_prefetchw(v4);
    for ( i = *v4; *v4 < 0; i = *v4 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v4, 0x40000000u);
      if ( a2 != 0xFF )
      {
        if ( KiIrqlFlags )
        {
          CurrentIrql = (int *)KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)CurrentIrql <= 0xFu
            && a2 <= 0xFu
            && (unsigned __int8)CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentIrql = (int *)((unsigned int)a2 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)(-1LL << (a2 + 1));
            v10 = (v9 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v9;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(a2);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
      {
        HvlNotifyLongSpinWait(v2);
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
            v11 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( a2 == 2 )
            {
              LODWORD(v12) = 4;
            }
            else
            {
              CurrentIrql = (int *)((unsigned int)a2 + 1);
              v12 = (-1LL << (a2 + 1)) & 4;
            }
            v11[5] |= v12;
          }
        }
      }
    }
  }
  while ( _interlockedbittestandset(v4, 0x1Fu) );
  return v2;
}
