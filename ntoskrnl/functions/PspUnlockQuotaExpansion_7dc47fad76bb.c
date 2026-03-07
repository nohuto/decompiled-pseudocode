int __fastcall PspUnlockQuotaExpansion(__int64 a1, unsigned __int8 a2)
{
  volatile signed __int64 *v2; // rbx
  unsigned __int64 v3; // rdi
  $C71981A45BEB2B45F82C232A7085991E *v4; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx

  v2 = (volatile signed __int64 *)(a1 + 16);
  v3 = a2;
  if ( *(_DWORD *)a1 )
  {
    LODWORD(v4) = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 16));
    if ( KiIrqlFlags )
    {
      LODWORD(v4) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)v4 <= 0xFu
        && (unsigned __int8)v3 <= 0xFu
        && (unsigned __int8)v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v4 = ($C71981A45BEB2B45F82C232A7085991E *)(-1LL << ((unsigned __int8)v3 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)v4;
        v9 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v9 )
          LODWORD(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
    LODWORD(v4) = KeAbPostRelease((ULONG_PTR)v2);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 )
    {
      v4 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v4->ApcState.ApcListHead[0].Flink != v4 )
        LODWORD(v4) = KiCheckForKernelApcDelivery(v6, 1LL, v7, v8);
    }
  }
  return (int)v4;
}
