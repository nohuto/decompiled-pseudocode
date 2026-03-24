/*
 * XREFs of KeSetAffinityThread @ 0x140398CCC
 * Callers:
 *     ExpWorkerThread @ 0x1402417F0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407AFC80 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiSetAffinityThread @ 0x14035D934 (KiSetAffinityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x14052433C (KiExtendProcessAffinity.c)
 */

unsigned __int8 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rsi
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KPRCB *v16; // rdi
  _DWORD *v17; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  _DWORD *v22; // rcx
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  int v25; // eax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  int v31; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v32; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *(_QWORD *)(v4 + 8 * v2 + 88);
  if ( !v9 || (v9 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v4);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v4 + 8 * v2 + 88);
  KiSetAffinityThread(a1, (__int64)&v32, a2, v8);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v32);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v16 = KeGetCurrentPrcb();
      v31 = 0;
      while ( 1 )
      {
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v24 = v17[6];
            v17[6] = v24 + 1;
            if ( v24 == -1 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v22 = v16->SchedulerAssist;
        if ( v22 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v25 = v22[6] - 1;
            v22[6] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v31, v13, v14, v15);
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
        v19 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v19 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v19, v20);
      LOBYTE(v21) = CurrentIrql;
      v12 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) == 0;
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
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
