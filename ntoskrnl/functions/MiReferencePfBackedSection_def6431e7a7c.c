_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 *v1; // r14
  _QWORD *v2; // r12
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 *v22; // rax
  unsigned __int8 v23; // al
  bool v24; // cf
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r9
  int v27; // eax
  _DWORD *v28; // r8

  v1 = 0LL;
  v2 = 0LL;
  while ( 2 )
  {
    v4 = ExAcquireSpinLockShared(&dword_140C653B8);
    v5 = (_QWORD *)qword_140C653B0;
    v6 = v4;
    while ( v5 )
    {
      v7 = 0LL;
      v8 = v5[3] & 7LL;
      if ( v8 > 4 )
        goto LABEL_16;
      if ( (_DWORD)v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( !v10 )
          {
            v13 = *(v5 - 7) + 128LL;
            v12 = *(_QWORD *)(*(v5 - 7) + 136LL);
            do
            {
              v14 = *(unsigned int *)(v13 + 44);
              v13 = *(_QWORD *)(v13 + 16);
              v7 += v14;
            }
            while ( v13 );
            goto LABEL_17;
          }
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
            {
LABEL_16:
              v12 = 0LL;
              goto LABEL_17;
            }
            v12 = v5[4];
            v7 = v5[5];
          }
          else
          {
            v12 = v5[6];
            v7 = v5[4];
          }
        }
        else
        {
          v12 = *(v5 - 6);
          v7 = *((unsigned int *)v5 - 3);
        }
      }
      else
      {
        v12 = *(v5 - 14);
        v7 = *((unsigned int *)v5 - 19);
      }
LABEL_17:
      if ( a1 >= v12 )
      {
        if ( a1 < v12 + 8 * v7 )
          break;
        v5 = (_QWORD *)v5[1];
      }
      else
      {
        v5 = (_QWORD *)*v5;
      }
    }
    v15 = 0LL;
    if ( v5 && (v5[3] & 7) == 1 )
    {
      v16 = v5 - 7;
      v15 = *(v5 - 7);
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140C653B8);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v21 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v6);
        continue;
      }
      if ( (*(_DWORD *)(v15 + 56) & 3) == 0 )
      {
        v22 = MiBuildWakeList(v15, 4);
        ++*(_DWORD *)(v15 + 76);
        v1 = v22;
        MiRemoveUnusedSegment(v15);
        v2 = v16;
      }
    }
    break;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C653B8);
  if ( v15 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
    if ( KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu )
      {
        v24 = v23 < 2u;
        goto LABEL_46;
      }
    }
  }
  else if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v6 <= 0xFu )
    {
      v24 = v25 < 2u;
LABEL_46:
      if ( !v24 )
      {
        v26 = KeGetCurrentPrcb();
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v28 = v26->SchedulerAssist;
        v21 = (v27 & v28[5]) == 0;
        v28[5] &= v27;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)v26);
      }
    }
  }
  __writecr8(v6);
  if ( v1 )
    MiReleaseControlAreaWaiters(v1);
  return v2;
}
