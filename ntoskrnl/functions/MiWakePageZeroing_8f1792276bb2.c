unsigned __int64 __fastcall MiWakePageZeroing(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  _BYTE *v9; // rbx
  unsigned __int64 v10; // rax
  KIRQL v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  result = *(unsigned int *)(a1 + 16480);
  if ( !(_DWORD)result )
  {
    v5 = 0LL;
    v6 = 64LL;
    if ( a2 )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 0x20) != 0 )
        return result;
      if ( (a3 & 1) == 0 )
      {
        v6 = 1024LL;
        v5 = 0x100000LL;
      }
      v7 = a2;
      v8 = a2 + 25408;
    }
    else
    {
      result = (unsigned __int16)KeNumberNodes;
      v7 = *(_QWORD *)(a1 + 16);
      v8 = v7 + 25408LL * (unsigned __int16)KeNumberNodes;
    }
    if ( v7 < v8 )
    {
      v9 = (_BYTE *)(v7 + 23176);
      do
      {
        if ( !*v9 )
        {
          v10 = MiNodeLargeFreeZeroPages((_QWORD *)v9 - 2897, 4u, 1);
          if ( !a2 )
            v10 += *((_QWORD *)v9 - 52);
          if ( v10 >= v6 && (!v5 || MiNodeLargeFreeZeroPages((_QWORD *)v9 - 2897, 4u, 0) < v5) )
          {
            v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v9 - 4);
            v12 = *((_QWORD *)v9 - 3);
            v13 = v11;
            if ( v12 && !*v9 )
            {
              *v9 = 1;
              MiWakeZeroingThreads(v12, a3);
            }
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9 - 4);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
                v18 = (v17 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v17;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v13);
          }
        }
        v9 += 25408;
        result = (unsigned __int64)(v9 - 23176);
      }
      while ( (unsigned __int64)(v9 - 23176) < v8 );
    }
  }
  return result;
}
