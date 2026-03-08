/*
 * XREFs of KeReleaseSemaphoreEx @ 0x14033E940
 * Callers:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140202804 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PopFxQueueWorkItem @ 0x1402B8D54 (PopFxQueueWorkItem.c)
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     PopDispatchQuerySetIrp @ 0x1402B9B64 (PopDispatchQuerySetIrp.c)
 *     MiCheckForControlAreaDeletion @ 0x1402CFCF8 (MiCheckForControlAreaDeletion.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     PopFxRequestWorkerInternal @ 0x1403089B4 (PopFxRequestWorkerInternal.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     IoRaiseInformationalHardError @ 0x140554960 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x140562AF4 (PnpProcessRebalance.c)
 *     NtSignalAndWaitForSingleObject @ 0x140580330 (NtSignalAndWaitForSingleObject.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x14058DF74 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14058DFFC (PopCompleteNotifyTransitionCommon.c)
 *     MiQueuePageFileExtension @ 0x140638ECC (MiQueuePageFileExtension.c)
 *     NtReleaseSemaphore @ 0x1406F76C0 (NtReleaseSemaphore.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406F77CC (AlpcpSignalPortAndUnlock.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140716318 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDoPortCleanup @ 0x140716E08 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407C9EE0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThread @ 0x14033FD70 (KiSignalThread.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiCompleteDirectSwitchThread @ 0x140369F84 (KiCompleteDirectSwitchThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

__int64 KeReleaseSemaphoreEx(__int64 a1, unsigned int a2, int a3, ...)
{
  unsigned int v4; // ebp
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  int v10; // r14d
  int v11; // eax
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  char v16; // al
  __int64 v17; // r14
  char v18; // bp
  __int64 v19; // rbx
  bool v20; // zf
  char v21; // bl
  __int64 v22; // rbx
  _QWORD *v23; // r15
  unsigned __int8 v24; // cl
  _DWORD *v25; // r9
  __int64 v26; // rdx
  struct _KPRCB *v27; // r14
  _KTHREAD *CurrentThread; // rbp
  unsigned __int8 IsThreadRunning; // al
  int v30; // r8d
  __int64 *v31; // rdx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  unsigned __int8 v37; // [rsp+30h] [rbp-58h]
  int v38; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+98h] [rbp+10h]
  int v40; // [rsp+A0h] [rbp+18h]
  __int64 v41; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v43; // [rsp+B0h] [rbp+28h]
  _DWORD *v44; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _DWORD *);
  v39 = a2;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v41) = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx((__int64 *)va);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v10 = *(_DWORD *)(a1 + 4);
  v40 = v10;
  v11 = v10 + a3;
  if ( v10 + a3 > *(_DWORD *)(a1 + 24) || v11 < v10 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
    __writecr8(CurrentIrql);
    if ( (v43 & 8) != 0 )
      RtlRaiseStatus(-1073741753);
    return 3221225543LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v11;
    if ( !v10 )
    {
      v12 = *(_QWORD **)(a1 + 8);
      if ( v12 != (_QWORD *)(a1 + 8) )
      {
        while ( 1 )
        {
          v13 = (_QWORD *)*v12;
          v14 = (__int64)v12;
          v12 = v13;
          v15 = *(_QWORD **)(v14 + 8);
          if ( v13[1] != v14 || *v15 != v14 )
LABEL_57:
            __fastfail(3u);
          *v15 = v13;
          v13[1] = v15;
          v16 = *(_BYTE *)(v14 + 16);
          switch ( v16 )
          {
            case 1:
              v17 = *(unsigned __int16 *)(v14 + 18);
              v18 = 0;
              v19 = *(_QWORD *)(v14 + 24);
              v38 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v38);
                while ( *(_QWORD *)(v19 + 64) );
              }
              if ( *(_BYTE *)(v19 + 388) == 5 )
                v18 = KiSignalThread(CurrentPrcb, v19, v17, v14);
              *(_QWORD *)(v19 + 64) = 0LL;
              ++*(_BYTE *)(v14 + 17);
              if ( v18 )
              {
                v20 = (*(_DWORD *)(a1 + 4))-- == 1;
                if ( v20 )
                  goto LABEL_26;
              }
              break;
            case 2:
              *(_BYTE *)(v14 + 17) = 5;
              v22 = *(_QWORD *)(v14 + 24);
              *(_QWORD *)v14 = 0LL;
              v23 = (_QWORD *)(v22 + 8);
              v24 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
              {
                v25 = KeGetCurrentPrcb()->SchedulerAssist;
                if ( v24 == 2 )
                  LODWORD(v26) = 4;
                else
                  v26 = (-1LL << (v24 + 1)) & 4;
                v25[5] |= v26;
              }
              v27 = KeGetCurrentPrcb();
              CurrentThread = v27->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v14, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v22);
              if ( (_QWORD *)*v23 == v23
                || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v22 && CurrentThread->WaitReason == 15
                || !(unsigned __int8)KiWakeQueueWaiter(v27, v22, v14) )
              {
                v30 = *(_DWORD *)(v22 + 4);
                *(_DWORD *)(v22 + 4) = v30 + 1;
                v31 = *(__int64 **)(v22 + 32);
                if ( *v31 != v22 + 24 )
                  goto LABEL_57;
                *(_QWORD *)v14 = v22 + 24;
                *(_QWORD *)(v14 + 8) = v31;
                *v31 = v14;
                *(_QWORD *)(v22 + 32) = v14;
                if ( !v30 && (_QWORD *)*v23 != v23 )
                  KiWakeOtherQueueWaiters((__int64)v27, v22);
              }
              else
              {
                *(_QWORD *)v14 = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
              v20 = (*(_DWORD *)(a1 + 4))-- == 1;
              if ( v20 )
              {
LABEL_26:
                CurrentIrql = v37;
                v10 = v40;
                v4 = v39;
                goto LABEL_27;
              }
              break;
            case 4:
              *(_BYTE *)(v14 + 17) = 5;
              *(_DWORD *)(a1 + 4) = 0;
              KiInsertQueueDpc(*(_QWORD *)(v14 + 24), a1, v14, 0LL, 0);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
              break;
          }
          if ( v12 == (_QWORD *)(a1 + 8) )
            goto LABEL_26;
        }
      }
    }
LABEL_27:
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( (v43 & 1) != 0 )
    {
      v21 = 1;
      if ( (v43 & 4) == 0 )
        v21 = 3;
    }
    else
    {
      v21 = 0;
      if ( (v43 & 2) != 0 )
        KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    }
    KiExitDispatcher((__int64)CurrentPrcb, v21, (struct _PROCESSOR_NUMBER)1, v4, CurrentIrql);
    if ( v44 )
      *v44 = v10;
    return 0LL;
  }
}
