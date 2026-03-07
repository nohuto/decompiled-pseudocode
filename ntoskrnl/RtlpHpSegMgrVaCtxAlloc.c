unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD **v4; // r15
  _QWORD **v5; // rsi
  volatile LONG *v8; // rdi
  unsigned __int8 v9; // al
  _QWORD *v10; // r14
  unsigned __int64 v11; // rbp
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  struct _KTHREAD *v17; // rcx
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // edx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // edx
  unsigned int v28; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  v4 = (_QWORD **)(a1 + 120);
  v5 = (_QWORD **)(a1 + 128);
  if ( *(_QWORD *)(a1 + 120) || *v5 )
  {
    v8 = (volatile LONG *)(a1 + 112);
    v9 = RtlpHpAcquireLockExclusive(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
    v10 = *v5;
    v11 = v9;
    if ( *v5 || (a3 & 2) == 0 && (v10 = *v4, v5 = v4, *v4) )
    {
      v12 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward(&v13, v12);
      v14 = v12 ^ (1 << v13);
      v28 = v13;
      *((_WORD *)v10 - 3) = v14;
      if ( !(_WORD)v14 )
      {
        if ( *v5 )
          *v5 = (_QWORD *)**v5;
        *v10 = 0LL;
      }
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v18 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v8);
        KeAbPostRelease((ULONG_PTR)v8);
        CurrentThread = KeGetCurrentThread();
        v18 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v18
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v15 = qword_140C71660[6 * *((unsigned __int8 *)v10 - 15)];
      return (((unsigned __int64)v10 - *(_QWORD *)(v15 + 40) - 16) >> *(_DWORD *)(v15 + 24) << 20)
           + *(_QWORD *)(v15 + 8)
           + a2 * v28;
    }
    else if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags )
      {
        v19 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v18 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v8);
      KeAbPostRelease((ULONG_PTR)v8);
      v17 = KeGetCurrentThread();
      v18 = v17->SpecialApcDisable++ == -1;
      if ( v18 && ($C71981A45BEB2B45F82C232A7085991E *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
        KiCheckForKernelApcDelivery();
    }
  }
  return v3;
}
