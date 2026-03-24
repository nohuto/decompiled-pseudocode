/*
 * XREFs of MmInSwapWorkingSet @ 0x140350CF4
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x140263DB0 (MiGetWorkingSetSwapSupport.c)
 *     ExQueueWorkItemToPartition @ 0x140277F2C (ExQueueWorkItemToPartition.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140351710 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x1403517B8 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInSwapStore @ 0x1406FAF88 (MiInSwapStore.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406FB1C0 (MiFreeWorkingSetSwapContext.c)
 *     MiContractWsSwapPageFile @ 0x1406FB22C (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1406FB2BC (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1406FB63C (SmStoreSetProcessVaRanges.c)
 *     VmCheckLargePageInswap @ 0x14092E854 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x14092E8A0 (VmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned __int64 *v1; // r13
  void **v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 WorkingSetSwapSupport; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax

  v1 = &Process[1].ActiveProcessorsPadding[6];
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_140C4E648 + 8LL * *((unsigned __int16 *)v1 + 87));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v1);
  v8 = (_QWORD *)WorkingSetSwapSupport;
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
      *((_QWORD *)MiGetSharedVm(v7) + 3) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1136));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v18 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      if ( *(_DWORD *)(v4 + 1160) )
      {
        MiInSwapStore(Process);
        SmStoreSetProcessVaRanges(0LL);
      }
      v9 = 0;
      if ( Process[2].Affinity.Bitmap[5] && *(_QWORD *)(*v8 + 16LL) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v8);
        if ( v3 )
          v9 = (*(_BYTE *)(*v8 + 32LL) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v9 |= 4u;
      }
      MiProcessWsInSwapSupport(*v8, v9);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v10 = v8[7];
      if ( v10 )
        MiProcessWsInSwapSupport(v10, 1LL);
      if ( v8[1] )
      {
        v8[5] = v8;
        v8[4] = MiInSwapSharedWorkingSetWorker;
        v8[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v8[6] = Process;
        ExQueueWorkItemToPartition(v8 + 2, 3, 0xFFFFFFFF, *(_QWORD *)(v4 + 176));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v8);
      }
      LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
      if ( MiGetWorkingSetSwapSupport((__int64)v1) == 1 )
        *((_QWORD *)MiGetSharedVm(v11) + 3) = 0LL;
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1136));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v18 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8((unsigned __int8)v5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v12;
}
