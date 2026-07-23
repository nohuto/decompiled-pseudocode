/*
 * XREFs of KeReleaseSemaphore @ 0x1402F19A0
 * Callers:
 *     PopIrpWorker @ 0x14039F770 (PopIrpWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405648B0 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpDoPortCleanup @ 0x1405E20E8 (AlpcpDoPortCleanup.c)
 *     NtReleaseSemaphore @ 0x1406618B0 (NtReleaseSemaphore.c)
 *     IopUncacheInterfaceInformation @ 0x14073A898 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x14074F4D8 (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x140752C64 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x1407B6200 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407C69E4 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407C7838 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x14088B7C0 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408AB3F8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1408AB480 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408AB52C (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x1408B31B0 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x1408B98A4 (IopQueryConflictList.c)
 *     NtReleaseKeyedEvent @ 0x14095B290 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B650 (NtWaitForKeyedEvent.c)
 *     PopSystemIrpCompletion @ 0x140997030 (PopSystemIrpCompletion.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  LONG v4; // esi
  unsigned int v5; // r15d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // r8
  LONG SignalState; // edi
  LONG v12; // eax
  struct _KSEMAPHORE *Flink; // r13
  struct _KSEMAPHORE *v14; // rax
  __int64 v15; // rsi
  struct _KSEMAPHORE **v16; // rcx
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdx
  unsigned __int8 v21; // cl
  __int64 CurrentThread; // r9
  __int64 v23; // r9
  __int64 v24; // rcx
  char v25; // al
  int v26; // r9d
  _DWORD *v27; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // r9
  BOOL v30; // r14d
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  struct _KPRCB *v35; // [rsp+38h] [rbp-40h]
  __int64 v36; // [rsp+40h] [rbp-38h]
  __int64 v37; // [rsp+80h] [rbp+8h]

  v4 = Adjustment;
  v5 = Increment;
  v30 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    *(_QWORD *)&Wait = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (-1LL << (CurrentIrql + 1)) & 4;
    *(_QWORD *)&Adjustment = (unsigned int)Increment | *(_DWORD *)(Wait + 20LL);
    *(_DWORD *)(Wait + 20LL) = Adjustment;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Semaphore->Header.Lock, *(__int64 *)&Increment, *(__int64 *)&Adjustment, Wait);
  SignalState = Semaphore->Header.SignalState;
  v12 = SignalState + v4;
  if ( SignalState + v4 > Semaphore->Limit || v12 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          SchedulerAssist = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v34 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v34;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v12;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v14 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v15 = (__int64)Flink;
      Flink = v14;
      v16 = *(struct _KSEMAPHORE ***)(v15 + 8);
      if ( v14->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v15 || *v16 != (struct _KSEMAPHORE *)v15 )
LABEL_7:
        __fastfail(3u);
      *v16 = v14;
      v14->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
        {
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v37 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
          {
            v27 = KeGetCurrentPrcb()->SchedulerAssist;
            v9 = (_QWORD *)((-1LL << (v21 + 1)) & 4);
            v10 = (unsigned int)v9 | v27[5];
            v27[5] = v10;
          }
          v35 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v35->CurrentThread;
          v36 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v29, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v37, (__int64)v9, v10, CurrentThread);
          v9 = (_QWORD *)(v37 + 8);
          v24 = v37;
          if ( (_QWORD *)*v9 == v9
            || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
            || *(_QWORD *)(v36 + 232) == v37 && *(_BYTE *)(v36 + 643) == 15 )
          {
LABEL_31:
            v26 = *(_DWORD *)(v24 + 4);
            *(_DWORD *)(v24 + 4) = v26 + 1;
            v10 = *(_QWORD *)(v24 + 32);
            if ( *(_QWORD *)v10 != v24 + 24 )
              goto LABEL_7;
            *(_QWORD *)v15 = v24 + 24;
            *(_QWORD *)(v15 + 8) = v10;
            *(_QWORD *)v10 = v15;
            *(_QWORD *)(v24 + 32) = v15;
            if ( !v26 && (_QWORD *)*v9 != v9 )
            {
              KiWakeOtherQueueWaiters((__int64)v35, v24);
              v24 = v37;
            }
          }
          else
          {
            v25 = KiWakeQueueWaiter((__int64)v35, v37, v15, v23);
            v24 = v37;
            if ( !v25 )
            {
              v9 = (_QWORD *)(v37 + 8);
              goto LABEL_31;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v15, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  v19 = 3LL;
  if ( !v30 )
    v19 = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, v19, 1LL, v5, CurrentIrql);
  return SignalState;
}
