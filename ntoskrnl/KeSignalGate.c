/*
 * XREFs of KeSignalGate @ 0x1402F0524
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     MiFinishVadDeletion @ 0x140248200 (MiFinishVadDeletion.c)
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiAttachThreadDone @ 0x14029C9D4 (MiAttachThreadDone.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402A4E28 (MiUnlockControlAreaSectionExtend.c)
 *     MiReturnWsToExpansionList @ 0x1402A5FD4 (MiReturnWsToExpansionList.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MiDereferencePageRunsEx @ 0x1402EBA28 (MiDereferencePageRunsEx.c)
 *     MiComputeDataFlushRange @ 0x1403324D0 (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     KiGenericCallDpcInitiatorDpc @ 0x1403C1750 (KiGenericCallDpcInitiatorDpc.c)
 *     PsWatchWorkingSet @ 0x14045B2C0 (PsWatchWorkingSet.c)
 *     KiEpfComplete @ 0x140576A00 (KiEpfComplete.c)
 *     MiZeroHugeRangeWorker @ 0x140620990 (MiZeroHugeRangeWorker.c)
 *     MiSubsectionProtosCreated @ 0x14063D324 (MiSubsectionProtosCreated.c)
 *     MiWakeExtentDeletionWaiters @ 0x14063DFA4 (MiWakeExtentDeletionWaiters.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x140649E3C (MiWakeWaitersForAweCacheAttributeChange.c)
 *     MiWakeLargePageWaiters @ 0x14064DA54 (MiWakeLargePageWaiters.c)
 *     MiScrubMemoryWorker @ 0x140A439A0 (MiScrubMemoryWorker.c)
 *     sub_140B16300 @ 0x140B16300 (sub_140B16300.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

char __fastcall KeSignalGate(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  char v12; // al
  bool v13; // zf
  __int64 v15; // rsi
  _QWORD *v16; // r15
  unsigned __int8 v17; // cl
  _DWORD *v18; // r9
  __int64 v19; // rdx
  struct _KPRCB *v20; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v22; // r8
  int v23; // r8d
  __int64 *v24; // rdx
  __int64 v25; // [rsp+70h] [rbp+8h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    v5 = (_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) = 1;
    v6 = *(_QWORD **)(a1 + 8);
    while ( v6 != v5 )
    {
      v7 = (_QWORD *)*v6;
      v8 = (__int64)v6;
      v6 = v7;
      v9 = *(_QWORD **)(v8 + 8);
      if ( v7[1] != v8 || *v9 != v8 )
LABEL_6:
        __fastfail(3u);
      *v9 = v7;
      v7[1] = v9;
      v12 = *(_BYTE *)(v8 + 16);
      switch ( v12 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v8, *(unsigned __int16 *)(v8 + 18), 0LL) )
          {
            v13 = (*(_DWORD *)(a1 + 4))-- == 1;
            if ( v13 )
              goto LABEL_15;
          }
          break;
        case 2:
          *(_BYTE *)(v8 + 17) = 5;
          v15 = *(_QWORD *)(v8 + 24);
          *(_QWORD *)v8 = 0LL;
          v16 = (_QWORD *)(v15 + 8);
          v17 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
          {
            v18 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v17 == 2 )
              LODWORD(v19) = 4;
            else
              v19 = (-1LL << (v17 + 1)) & 4;
            v18[5] |= v19;
          }
          v20 = KeGetCurrentPrcb();
          CurrentThread = v20->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v22) = KeIsThreadRunning(v20->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v8, v22);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v15);
          if ( (_QWORD *)*v16 == v16
            || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v20, v15, v8) )
          {
            v23 = *(_DWORD *)(v15 + 4);
            *(_DWORD *)(v15 + 4) = v23 + 1;
            v24 = *(__int64 **)(v15 + 32);
            if ( *v24 != v15 + 24 )
              goto LABEL_6;
            *(_QWORD *)v8 = v15 + 24;
            *(_QWORD *)(v8 + 8) = v24;
            *v24 = v8;
            *(_QWORD *)(v15 + 32) = v8;
            if ( !v23 && (_QWORD *)*v16 != v16 )
              KiWakeOtherQueueWaiters((__int64)v20, v15);
          }
          else
          {
            *(_QWORD *)v8 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
          v13 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v13 )
            goto LABEL_15;
          CurrentPrcb = (struct _KPRCB *)v25;
          break;
        case 4:
          *(_BYTE *)(v8 + 17) = 5;
          *(_DWORD *)(a1 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v8 + 24), a1, v8, 0LL, 0);
          break;
        default:
          KiTryUnwaitThread((__int64)CurrentPrcb, v8, 256LL, 0LL);
          break;
      }
      v5 = (_QWORD *)(a1 + 8);
    }
  }
LABEL_15:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher(v25, 0, (struct _PROCESSOR_NUMBER)1, a2, CurrentIrql);
}
