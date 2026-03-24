/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x14051CB20
 * Callers:
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14029CF60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x14035D218 (KiGetThreadCpuSetMaskPointer.c)
 *     KiSendSoftwareInterrupt @ 0x14035E910 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiValidateCpuSetMasks @ 0x14035F358 (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSets @ 0x1403C5C5C (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1403C5CF4 (KiWriteCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x1405A7784 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned __int64 *ThreadCpuSetMaskPointer; // r13
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  volatile LONG *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  unsigned int v20; // esi
  __int64 updated; // rax
  unsigned int v22; // ebp
  __int64 v23; // rbx
  struct _KPRCB *v24; // rbx
  ULONG_PTR CurrentThread; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KPRCB *v29; // rdi
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  __int64 NextThread; // rdi
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // r8d
  bool v38; // zf
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  int v44; // [rsp+20h] [rbp-38h] BYREF
  int v45; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v46[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v47; // [rsp+78h] [rbp+20h] BYREF

  v47 = 0;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v46[0] = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v47);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v11 = (volatile LONG *)(v7 + 64);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v44 = 0;
    while ( 1 )
    {
      v16 = CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v16[6];
          v16[6] = v17 + 1;
          if ( v17 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v18 = CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = v18[6] - 1;
          v18[6] = v19;
          if ( !v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v44, v12, v13, v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v20 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v47, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64)v46);
    v22 = *(_DWORD *)(a1 + 588);
    v23 = updated;
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v20, v22);
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    if ( v23 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v23 + 36) )
      KiSendSoftwareInterrupt();
    v24 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v24, v46);
    if ( CurrentIrql >= 2u )
    {
      if ( v24->NextThread && !v24->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v24, 2);
    }
    else
    {
      CurrentThread = (ULONG_PTR)v24->CurrentThread;
      if ( v24->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v24->CurrentThread, 0);
        v29 = KeGetCurrentPrcb();
        v45 = 0;
        while ( 1 )
        {
          v30 = v29->SchedulerAssist;
          if ( v30 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v31 = v30[6];
              v30[6] = v31 + 1;
              if ( v31 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v29);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v24->PrcbLock, 0LL) )
            break;
          v32 = v29->SchedulerAssist;
          if ( v32 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v33 = v32[6] - 1;
              v32[6] = v33;
              if ( !v33 )
                KiRemoveSystemWorkPriorityKick((__int64)v29);
            }
          }
          do
            KeYieldProcessorEx(&v45, v26, v27, v28);
          while ( v24->PrcbLock );
        }
        NextThread = (__int64)v24->NextThread;
        v24->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v24, CurrentThread, 0LL);
        _enable();
        v24->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
        {
          v35 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
          *(_DWORD *)(NextThread + 132) = v35 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)v24, CurrentThread, v35, v36);
        LOBYTE(v37) = CurrentIrql;
        v38 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v37) == 0;
      }
      else
      {
        v38 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v38 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v38 = (v40[5] & 0xFFFF0003) == 0;
            v40[5] &= 0xFFFF0003;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick((__int64)v39);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v38 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick((__int64)v41);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
