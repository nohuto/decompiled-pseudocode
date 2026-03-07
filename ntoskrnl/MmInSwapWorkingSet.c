__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned __int64 *v1; // r13
  void **v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 WorkingSetSwapSupport; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  unsigned int v12; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  __int64 v29; // [rsp+20h] [rbp-58h]

  v1 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_140C67048 + 8LL * *((unsigned __int16 *)v1 + 87));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1176));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  v11 = (_QWORD *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v12 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v12 = -1073741558;
    }
    else
    {
      *(_QWORD *)(MiGetSharedVm(v8, v7, v9, v10, 0LL) + 24) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1176));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      if ( *(_DWORD *)(v4 + 1192) )
      {
        MiInSwapStore(Process);
        SmStoreSetProcessVaRanges(0LL);
      }
      v14 = 0;
      if ( Process[2].Affinity.StaticBitmap[5] && *(_QWORD *)(*v11 + 16LL) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport();
        if ( v3 )
          v14 = (*(_BYTE *)(*v11 + 32LL) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v14 |= 4u;
      }
      MiProcessWsInSwapSupport(*v11, v14);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v15 = v11[7];
      if ( v15 )
        MiProcessWsInSwapSupport(v15, 1LL);
      if ( v11[1] )
      {
        v11[5] = v11;
        v11[4] = MiInSwapSharedWorkingSetWorker;
        v11[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v11[6] = Process;
        ExQueueWorkItemToPartition((ULONG_PTR)(v11 + 2));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v11);
      }
      LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1176));
      if ( MiGetWorkingSetSwapSupport(v1) == 1 )
        *(_QWORD *)(MiGetSharedVm(v17, v16, v18, v19, v29) + 24) = 0LL;
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1176));
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v24 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8((unsigned __int8)v5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v12;
}
