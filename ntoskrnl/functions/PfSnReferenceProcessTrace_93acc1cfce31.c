__int64 __fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // rdx
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned int v5; // edx
  signed __int64 *v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rax
  BOOLEAN v10; // bl
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  unsigned __int64 v20; // rdx

  _m_prefetchw((const void *)(a1 + 1536));
  v2 = *(_QWORD *)(a1 + 1536);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1536), v2 - 1, v2);
      if ( v2 == v9 )
        break;
      v2 = v9;
    }
    while ( (v9 & 0xF) != 0 );
  }
  v3 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v2 & 0xF;
    if ( v5 <= 1 )
    {
      if ( v5 )
      {
        v6 = (signed __int64 *)&v3[45];
        if ( ExAcquireRundownProtectionEx(v3 + 45, 0xFu) )
        {
          _m_prefetchw((const void *)(a1 + 1536));
          v7 = *(_QWORD *)(a1 + 1536);
          while ( (v7 & 0xF) == 0 && v3 == (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v8 = v7;
            v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1536), v7 + 15, v7);
            if ( v8 == v7 )
              return (__int64)v3;
          }
          _m_prefetchw(v6);
          v18 = *v6;
          if ( (*v6 & 1) != 0 )
          {
LABEL_28:
            v20 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v20 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v20 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v19 = _InterlockedCompareExchange64(v6, v18 - 30, v18);
              v17 = v18 == v19;
              v18 = v19;
              if ( v17 )
                break;
              if ( (v19 & 1) != 0 )
                goto LABEL_28;
            }
          }
        }
      }
      else
      {
        v10 = 1;
        v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C6A290);
        v12 = *(_QWORD *)(a1 + 1536) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v12 )
          v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 360));
        KxReleaseSpinLock((volatile signed __int64 *)&qword_140C6A290);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v11);
        return v12 & -(__int64)(v10 != 0);
      }
    }
  }
  return (__int64)v3;
}
