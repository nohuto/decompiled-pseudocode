signed __int64 __fastcall RtlpHpHeapExtendContext(__int128 *a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  signed __int64 v5; // r14
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int128 v11; // xmm0
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rcx
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  struct _KTHREAD *v21; // rcx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  int v24; // edx
  _DWORD *v25; // r9
  __int128 v26; // [rsp+30h] [rbp-58h] BYREF
  __int128 v27[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h] BYREF

  v28 = 0LL;
  v2 = (volatile LONG *)(a1 + 14);
  v29 = 0LL;
  RtlpHpAcquireReleaseLockExclusive((ULONG_PTR)(a1 + 14));
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)a1 + 29);
      if ( (unsigned __int64)(v5 + a2) > *((_QWORD *)a1 + 30) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 29, v5 + a2, v5) )
        return v5;
    }
    v7 = RtlpHpAcquireLockExclusive(v2, *(_DWORD *)a1 & 1);
    v8 = *((_QWORD *)a1 + 29);
    v9 = *((_QWORD *)a1 + 30);
    v10 = v7;
    if ( v8 + a2 > v9 )
      break;
LABEL_10:
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v16 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v2);
      KeAbPostRelease((ULONG_PTR)v2);
      CurrentThread = KeGetCurrentThread();
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v16
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  v11 = *a1;
  v12 = v8 - v9;
  v29 = *((_QWORD *)a1 + 30);
  v13 = (v12 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v28 = v13;
  if ( (*((_BYTE *)a1 + 30) & 1) != 0 )
  {
    v26 = v11;
    v14 = RtlpHpMetadataCommit((_DWORD)a1, v9, (v12 + a2 + 4095) & 0xFFFFF000, (unsigned int)&v26, 1);
  }
  else
  {
    v27[0] = v11;
    v14 = RtlpHpAllocVA((unsigned int)&v29, (unsigned int)&v28, 0, 4096, 4, (__int64)v27);
    v13 = v28;
  }
  if ( v14 >= 0 )
  {
    *((_QWORD *)a1 + 30) += v13;
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 17, v13 >> 12);
    goto LABEL_10;
  }
  v5 = 0LL;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v25 = v23->SchedulerAssist;
        v16 = (v24 & v25[5]) == 0;
        v25[5] &= v24;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    __writecr8(v10);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    v21 = KeGetCurrentThread();
    v16 = v21->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
      KiCheckForKernelApcDelivery();
  }
  return v5;
}
