/*
 * XREFs of KeReleaseSemaphoreEx @ 0x140262770
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140205140 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1402056F0 (AlpcpSignal.c)
 *     PopFxRequestWorker @ 0x140262450 (PopFxRequestWorker.c)
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F4FB8 (MiCheckForControlAreaDeletion.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14036EDF8 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PopFxQueueWorkOrder @ 0x140380F98 (PopFxQueueWorkOrder.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403880B8 (PopCompleteNotifyTransitionCommon.c)
 *     PopDispatchQuerySetIrp @ 0x1403980A4 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x140505BB0 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1405103DC (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x140543D3C (MiQueuePageFileExtension.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140576964 (PopCompleteDirectedPowerTransitionCallback.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E1BDC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDoPortCleanup @ 0x1405E20E8 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E2A50 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1405E301C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E4440 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x14067758C (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KiCompleteDirectSwitchThread @ 0x140262A58 (KiCompleteDirectSwitchThread.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist, char a5)
{
  int v5; // edi
  int v6; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // esi
  int v13; // eax
  int v14; // r12d
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rcx
  char v19; // al
  bool v20; // zf
  unsigned __int8 v22; // cl
  __int64 CurrentThread; // r9
  __int64 v24; // r9
  __int64 v25; // rcx
  char v26; // al
  int v27; // r9d
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // r9
  _DWORD *v30; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  struct _KPRCB *v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+38h] [rbp-40h]
  int v37; // [rsp+88h] [rbp+10h]
  __int64 v38; // [rsp+98h] [rbp+20h]

  v37 = a2;
  v5 = a3;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  v12 = *(_DWORD *)(a1 + 4);
  v13 = v12 + v5;
  if ( (signed int)(v12 + v5) > *(_DWORD *)(a1 + 24) || v13 < (int)v12 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  v14 = 0;
  *(_DWORD *)(a1 + 4) = v13;
  if ( !v12 )
  {
    v15 = *(_QWORD **)(a1 + 8);
    while ( v15 != (_QWORD *)(a1 + 8) )
    {
      v16 = (_QWORD *)*v15;
      v17 = (__int64)v15;
      v15 = v16;
      v18 = *(_QWORD **)(v17 + 8);
      if ( v16[1] != v17 || *v18 != v17 )
LABEL_7:
        __fastfail(3u);
      *v18 = v16;
      v16[1] = v18;
      v19 = *(_BYTE *)(v17 + 16);
      if ( v19 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), 0LL) )
        {
          v20 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v20 )
            break;
        }
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v38 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
          {
            v30 = KeGetCurrentPrcb()->SchedulerAssist;
            v10 = (_QWORD *)((-1LL << (v22 + 1)) & 4);
            v11 = (unsigned int)v10 | v30[5];
            v30[5] = v11;
          }
          v35 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v35->CurrentThread;
          v36 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v29, v17, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v38, (__int64)v10, v11, CurrentThread);
          v11 = v38 + 8;
          v25 = v38;
          if ( *(_QWORD *)v11 == v11
            || *(_DWORD *)(v38 + 40) >= *(_DWORD *)(v38 + 44)
            || *(_QWORD *)(v36 + 232) == v38 && *(_BYTE *)(v36 + 643) == 15 )
          {
LABEL_33:
            v27 = *(_DWORD *)(v25 + 4);
            *(_DWORD *)(v25 + 4) = v27 + 1;
            v10 = *(_QWORD **)(v25 + 32);
            if ( *v10 != v25 + 24 )
              goto LABEL_7;
            *(_QWORD *)v17 = v25 + 24;
            *(_QWORD *)(v17 + 8) = v10;
            *v10 = v17;
            *(_QWORD *)(v25 + 32) = v17;
            if ( !v27 && *(_QWORD *)v11 != v11 )
            {
              KiWakeOtherQueueWaiters((__int64)v35, v25);
              v25 = v38;
            }
          }
          else
          {
            v26 = KiWakeQueueWaiter((__int64)v35, v38, v17, v24);
            v25 = v38;
            if ( !v26 )
            {
              v11 = v38 + 8;
              goto LABEL_33;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v20 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v20 )
            break;
          continue;
        }
        KiTryUnwaitThread(CurrentPrcb, v17, 256LL, 0LL);
      }
    }
    v6 = v37;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v14 = 1;
    if ( (a5 & 4) == 0 )
      v14 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, v14, 1, v6, CurrentIrql);
  return v12;
}
