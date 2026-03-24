/*
 * XREFs of KeSetCpuSetsProcess @ 0x1403C5984
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiValidateCpuSetMasks @ 0x14035F358 (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C5B6C (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x1403C5CF4 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1403C5D40 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  ULONG_PTR CurrentThread; // rsi
  bool v12; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KPRCB *v17; // rdi
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-28h] BYREF
  int v32; // [rsp+24h] [rbp-24h] BYREF
  _QWORD *v33[4]; // [rsp+28h] [rbp-20h] BYREF

  v31 = 0;
  v33[0] = 0LL;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v31);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v31, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v33);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v33);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    else
    {
      CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v17 = KeGetCurrentPrcb();
        v32 = 0;
        while ( 1 )
        {
          v18 = v17->SchedulerAssist;
          if ( v18 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v19 = v18[6];
              v18[6] = v19 + 1;
              if ( v19 == -1 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v20 = v17->SchedulerAssist;
          if ( v20 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v21 = v20[6] - 1;
              v20[6] = v21;
              if ( !v21 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          do
            KeYieldProcessorEx(&v32, v14, v15, v16);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
        {
          v23 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v23 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v23, v24);
        LOBYTE(v25) = CurrentIrql;
        v12 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v25) == 0;
      }
      else
      {
        v12 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v12 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v12 = (v27[5] & 0xFFFF0003) == 0;
            v27[5] &= 0xFFFF0003;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
