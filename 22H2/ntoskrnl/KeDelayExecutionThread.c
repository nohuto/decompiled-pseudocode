/*
 * XREFs of KeDelayExecutionThread @ 0x140256CF0
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402682C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     CcPurgeCacheSection @ 0x140270FA0 (CcPurgeCacheSection.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     ExpExpandResourceOwnerTable @ 0x14030FD3C (ExpExpandResourceOwnerTable.c)
 *     IopCancelIrpsInFileObjectList @ 0x140313D7C (IopCancelIrpsInFileObjectList.c)
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 *     MmFlushSection @ 0x14033D70C (MmFlushSection.c)
 *     MiFlushAllHintedStorePages @ 0x1403503A0 (MiFlushAllHintedStorePages.c)
 *     MiAllocatePagesForMdl @ 0x140354954 (MiAllocatePagesForMdl.c)
 *     FsRtlCreateSectionForDataScan @ 0x14035A570 (FsRtlCreateSectionForDataScan.c)
 *     PopAllocateIrp @ 0x1403707A0 (PopAllocateIrp.c)
 *     MiCreateSystemSection @ 0x1403728BC (MiCreateSystemSection.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380DCC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     MiFlushAllPagesWorker @ 0x14038282C (MiFlushAllPagesWorker.c)
 *     MiMappedPageWriter @ 0x1403B70D0 (MiMappedPageWriter.c)
 *     PnpBootDeviceWait @ 0x1403B7D54 (PnpBootDeviceWait.c)
 *     MiMarkHugePfnBad @ 0x1403F3074 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3428 (MiMarkHugePfnGood.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x1404E97AC (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeleteSectionsForPartition @ 0x1404EBDC4 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FEE90 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x1405072E0 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x14052A63C (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14053AC6C (MiCheckSystemTrimEndCriteria.c)
 *     MiDelayFaultingThread @ 0x1405482C4 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14059CA10 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1405A14E4 (MdlInvariantPostProcessing1.c)
 *     sub_1405BF110 @ 0x1405BF110 (sub_1405BF110.c)
 *     MmCreateSpecialImageSection @ 0x140608BE4 (MmCreateSpecialImageSection.c)
 *     NtDelayExecution @ 0x14061A810 (NtDelayExecution.c)
 *     PfpOpenHandleCreate @ 0x140633828 (PfpOpenHandleCreate.c)
 *     PnpCompleteDeviceEvent @ 0x140634B74 (PnpCompleteDeviceEvent.c)
 *     MiCreateSectionCommon @ 0x140654AC0 (MiCreateSectionCommon.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     MmFlushVirtualMemory @ 0x140668FB4 (MmFlushVirtualMemory.c)
 *     NtNotifyChangeSession @ 0x1406791D0 (NtNotifyChangeSession.c)
 *     NtCancelIoFile @ 0x140682230 (NtCancelIoFile.c)
 *     ExpWatchProductTypeWork @ 0x140696830 (ExpWatchProductTypeWork.c)
 *     MmGetSystemRoutineAddress @ 0x140699E80 (MmGetSystemRoutineAddress.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406BDA1C (EtwpWaitForBufferReferenceCount.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1406C5770 (IoCancelThreadIo.c)
 *     PopPolicyWorkerNotify @ 0x1406F49C0 (PopPolicyWorkerNotify.c)
 *     CmpUuidCreate @ 0x14070D95C (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x14071E360 (NtCreateJobObject.c)
 *     PopAcquireAdaptiveLock @ 0x1407252B4 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140725A44 (PoBlockConsoleSwitch.c)
 *     PipEventRemovalCheckOpenHandles @ 0x140732B44 (PipEventRemovalCheckOpenHandles.c)
 *     PnpAllocateCriticalMemory @ 0x14074A7F4 (PnpAllocateCriticalMemory.c)
 *     CmpTransMgrCommit @ 0x1407684C0 (CmpTransMgrCommit.c)
 *     PfTLoggingWorker @ 0x1407AD3A0 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x140875090 (CmpRetryBackOff.c)
 *     IopCancelAlertedRequest @ 0x1408910DC (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x14089B114 (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x1408C8604 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x1408E7610 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140955DA0 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x14095CF90 (WheaRemoveErrorSource.c)
 *     sub_140963860 @ 0x140963860 (sub_140963860.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1409D8D4C (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x1409F0020 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6DEEC (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F230 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSelectReadyThreadEx @ 0x14022F830 (KiSelectReadyThreadEx.c)
 *     KiBeginThreadWait @ 0x140241FA0 (KiBeginThreadWait.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiCheckWaitNext @ 0x1402571D0 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x1402572C0 (KiCheckDueTimeExpired.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140258670 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x140258B30 (KiComputeNewPriority.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DE7EC (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x140341258 (KiFastExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbp
  NTSTATUS v4; // ebx
  PLARGE_INTEGER v5; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS result; // eax
  unsigned __int8 v10; // al
  __int64 v11; // r12
  unsigned int v12; // r13d
  int v13; // ecx
  NTSTATUS v14; // eax
  struct _KTHREAD *v15; // rdi
  unsigned __int8 v16; // r14
  struct _KPRCB *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KPRCB *v21; // rbp
  _DWORD *v22; // rcx
  struct _KPRCB *v23; // rbp
  _DWORD *v24; // rcx
  __int64 NextThread; // rbp
  unsigned __int64 CycleTime; // rdx
  unsigned __int64 v27; // rcx
  unsigned int v28; // r15d
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  bool v34; // zf
  char v35; // cl
  __int64 v36; // r8
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  unsigned __int8 CurrentIrql; // r10
  bool IsThreadRankNonZero; // al
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  _DWORD *v43; // r9
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // edx
  _DWORD *SchedulerAssist; // r9
  int v57; // [rsp+30h] [rbp-58h] BYREF
  int v58; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v59; // [rsp+38h] [rbp-50h]
  __int64 v60; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v61; // [rsp+A0h] [rbp+18h]
  unsigned int v62; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = Interval;
  v60 = 0LL;
  v62 = 0;
  if ( Interval->QuadPart || !WaitMode || Alertable || (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
  {
    LOBYTE(Interval) = 1;
    v10 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)v5, (_DWORD)Interval, (unsigned int)&v60, (__int64)&v62);
    v11 = v60;
    v12 = v62;
    v61 = v10;
    while ( 1 )
    {
      result = KiBeginThreadWait((__int64)CurrentThread, WaitMode, 4, Alertable);
      v59 = result;
      if ( result )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v12, v11) )
      {
        KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v61);
        if ( v5->QuadPart )
          return v59;
        else
          return KeYieldExecution(0LL);
      }
      CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      v14 = KiCommitThreadWait(v13, (int)CurrentThread + 320, v12, v11, 0LL);
      if ( v14 != 256 )
      {
        if ( v14 != 258 )
          return v14;
        return v4;
      }
      v61 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v11 = v60;
        v12 = v62;
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = CurrentIrql;
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
      return 1073741860;
    v15 = KeGetCurrentThread();
    v16 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
    {
      v43 = KeGetCurrentPrcb()->SchedulerAssist;
      v43[5] |= (-1LL << (v16 + 1)) & 4;
    }
    v17 = KeGetCurrentPrcb();
    if ( v17->ReadySummary || v17->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch(v15, 0LL);
      v21 = KeGetCurrentPrcb();
      v57 = 0;
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v44 = v22[6];
          v22[6] = v44 + 1;
          if ( v44 == -1 )
LABEL_69:
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->ThreadLock, 0LL) )
      {
        v41 = v21->SchedulerAssist;
        if ( v41 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v45 = v41[6] - 1;
            v41[6] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
        do
          KeYieldProcessorEx(&v57, v18, v19, v20);
        while ( v15->ThreadLock );
        v42 = v21->SchedulerAssist;
        if ( v42 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v46 = v42[6];
            v42[6] = v46 + 1;
            if ( v46 == -1 )
              goto LABEL_69;
          }
        }
      }
      v23 = KeGetCurrentPrcb();
      v58 = 0;
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v47 = v24[6];
          v24[6] = v47 + 1;
          if ( v47 == -1 )
LABEL_78:
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
      {
        v37 = v23->SchedulerAssist;
        if ( v37 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v48 = v37[6] - 1;
            v37[6] = v48;
            if ( !v48 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        do
          KeYieldProcessorEx(&v58, v18, v19, v20);
        while ( v17->PrcbLock );
        v38 = v23->SchedulerAssist;
        if ( v38 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v49 = v38[6];
            v38[6] = v49 + 1;
            if ( v49 == -1 )
              goto LABEL_78;
          }
        }
      }
      NextThread = (__int64)v17->NextThread;
      if ( NextThread || (NextThread = KiSelectReadyThreadEx(v17, 0LL, 1)) != 0 )
      {
        if ( v17->NestingLevel )
        {
          CycleTime = v15->CycleTime;
        }
        else
        {
          _disable();
          CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)v17, (__int64)v15, 0LL);
          _enable();
        }
        v27 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v15->SchedulerApc.SpareByte1;
        if ( (*((_DWORD *)&v15->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v15->116 + 1, 5u);
        v15->QuantumTarget = v27;
        LOBYTE(CycleTime) = 1;
        v28 = (char)KiComputeNewPriority(v15, CycleTime);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)v15) )
        {
          v30 = KeGetCurrentPrcb();
          if ( (char)v28 > v15->Priority )
          {
            if ( v15->AbWaitEntryCount )
            {
              p_PropagateBoostsEntry = &v15->PropagateBoostsEntry;
              if ( v15->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                p_AbPropagateBoostsList = &v30->AbPropagateBoostsList;
                if ( v30 != (struct _KPRCB *)-34680LL )
                {
                  p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                  _InterlockedIncrement16(&v15->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v30);
                }
              }
            }
          }
          v34 = (*((_DWORD *)&v15->0 + 1) & 0x400000) == 0;
          v15->Priority = v28;
          if ( !v34 )
          {
            LOBYTE(p_PropagateBoostsEntry) = 1;
            KiSetSchedulerAssistPriority(v15->SchedulerAssist, v28, p_PropagateBoostsEntry);
          }
        }
        KiReleaseThreadLockSafe(v15);
        v17->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v17, (__int64)v15, 0LL);
        _enable();
        if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v17), v35 = 1, !IsThreadRankNonZero) )
        {
          v35 = *(_BYTE *)(NextThread + 195);
        }
        *v17->PriorityState = v35;
        if ( v17->SchedulerAssist )
        {
          v51 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( (_KTHREAD *)NextThread != v17->IdleThread )
            v51 = (unsigned int)v35;
          KiSetSchedulerAssistPriority(v17->SchedulerAssist, v51, 0LL);
        }
        v17->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(NextThread + 388) = 2;
        v15->WaitReason = 33;
        v15->WaitIrql = v16;
        KiQueueReadyThread(v17, v15);
        LOBYTE(v36) = 1;
        KiSwapContext(v15, NextThread, v36);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v17->PrcbLock, 0LL);
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v50 = v32[6] - 1;
            v32[6] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        KiReleaseThreadLockSafe(v15);
        v4 = 1073741860;
      }
    }
    else
    {
      v4 = 1073741860;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v52 = KeGetCurrentIrql();
        if ( v52 <= 0xFu && v16 <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (v16 + 1));
          v34 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
    }
    __writecr8(v16);
    return v4;
  }
  return result;
}
