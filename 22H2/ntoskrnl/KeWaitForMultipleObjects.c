/*
 * XREFs of KeWaitForMultipleObjects @ 0x14024B500
 * Callers:
 *     PopFxProcessWorkPool @ 0x140262E94 (PopFxProcessWorkPool.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14027A000 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140312490 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopSleepDeviceList @ 0x1403832A4 (PopSleepDeviceList.c)
 *     MiMappedPageWriter @ 0x1403B70D0 (MiMappedPageWriter.c)
 *     CcAsyncReadWorker @ 0x1403B72F0 (CcAsyncReadWorker.c)
 *     KeBalanceSetManager @ 0x1403B8A80 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B8D40 (CcQueueLazyWriteScanThread.c)
 *     MiDereferenceSegmentThread @ 0x1403BCDD0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x1403C0090 (MiRebuildLargePagesThread.c)
 *     MiStoreEvictThread @ 0x1403C0C60 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x140535680 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x14053D228 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14053D520 (MiWaitForAsynchronousFlushes.c)
 *     MiWaitForFreePagesToZero @ 0x14054FECC (MiWaitForFreePagesToZero.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405FCB60 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x1406BE4D0 (EtwpLogger.c)
 *     CmpDoFileWrite @ 0x1406EA3AC (CmpDoFileWrite.c)
 *     PiUEventNotifyUserMode @ 0x14071A80C (PiUEventNotifyUserMode.c)
 *     PfGenerateTrace @ 0x1407772D4 (PfGenerateTrace.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     PfTLoggingWorker @ 0x1407AD3A0 (PfTLoggingWorker.c)
 *     ExpWorkQueueManagerThread @ 0x1407AFC80 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x1408E7CC0 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942B10 (EtwpCovSampCaptureWorkerThread.c)
 *     PnprQuiesceWorker @ 0x1409AEDA0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409B00B0 (MiZeroAllPageFiles.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     KiWaitForAllObjects @ 0x1402ED1E0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x1402EDB88 (KiWaitSatisfyMutant.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FD550 (KeBugCheck.c)
 *     __report_rangecheckfailure @ 0x1404B63BC (__report_rangecheckfailure.c)
 *     KiSatisfyThreadWait @ 0x140522A34 (KiSatisfyThreadWait.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  PKWAIT_BLOCK WaitBlock; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r11
  unsigned __int8 WaitIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v14; // r14
  __int64 v15; // r9
  struct _KPRCB *v16; // rcx
  __int64 ThreadTimerDelay; // rdx
  struct _KPRCB *v18; // r10
  volatile UCHAR *p_BlockState; // rdi
  PVOID *__attribute__((__org_arrdim(0,0))) v20; // r11
  unsigned __int64 v21; // r8
  ULONG v22; // r14d
  char *v23; // rbx
  __int64 v24; // r9
  int v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // edi
  unsigned int v28; // ebx
  unsigned __int64 v29; // r15
  NTSTATUS v30; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v31; // r11
  struct _KPRCB *v33; // rdi
  _DWORD *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r13
  struct _KPRCB *v37; // rcx
  __int64 v38; // rdx
  volatile __int64 WaitStatus; // r15
  ULONG_PTR AbWaitObject; // rcx
  struct _KWAIT_BLOCK *v41; // rbx
  volatile signed __int32 *v42; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  _KWAIT_STATUS_REGISTER v47; // al
  struct _KPRCB *v48; // rbx
  _DWORD *v49; // rcx
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  bool v52; // zf
  unsigned __int8 v53; // r10
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  unsigned __int8 v56; // cl
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  unsigned __int64 v69; // rax
  char v70; // r14
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rax
  unsigned __int64 v75; // rdi
  _KLOCK_ENTRY *v76; // rbx
  __int64 v77; // rax
  NTSTATUS v78; // ebx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  struct _KPRCB *v82; // rbx
  _DWORD *v83; // rcx
  int v84; // eax
  _DWORD *v85; // rcx
  int v86; // eax
  _DWORD *v87; // rcx
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  __int64 v96; // rax
  struct _KPRCB *v97; // rdi
  _DWORD *v98; // rcx
  int v99; // eax
  _DWORD *v100; // rcx
  int v101; // eax
  _DWORD *v102; // rcx
  int v103; // eax
  struct _KPRCB *v104; // rcx
  _DWORD *v105; // rdx
  int v106; // eax
  struct _KPRCB *v107; // rcx
  _DWORD *v108; // rdx
  unsigned __int8 v109; // al
  struct _KPRCB *v110; // r9
  _DWORD *v111; // r8
  int v112; // eax
  unsigned __int8 v113; // [rsp+40h] [rbp-89h]
  int v114; // [rsp+44h] [rbp-85h]
  PVOID *__attribute__((__org_arrdim(0,0))) v115; // [rsp+48h] [rbp-81h]
  struct _KPRCB *v116; // [rsp+50h] [rbp-79h]
  unsigned __int64 v117; // [rsp+58h] [rbp-71h]
  __int64 v118; // [rsp+58h] [rbp-71h]
  __int64 v119; // [rsp+58h] [rbp-71h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-61h]
  int v122; // [rsp+70h] [rbp-59h] BYREF
  KWAIT_REASON v123; // [rsp+74h] [rbp-55h]
  _DWORD v124[4]; // [rsp+78h] [rbp-51h] BYREF
  int v125; // [rsp+88h] [rbp-41h] BYREF
  int v126; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v127; // [rsp+90h] [rbp-39h] BYREF
  int v128; // [rsp+94h] [rbp-35h] BYREF
  int v129; // [rsp+98h] [rbp-31h] BYREF
  PVOID v130; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-21h] BYREF
  struct _KTHREAD *v132; // [rsp+B0h] [rbp-19h]
  __int64 v133; // [rsp+B8h] [rbp-11h]
  _BYTE v134[8]; // [rsp+C0h] [rbp-9h]

  WaitBlock = WaitBlockArray;
  v123 = WaitReason;
  v115 = Object;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v132 = CurrentThread;
  if ( WaitBlockArray )
  {
    if ( Count <= 0x40 )
      goto LABEL_5;
LABEL_133:
    KeBugCheck(0xCu);
  }
  if ( Count > 3 )
    goto LABEL_133;
  WaitBlock = CurrentThread->WaitBlock;
LABEL_5:
  if ( WaitType == WaitAll )
    return KiWaitForAllObjects(
             Count,
             (_DWORD)Object,
             WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v130 = 0LL;
  v133 = 0LL;
  v113 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v113 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      *(_QWORD *)&WaitReason = KeGetCurrentPrcb()->SchedulerAssist;
      Object = (PVOID *)((-1LL << (CurrentIrql + 1)) & 4);
      *(_QWORD *)&WaitType = (unsigned int)Object | *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL);
      *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL) = WaitType;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v114 = 1;
    }
    else
    {
      v114 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v114 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v122 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v64 = SchedulerAssist[6];
          SchedulerAssist[6] = v64 + 1;
          if ( v64 == -1 )
LABEL_139:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v54 = CurrentPrcb->SchedulerAssist;
        if ( v54 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v65 = v54[6] - 1;
            v54[6] = v65;
            if ( !v65 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v122, (__int64)Object, *(__int64 *)&WaitType, *(__int64 *)&WaitReason);
        while ( CurrentThread->ThreadLock );
        v55 = CurrentPrcb->SchedulerAssist;
        if ( v55 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v66 = v55[6];
            v55[6] = v66 + 1;
            if ( v66 == -1 )
              goto LABEL_139;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          v52 = (v68[5] & 0xFFFF0003) == 0;
          v68[5] &= 0xFFFF0003;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick(v67);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
      {
        *(_QWORD *)&WaitReason = KeGetCurrentPrcb()->SchedulerAssist;
        *(_QWORD *)&WaitType = *(unsigned int *)(*(_QWORD *)&WaitReason + 20LL);
        Object = (PVOID *)(WaitType | ~((unsigned __int8)(1LL << (v56 + 1)) - 1) & 4u);
        *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL) = (_DWORD)Object;
      }
      CurrentThread->WaitIrql = 0;
    }
    v14 = v123;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
        goto LABEL_120;
      goto LABEL_20;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v78 = 257;
      goto LABEL_121;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_120:
      v78 = 192;
LABEL_121:
      KiReleaseThreadLockSafe(CurrentThread);
      KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql);
      return v78;
    }
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v78 = 257;
      goto LABEL_121;
    }
LABEL_20:
    CurrentThread->WaitBlockFill6[68] = 5;
    v15 = 0LL;
    CurrentThread->WaitReason = v14;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    ThreadTimerDelay = (__int64)v16->SchedulerAssist;
    if ( ThreadTimerDelay )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v63 = *(_DWORD *)(ThreadTimerDelay + 24) - 1;
        *(_DWORD *)(ThreadTimerDelay + 24) = v63;
        if ( !v63 )
        {
          KiRemoveSystemWorkPriorityKick(v16);
          v15 = 0LL;
        }
      }
    }
    v18 = KeGetCurrentPrcb();
    p_BlockState = &WaitBlock->BlockState;
    v20 = v115;
    v21 = 0LL;
    v116 = v18;
    v22 = 0;
    v117 = 0LL;
    do
    {
      v124[0] = 0;
      v23 = (char *)v20[v22];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v22;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v23;
      if ( _interlockedbittestandset((volatile signed __int32 *)v23, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(v124, ThreadTimerDelay, v21, v15);
          while ( (*(_DWORD *)v23 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v23, 7u) );
        v20 = v115;
        v15 = 0LL;
        v21 = v117;
        v18 = v116;
      }
      if ( (*v23 & 0x7F) == 2 )
      {
        if ( (v23[48] & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v21, v22);
          v117 = v21;
        }
        if ( *((int *)v23 + 1) > 0 || CurrentThread == *((struct _KTHREAD **)v23 + 5) && v23[2] == v18->DpcRoutineActive )
        {
          if ( *((_DWORD *)v23 + 1) == 0x80000000 )
          {
            _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
            v82 = KeGetCurrentPrcb();
            v126 = 0;
            v83 = v82->SchedulerAssist;
            if ( !v83 )
              goto LABEL_186;
            if ( v82->NestingLevel > 1u )
              goto LABEL_186;
            v84 = v83[6];
            v83[6] = v84 + 1;
            if ( v84 != -1 )
              goto LABEL_186;
            while ( 1 )
            {
              KiRemoveSystemWorkPriorityKick(v82);
              while ( 1 )
              {
LABEL_186:
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  KiSatisfyThreadWait((_DWORD)v116, (_DWORD)CurrentThread, v113, (_DWORD)WaitBlock, v22);
                  RtlRaiseStatus(-1073741423);
                }
                v85 = v82->SchedulerAssist;
                if ( v85 )
                {
                  if ( v82->NestingLevel <= 1u )
                  {
                    v86 = v85[6] - 1;
                    v85[6] = v86;
                    if ( !v86 )
                      KiRemoveSystemWorkPriorityKick(v82);
                  }
                }
                do
                  KeYieldProcessorEx(&v126, ThreadTimerDelay, v21, v15);
                while ( CurrentThread->ThreadLock );
                v87 = v82->SchedulerAssist;
                if ( v87 )
                {
                  if ( v82->NestingLevel <= 1u )
                  {
                    v88 = v87[6];
                    v87[6] = v88 + 1;
                    if ( v88 == -1 )
                      break;
                  }
                }
              }
            }
          }
          v50 = KeGetCurrentPrcb();
          v125 = 0;
          v51 = v50->SchedulerAssist;
          if ( v51 )
          {
            if ( v50->NestingLevel <= 1u )
            {
              v79 = v51[6];
              v51[6] = v79 + 1;
              if ( v79 == -1 )
LABEL_175:
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v61 = v50->SchedulerAssist;
            if ( v61 )
            {
              if ( v50->NestingLevel <= 1u )
              {
                v80 = v61[6] - 1;
                v61[6] = v80;
                if ( !v80 )
                  KiRemoveSystemWorkPriorityKick(v50);
              }
            }
            do
              KeYieldProcessorEx(&v125, ThreadTimerDelay, v21, v15);
            while ( CurrentThread->ThreadLock );
            v62 = v50->SchedulerAssist;
            if ( v62 )
            {
              if ( v50->NestingLevel <= 1u )
              {
                v81 = v62[6];
                v62[6] = v81 + 1;
                if ( v81 == -1 )
                  goto LABEL_175;
              }
            }
          }
          v36 = (__int64)v116;
          v35 = 0LL;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v22;
            CurrentThread->AbWaitObject = 0LL;
            v52 = (*((_DWORD *)v23 + 1))-- == 1;
            if ( v52 )
            {
              KiWaitSatisfyMutant(v23, CurrentThread, v116, 0LL);
              v35 = 0LL;
            }
          }
          goto LABEL_44;
        }
      }
      else if ( *((int *)v23 + 1) > 0 )
      {
        v33 = KeGetCurrentPrcb();
        v128 = 0;
        v34 = v33->SchedulerAssist;
        if ( v34 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v92 = v34[6];
            v34[6] = v92 + 1;
            if ( v92 == -1 )
LABEL_209:
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v57 = v33->SchedulerAssist;
          if ( v57 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v93 = v57[6] - 1;
              v57[6] = v93;
              if ( !v93 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          do
            KeYieldProcessorEx(&v128, ThreadTimerDelay, v21, v15);
          while ( CurrentThread->ThreadLock );
          v58 = v33->SchedulerAssist;
          if ( v58 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v94 = v58[6];
              v58[6] = v94 + 1;
              if ( v94 == -1 )
                goto LABEL_209;
            }
          }
        }
        v35 = 0LL;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v22;
          CurrentThread->AbWaitObject = 0LL;
          if ( (*v23 & 7) == 1 )
          {
            *((_DWORD *)v23 + 1) = 0;
          }
          else if ( (*v23 & 0x7F) == 5 )
          {
            --*((_DWORD *)v23 + 1);
          }
        }
        v36 = (__int64)v116;
LABEL_44:
        _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
        goto LABEL_45;
      }
      ThreadTimerDelay = *((_QWORD *)v23 + 2);
      if ( *(char **)ThreadTimerDelay != v23 + 8 )
LABEL_52:
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = ThreadTimerDelay;
      *(_QWORD *)(p_BlockState - 17) = v23 + 8;
      *(_QWORD *)ThreadTimerDelay = p_BlockState - 17;
      *((_QWORD *)v23 + 2) = p_BlockState - 17;
      _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
      ++v22;
      p_BlockState += 48;
    }
    while ( v22 < Count );
    v24 = QuadPart;
    v25 = v114;
    v26 = QuadPart;
    if ( v114 != 2 )
      break;
    ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
    v45 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    v26 = QuadPart;
    if ( CurrentThread->WaitMode
      && !CurrentThread->WaitBlock[3].SpareLong
      && !CurrentThread->WaitIrql
      && !CurrentThread->ApcState.InProgressFlags
      && (_DWORD)ThreadTimerDelay )
    {
      v26 = QuadPart + ThreadTimerDelay;
    }
LABEL_55:
    if ( v45 > v26 )
      goto LABEL_81;
    v25 = v114;
LABEL_29:
    v27 = 0;
    CurrentThread->WaitBlockCount = Count;
    v28 = 0;
    v29 = 0LL;
    if ( v21 )
    {
      do
      {
        _BitScanForward64(&v69, v21);
        v70 = v69;
        v124[1] = v69;
        v118 = v21 & ~(1LL << v69);
        v71 = KeAbPreAcquire((ULONG_PTR)v20[v69]);
        v72 = v71;
        if ( !v71 )
          break;
        v29 |= 1LL << v70;
        KeAbPreWait(v71);
        v21 = v118;
        v20 = v115;
        v73 = v72 - *(_QWORD *)(v72 - 16LL * *(unsigned __int8 *)(v72 + 24) + 800);
        v74 = v28++;
        v134[v74] = (2
                   * (((((unsigned __int128)(v73 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                    + ((__int64)((unsigned __int128)(v73 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4))) | 1;
      }
      while ( v118 );
      CurrentThread = v132;
      v27 = 0;
      LODWORD(v24) = QuadPart;
      v25 = v114;
    }
    v30 = KiCommitThreadWait((_DWORD)CurrentThread, (_DWORD)WaitBlock, v25, v24, (__int64)&v130);
    v31 = v115;
    if ( v130 )
    {
      *(_QWORD *)&WaitType = 0LL;
      Object = (PVOID *)v29;
      if ( v29 )
      {
        while ( 1 )
        {
          _BitScanForward64((unsigned __int64 *)&WaitReason, (unsigned __int64)Object);
          Object = (PVOID *)((unsigned __int64)Object & ~(1LL << WaitReason));
          v124[2] = WaitReason;
          if ( v130 == v115[*(_QWORD *)&WaitReason] )
            break;
          *(_QWORD *)&WaitType = (unsigned int)(WaitType + 1);
          if ( !Object )
            goto LABEL_165;
        }
        v29 &= ~(1LL << WaitReason);
        v75 = (unsigned int)WaitType;
        v76 = &KeGetCurrentThread()->LockEntries[v134[WaitType] >> 1];
        KeAbPreAcquire((ULONG_PTR)v115[*(_QWORD *)&WaitReason]);
        v76->AcquiredByte |= 1u;
        if ( v75 >= 6 )
          _report_rangecheckfailure();
        v31 = v115;
        v134[v75] = 0;
        v27 = 0;
      }
LABEL_165:
      CurrentThread->AbWaitObject = 0LL;
    }
    for ( ; v29; ++v27 )
    {
      _BitScanForward64((unsigned __int64 *)&v77, v29);
      v124[3] = v77;
      v29 &= ~(1LL << v77);
      v119 = (unsigned int)v77;
      if ( !v134[v27] )
        ++v27;
      KeAbPreAcquire((ULONG_PTR)v31[(unsigned int)v77]);
      KeAbPostReleaseEx((ULONG_PTR)v115[v119]);
      v31 = v115;
    }
    if ( v30 != 256 )
      return v30;
    v113 = 0;
    v53 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v53 <= 0xFu )
    {
      *(_QWORD *)&WaitReason = KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitType = *(unsigned int *)(*(_QWORD *)&WaitReason + 20LL);
      Object = (PVOID *)(WaitType | ~((unsigned __int8)(1LL << (v53 + 1)) - 1) & 4u);
      *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL) = (_DWORD)Object;
    }
    CurrentThread->WaitIrql = v53;
  }
  if ( !v114 )
    goto LABEL_29;
  if ( QuadPart )
  {
    v45 = MEMORY[0xFFFFF78000000014];
    goto LABEL_55;
  }
LABEL_81:
  v48 = KeGetCurrentPrcb();
  v127 = 0;
  v49 = v48->SchedulerAssist;
  if ( v49 )
  {
    if ( v48->NestingLevel <= 1u )
    {
      v89 = v49[6];
      v49[6] = v89 + 1;
      if ( v89 == -1 )
LABEL_199:
        KiRemoveSystemWorkPriorityKick(v48);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v59 = v48->SchedulerAssist;
    if ( v59 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v90 = v59[6] - 1;
        v59[6] = v90;
        if ( !v90 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    do
      KeYieldProcessorEx(&v127, ThreadTimerDelay, v21, v24);
    while ( CurrentThread->ThreadLock );
    v60 = v48->SchedulerAssist;
    if ( v60 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v91 = v60[6];
        v60[6] = v91 + 1;
        if ( v91 == -1 )
          goto LABEL_199;
      }
    }
  }
  v36 = (__int64)v116;
  v35 = 0LL;
  if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
  {
    CurrentThread->WaitStatus = 258LL;
    CurrentThread->AbWaitObject = 0LL;
  }
LABEL_45:
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v37 = KeGetCurrentPrcb();
  v38 = (__int64)v37->SchedulerAssist;
  if ( v38 )
  {
    if ( v37->NestingLevel <= 1u )
    {
      v95 = *(_DWORD *)(v38 + 24) - 1;
      *(_DWORD *)(v38 + 24) = v95;
      if ( !v95 )
      {
        KiRemoveSystemWorkPriorityKick(v37);
        v35 = 0LL;
      }
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v96 = KeAbPreAcquire(AbWaitObject);
    if ( v96 )
      *(_BYTE *)(v96 + 26) |= 1u;
    v35 = 0LL;
  }
  if ( v22 )
  {
    v41 = &WaitBlock[(unsigned __int8)v22];
    do
    {
      if ( WaitBlock->BlockState < 5u )
      {
        v42 = (volatile signed __int32 *)WaitBlock->Object;
        KiAcquireKobjectLockSafe(v42);
        if ( WaitBlock->BlockState == 4 )
        {
          Flink = WaitBlock->WaitListEntry.Flink;
          Blink = WaitBlock->WaitListEntry.Blink;
          if ( (PKWAIT_BLOCK)WaitBlock->WaitListEntry.Flink->Blink != WaitBlock
            || (PKWAIT_BLOCK)Blink->Flink != WaitBlock )
          {
            goto LABEL_52;
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
        }
        _InterlockedAnd(v42, 0xFFFFFF7F);
      }
      ++WaitBlock;
    }
    while ( WaitBlock != v41 );
    v35 = 0LL;
  }
  v46 = CurrentThread->WaitIrql;
  v47.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v47.Flags & 0x38) == 0 )
  {
    if ( v113 )
    {
      KiCheckForThreadDispatch(v36, (unsigned __int8)v46);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v109 = KeGetCurrentIrql();
          if ( v109 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v109 >= 2u )
          {
            v110 = KeGetCurrentPrcb();
            v111 = v110->SchedulerAssist;
            v112 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v52 = (v112 & v111[5]) == 0;
            v111[5] &= v112;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v110);
          }
        }
      }
      __writecr8(v46);
    }
    return WaitStatus;
  }
  if ( (v47.Flags & 0x18) != 0 )
  {
    if ( (v47.Flags & 8) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
    v131 = 0LL;
    v97 = KeGetCurrentPrcb();
    v129 = 0;
    v98 = v97->SchedulerAssist;
    if ( v98 )
    {
      if ( v97->NestingLevel <= 1u )
      {
        v99 = v98[6];
        v98[6] = v99 + 1;
        if ( v99 == -1 )
LABEL_227:
          KiRemoveSystemWorkPriorityKick(v97);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 48), 0LL) )
    {
      v100 = v97->SchedulerAssist;
      if ( v100 )
      {
        if ( v97->NestingLevel <= 1u )
        {
          v101 = v100[6] - 1;
          v100[6] = v101;
          if ( !v101 )
            KiRemoveSystemWorkPriorityKick(v97);
        }
      }
      do
        KeYieldProcessorEx(&v129, v38, v21, v35);
      while ( *(_QWORD *)(v36 + 48) );
      v102 = v97->SchedulerAssist;
      if ( v102 )
      {
        if ( v97->NestingLevel <= 1u )
        {
          v103 = v102[6];
          v102[6] = v103 + 1;
          if ( v103 == -1 )
            goto LABEL_227;
        }
      }
    }
    if ( !*(_QWORD *)(v36 + 16) )
      KiSelectNextThread(v36, &v131, v21, v35);
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 48), 0LL);
    v104 = KeGetCurrentPrcb();
    v105 = v104->SchedulerAssist;
    if ( v105 )
    {
      if ( v104->NestingLevel <= 1u )
      {
        v106 = v105[6] - 1;
        v105[6] = v106;
        if ( !v106 )
          KiRemoveSystemWorkPriorityKick(v104);
      }
    }
    KiProcessDeferredReadyList(v36, (__int64)&v131, v46);
    return WaitStatus;
  }
  LOBYTE(v38) = 1;
  KiCheckForThreadDispatch(v36, v38);
  KiDeliverApc(0, 0, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v107 = KeGetCurrentPrcb();
      v108 = v107->SchedulerAssist;
      v52 = (v108[5] & 0xFFFF0001) == 0;
      v108[5] &= 0xFFFF0001;
      if ( v52 )
        KiRemoveSystemWorkPriorityKick(v107);
    }
  }
  __writecr8(0LL);
  return WaitStatus;
}
