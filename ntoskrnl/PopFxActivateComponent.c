char __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax
  char v8; // si
  _OWORD *v9; // r9
  struct _KTHREAD *v10; // rcx
  bool v11; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  _OWORD v18[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]

  v19 = 0LL;
  v20 = 0;
  LODWORD(v6) = *(_DWORD *)(a1 + 824);
  memset(v18, 0, sizeof(v18));
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return (char)v6;
  if ( (a3 & 6) == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  else
  {
    v8 = 0;
  }
  v9 = v18;
  if ( (a3 & 2) != 0 )
    v9 = 0LL;
  LODWORD(v6) = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
  if ( (_DWORD)v6 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    LOBYTE(v6) = PopFxActivateComponentWorker(a1, a2, a4, v9);
LABEL_14:
    if ( (a3 & 1) != 0 )
      LOBYTE(v6) = KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_8;
  }
  if ( (int)v6 >= 0 )
  {
    if ( ((unsigned int)v6 & 0x40000000) != 0 && (a3 & 8) == 0 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
      KxReleaseSpinLock((volatile signed __int64 *)(a2 + 128));
      LOBYTE(v6) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(v6) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v11 = ((unsigned int)v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)v6;
          if ( v11 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v13);
    }
    goto LABEL_14;
  }
LABEL_8:
  if ( v8 )
  {
    v10 = KeGetCurrentThread();
    v11 = v10->SpecialApcDisable++ == -1;
    if ( v11 )
    {
      v6 = &v10->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
        LOBYTE(v6) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v6;
}
