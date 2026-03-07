__int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  _QWORD *j; // rdi
  _QWORD **v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rcx
  _QWORD *i; // rax
  int v18; // ecx
  _QWORD *v19; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf

  v3 = *(int *)(a2 + 80);
  if ( (unsigned int)v3 > 3 && *(_BYTE *)(v3 + a1 + 16200) && *(_QWORD *)(a2 + 112) + *(_QWORD *)(a2 + 48) )
    *(_BYTE *)(*(int *)(a2 + 80) + a1 + 16200) = 0;
  MiSlabUpdateRecentFailure(a2 + 208);
  if ( (*(_DWORD *)(a2 + 88) & 1) != 0 )
  {
    if ( a3 )
      goto LABEL_13;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( !UnbiasedInterruptTime )
      UnbiasedInterruptTime = 1LL;
    if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a2 + 200)) >= 0x2FAF080
      && (!*(_QWORD *)(a2 + 56)
       || *(_QWORD *)(a2 + 48) + *(_QWORD *)(a2 + 112) >= (unsigned __int64)(*(_QWORD *)(a2 + 56) + 512LL)) )
    {
LABEL_13:
      MiPurgeSlabEntries(a2);
      v9 = 0LL;
      v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
      *(_DWORD *)(a2 + 88) &= ~1u;
      v11 = *(_QWORD *)(a2 + 8);
      v12 = v10;
      if ( (v11 & 1) != 0 )
      {
        if ( v11 == 1 )
        {
LABEL_24:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
          while ( 1 )
          {
            v19 = v9;
            if ( !v9 )
              break;
            v9 = (_QWORD *)*v9;
            MiFreeSlabEntry(a2, v19);
          }
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v24 = (v23 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v23;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v12);
          return 0LL;
        }
        j = (_QWORD *)(v11 ^ (a2 | 1));
      }
      else
      {
        j = *(_QWORD **)(a2 + 8);
      }
      while ( j )
      {
        v14 = (_QWORD **)j[1];
        v15 = j;
        v16 = j;
        if ( v14 )
        {
          j = (_QWORD *)j[1];
          for ( i = *v14; i; i = (_QWORD *)*i )
            j = i;
        }
        else
        {
          for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*j == v16 )
              break;
            v16 = j;
          }
        }
        if ( (*((_DWORD *)v15 + 35) & 1) == 0 )
        {
          v18 = *((_DWORD *)v15 + 33);
          if ( v18 == 512 )
          {
            MiRemoveSlabEntry(a1, a2, v15);
            *v15 = v9;
            v9 = v15;
          }
          else if ( (unsigned int)(v18 + *((_DWORD *)v15 + 34)) >= 0x200 )
          {
            *(_DWORD *)(a2 + 88) |= 1u;
          }
        }
      }
      goto LABEL_24;
    }
  }
  return 0LL;
}
