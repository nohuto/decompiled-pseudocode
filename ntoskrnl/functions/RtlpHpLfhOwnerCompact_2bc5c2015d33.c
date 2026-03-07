void __fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD **v6; // rdi
  volatile LONG *v7; // rbx
  unsigned __int8 v8; // al
  _QWORD *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax

  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v11 = 0LL;
    v12 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v11 + *(_QWORD *)(a2 + 96)), a3);
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  v6 = (_QWORD **)(a2 + 24);
  if ( *v6 != v6 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v7 = (volatile LONG *)(a2 + 16);
    v8 = RtlpHpAcquireLockShared(v7, *(unsigned __int8 *)(a1 + 57));
    v9 = *v6;
    v10 = v8;
    while ( v9 != v6 )
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v9, -1, 1, a3);
      v9 = (_QWORD *)*v9;
    }
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v7);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v14 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v7);
      KeAbPostRelease((ULONG_PTR)v7);
      CurrentThread = KeGetCurrentThread();
      v14 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v14
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
