__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6,
        char *a7)
{
  int v7; // ebp
  char v10; // r10
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // r15
  signed __int16 *v14; // rdi
  unsigned int v15; // r12d
  int v16; // ebx
  signed __int16 *v17; // r13
  signed __int16 v18; // ax
  __int64 v19; // r8
  volatile LONG *v20; // r14
  unsigned __int8 v21; // bl
  struct _KTHREAD *CurrentThread; // rcx
  bool v24; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // edx
  signed __int16 v29; // tt
  __int64 v30; // [rsp+68h] [rbp+10h]
  char v31; // [rsp+88h] [rbp+30h]

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 44);
  v12 = a3 >> v11;
  v31 = v10;
  v13 = 2 * v12;
  v14 = (signed __int16 *)(2 * v12 + a2 + *(unsigned __int16 *)(a2 + 46));
  _m_prefetchw(v14);
  LODWORD(v30) = 0;
  v15 = -1;
  v16 = 0;
  if ( v14 >= &v14[((a4 + a3 - 1) >> v11) - (unsigned int)v12 + 1] )
    goto LABEL_16;
  v17 = &v14[((a4 + a3 - 1) >> v11) - (unsigned int)v12 + 1];
  do
  {
    while ( 2 )
    {
      v18 = *v14;
      while ( v18 > 0 )
      {
        v29 = v18;
        v18 = _InterlockedCompareExchange16(v14, v18 + 1, v18);
        if ( v29 == v18 )
        {
          LODWORD(v19) = v30;
          goto LABEL_11;
        }
      }
      if ( !v7 )
      {
        v7 = 1;
        v10 = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned __int8 *)(a1 + 57));
        v31 = v10;
        continue;
      }
      break;
    }
    if ( v18 )
    {
      ++v16;
      v19 = v13 >> 1;
      v30 = v13 >> 1;
      if ( v15 == -1 )
        v15 = v13 >> 1;
    }
    else
    {
      LODWORD(v19) = v30;
      --v16;
    }
    *v14 = v18 + 1;
LABEL_11:
    ++v14;
    v13 += 2LL;
  }
  while ( v14 < v17 );
  if ( v16 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
      (v16 << *(_BYTE *)(a2 + 44)) / 4096);
  if ( v15 == -1 )
  {
LABEL_16:
    if ( v7 )
    {
      v20 = (volatile LONG *)(a2 + 24);
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v20);
        if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
        {
          v21 = v31;
          if ( (unsigned __int8)v31 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (v31 + 1));
            v24 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v21 = v31;
        }
        __writecr8(v21);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v20);
        KeAbPostRelease((ULONG_PTR)v20);
        CurrentThread = KeGetCurrentThread();
        v24 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v24
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
  }
  else
  {
    *a7 = v10;
    *a5 = v19 - v15 + 1;
  }
  return v15;
}
