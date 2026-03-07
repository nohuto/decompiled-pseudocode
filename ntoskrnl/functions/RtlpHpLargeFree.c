unsigned __int64 __fastcall RtlpHpLargeFree(__int128 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  char v4; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // rcx
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // edx
  __int128 v31; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp+38h] BYREF

  v33 = a2;
  v3 = 0LL;
  v32 = 0LL;
  v4 = a3;
  v6 = (unsigned __int8)RtlpHpLargeLockAcquire(a1, a3);
  v7 = *((_QWORD *)a1 + 9);
  if ( (a1[5] & 1) != 0 && v7 )
    v7 ^= (unsigned __int64)a1 + 72;
  while ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v33 >= v8 )
    {
      if ( v33 <= v8 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v7;
    }
    if ( (a1[5] & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  if ( v7 )
  {
    RtlRbRemoveNode((unsigned __int64 *)a1 + 9, v7);
    if ( (v4 & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 16);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v18 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v6);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a1 + 8);
        KeAbPostRelease((ULONG_PTR)(a1 + 4));
        CurrentThread = KeGetCurrentThread();
        v18 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v18
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(CurrentThread, v14, v15, v16);
        }
      }
    }
    v10 = *(_QWORD *)(v7 + 32);
    v11 = (unsigned __int8)v10 >> 2;
    v31 = *a1;
    v12 = (((v10 >> 12) + ((v10 >> 1) & 1)) << 12) - 1;
    v32 = (1LL << v11) - (((1LL << v11) - 1) & ((1LL << v11) + v12)) + v12;
    RtlpHpFreeVA(&v33, &v32, 0x8000, &v31);
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 12, -(*(_QWORD *)(v7 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 11, -(__int64)(v32 >> 12));
    v31 = *a1;
    RtlpHpMetadataFree(v7, &v31);
    return v32;
  }
  else
  {
    if ( (v4 & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 16);
        if ( KiIrqlFlags )
        {
          v27 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v18 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        __writecr8(v6);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a1 + 8);
        KeAbPostRelease((ULONG_PTR)(a1 + 4));
        v26 = KeGetCurrentThread();
        v18 = v26->SpecialApcDisable++ == -1;
        if ( v18 && ($C71981A45BEB2B45F82C232A7085991E *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
          KiCheckForKernelApcDelivery(v26, v23, v24, v25);
      }
    }
    RtlpLogHeapFailure(8, (_DWORD)a1, v33, 0, 0LL, 0LL);
  }
  return v3;
}
