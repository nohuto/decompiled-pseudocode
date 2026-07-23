/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x140203110
 * Callers:
 *     <none>
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140202DC8 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x140202ED8 (KeRegisterObjectNotification.c)
 *     IoRemoveIoCompletion @ 0x140204390 (IoRemoveIoCompletion.c)
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242860 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KeReleaseSemaphoreEx @ 0x140262770 (KeReleaseSemaphoreEx.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiReleaseKobjectLock @ 0x1402F1D10 (KiReleaseKobjectLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x140304AE4 (AlpcpQueueIoCompletionPort.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140317ADC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14031A0D0 (ExpWorkerFactoryWantsToCreate.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 *     AlpciDestroyDeferredMessageContext @ 0x1405E4110 (AlpciDestroyDeferredMessageContext.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     NtAlpcSendWaitReceivePort @ 0x1405E79F0 (NtAlpcSendWaitReceivePort.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407D4E30 (ExSystemExceptionFilter.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v5; // r15d
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rcx
  int v9; // r14d
  PVOID v10; // rbx
  unsigned __int64 *v11; // rbx
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  ULONG *v25; // rsi
  ULONG *v26; // rcx
  PULONG v27; // rdi
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  HANDLE v37; // r15
  ULONG v38; // edi
  HANDLE v39; // rcx
  struct _KTHREAD *v40; // rax
  unsigned int v41; // edi
  signed __int32 v42; // esi
  char *v43; // rbx
  struct _KEVENT *v44; // rcx
  int v45; // r9d
  __int64 v46; // r13
  __int64 v47; // rbx
  _DWORD *v48; // r9
  struct _KPRCB *v49; // r10
  int v50; // eax
  int v51; // ecx
  _QWORD *v52; // rax
  int v53; // ebx
  _QWORD *v54; // r12
  __int64 v55; // rax
  _QWORD *v56; // rcx
  char v57; // al
  __int64 v58; // r14
  __int64 v59; // rsi
  char v60; // di
  struct _KPRCB *v61; // rbx
  _DWORD *v62; // rcx
  int v63; // eax
  _DWORD *v64; // rcx
  int v65; // eax
  char v66; // al
  int v67; // ecx
  struct _KPRCB *v68; // rcx
  _DWORD *v69; // rdx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rdi
  struct _KPRCB *v73; // rbx
  _DWORD *v74; // rcx
  int v75; // eax
  _DWORD *v76; // rcx
  int v77; // eax
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rdx
  int v82; // eax
  char v83; // al
  __int64 v84; // rcx
  __int64 v85; // rbx
  _QWORD *v86; // rsi
  char v87; // r15
  unsigned __int8 v88; // cl
  _DWORD *v89; // r9
  struct _KPRCB *v90; // r14
  _KTHREAD *v91; // rdi
  unsigned __int8 IsThreadRunning; // al
  int v93; // r8d
  _QWORD *v94; // rdx
  struct _KTHREAD *v95; // rcx
  _QWORD *v96; // rbx
  unsigned __int64 *v97; // rbx
  unsigned __int8 v98; // r10
  _DWORD *v99; // r9
  struct _KPRCB *v100; // rcx
  _DWORD *v101; // rdx
  int v102; // eax
  char v103; // al
  int *v104; // rdi
  struct _KTHREAD *v105; // r15
  unsigned int v106; // ecx
  _QWORD *v107; // rbx
  struct _KTHREAD **v108; // rax
  __int64 v109; // rax
  unsigned int v110; // edi
  PVOID *v111; // rbx
  int v112; // ecx
  __int64 v113; // rbx
  int v114; // edx
  _KSPIN_LOCK_QUEUE *volatile v115; // rax
  struct _KPRCB *v116; // rcx
  _DWORD *v117; // rdx
  int v118; // eax
  unsigned __int64 v119; // rbx
  unsigned __int8 v120; // al
  struct _KPRCB *v121; // r9
  _DWORD *v122; // r8
  int v123; // eax
  unsigned __int8 v125; // al
  struct _KPRCB *v126; // r9
  _DWORD *v127; // r8
  int v128; // eax
  int HandleInformation; // [rsp+28h] [rbp-200h]
  int Timeout; // [rsp+38h] [rbp-1F0h]
  unsigned __int8 v131; // [rsp+40h] [rbp-1E8h]
  struct _KPRCB *v132; // [rsp+48h] [rbp-1E0h]
  ULONG v133; // [rsp+50h] [rbp-1D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD *v135; // [rsp+70h] [rbp-1B8h]
  ULONG v136; // [rsp+78h] [rbp-1B0h] BYREF
  PULONG v137; // [rsp+80h] [rbp-1A8h]
  PVOID Object; // [rsp+88h] [rbp-1A0h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v139; // [rsp+90h] [rbp-198h]
  PVOID v140; // [rsp+98h] [rbp-190h] BYREF
  int *v141; // [rsp+A0h] [rbp-188h]
  PULONG v142; // [rsp+A8h] [rbp-180h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-178h]
  __int128 v144; // [rsp+B8h] [rbp-170h] BYREF
  HANDLE Handle[2]; // [rsp+C8h] [rbp-160h]
  ULONG Flags[2]; // [rsp+D8h] [rbp-150h]
  int v147; // [rsp+E0h] [rbp-148h] BYREF
  int v148; // [rsp+E4h] [rbp-144h] BYREF
  int v149; // [rsp+E8h] [rbp-140h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v150; // [rsp+F0h] [rbp-138h]
  PVOID v151; // [rsp+F8h] [rbp-130h]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+100h] [rbp-128h] BYREF
  __int128 v153; // [rsp+110h] [rbp-118h]
  __int128 v154; // [rsp+120h] [rbp-108h]
  __int128 v155; // [rsp+130h] [rbp-F8h]
  _QWORD *v156; // [rsp+140h] [rbp-E8h]
  __int64 v157; // [rsp+148h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-D8h]
  _OWORD v159[8]; // [rsp+160h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+228h] [rbp+0h]

  v142 = PacketsReturned;
  v5 = Count;
  v133 = Count;
  v150 = MiniPackets;
  v141 = (int *)WorkerFactoryHandle;
  v139 = MiniPackets;
  v137 = PacketsReturned;
  v144 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *(_QWORD *)Flags = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v159, 0, sizeof(v159));
  v136 = 0;
  v151 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v131 = PreviousMode;
  BugCheckParameter2 = (ULONG_PTR)v159;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v9 = -1073741811;
    goto LABEL_249;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v8 = (__int64)v142;
    if ( (unsigned __int64)v142 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v10 = Object;
  v135 = Object;
  v151 = Object;
  if ( v9 < 0 )
    goto LABEL_249;
  if ( v5 > 0x10 )
  {
    BugCheckParameter2 = (ULONG_PTR)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v5, 0x656E6F4Eu);
    if ( !BugCheckParameter2 )
    {
      v5 = 16;
      v133 = 16;
      BugCheckParameter2 = (ULONG_PTR)v159;
    }
  }
  v11 = (unsigned __int64 *)*((_QWORD *)v10 + 2);
  LockHandle.LockQueue.Lock = v11;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = CurrentPrcb->SchedulerAssist;
  if ( v15 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v16 = v15[6];
      v15[6] = v16 + 1;
      if ( v16 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v17 = v135;
  v18 = v135[2];
  if ( *(_BYTE *)(v18 + 33) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(OldIrql);
    v9 = 128;
    goto LABEL_249;
  }
  v25 = (ULONG *)Object;
  v141 = (int *)((char *)Object + 312);
  if ( (*((_DWORD *)Object + 78) & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode((char *)Object);
    v17 = v135;
    v18 = v135[2];
  }
  ++*(_DWORD *)(v18 + 28);
  v26 = v25 + 71;
  v139 = (PFILE_IO_COMPLETION_INFORMATION)(v25 + 71);
  v27 = v25 + 72;
  v137 = v25 + 72;
  while ( *v26 >= *v27 && !*(_BYTE *)(v17[2] + 33LL) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_47;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_47:
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
      }
    }
    v29 = KeGetCurrentPrcb();
    v30 = v29->SchedulerAssist;
    if ( v30 )
    {
      if ( v29->NestingLevel <= 1u )
      {
        v31 = v30[6] - 1;
        v30[6] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    v32 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(v32);
    if ( (Flags[1] & 1) != 0 )
    {
      v37 = Handle[0];
      v38 = Flags[0];
      v39 = Handle[1];
      *(_OWORD *)DmaAdapter = 0LL;
      v153 = 0LL;
      v154 = 0LL;
      v155 = 0LL;
      v40 = KeGetCurrentThread();
      --v40->KernelApcDisable;
      v144 = 0LL;
      v41 = v38 & 0xFFFF0000;
      if ( (v41 & 0x20000) != 0 )
        goto LABEL_184;
      v140 = 0LL;
      if ( ObReferenceObjectByHandle(v39, 1u, AlpcPortObjectType, v131, &v140, 0LL) < 0 )
        goto LABEL_184;
      if ( (v41 & 0x40000) == 0 )
        goto LABEL_70;
      v42 = _InterlockedIncrement((volatile signed __int32 *)v140 + 101);
      v43 = (char *)v140;
      if ( *((_QWORD *)v140 + 51) )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v140 + 352, 0LL);
        v44 = (struct _KEVENT *)*((_QWORD *)v43 + 51);
        if ( v44 && v42 == v44[1].Header.LockNV )
          KeSetEvent(v44, 0, 0);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43 + 352);
        KeAbPostRelease((ULONG_PTR)(v43 + 352));
LABEL_70:
        v43 = (char *)v140;
      }
      DmaAdapter[0] = (PADAPTER_OBJECT)v43;
      LODWORD(v155) = v41 | 4;
      v154 = 0uLL;
      *((_QWORD *)&v153 + 1) = 0LL;
      if ( (int)AlpcpSendMessage(DmaAdapter, v37, 0LL, v131) < 0 )
      {
        HalPutDmaAdapter(DmaAdapter[0]);
LABEL_184:
        v95 = KeGetCurrentThread();
        v24 = v95->KernelApcDisable++ == -1;
        if ( v24
          && ($C459BD0D405E8E46662177FB3D0A143F *)v95->ApcState.ApcListHead[0].Flink != &v95->152
          && !v95->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v27 = v137;
        v5 = v133;
        goto LABEL_189;
      }
      *(_QWORD *)&v144 = v154;
      *((PADAPTER_OBJECT *)&v144 + 1) = DmaAdapter[0];
      if ( (_QWORD)v154 )
      {
        if ( BYTE10(v155) )
          AlpcpQueueIoCompletionPort(v154, BYTE11(v155), 1LL);
        else
          KeReleaseSemaphoreEx(*(_QWORD *)(v154 + 248), 1, 1, v45, 1);
        goto LABEL_184;
      }
      if ( !*((_QWORD *)&v153 + 1) )
      {
        if ( (BYTE8(v154) & 1) != 0 )
        {
          if ( (*((_QWORD *)&v154 + 1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            KeSetEvent((PRKEVENT)(*((_QWORD *)&v154 + 1) & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
            if ( (BYTE8(v154) & 2) != 0 )
              HalPutDmaAdapter((PADAPTER_OBJECT)(*((_QWORD *)&v154 + 1) & 0xFFFFFFFFFFFFFFFCuLL));
          }
          *((_QWORD *)&v154 + 1) = 0LL;
        }
        goto LABEL_184;
      }
      v46 = *((_QWORD *)&v153 + 1) + 1160LL;
      v47 = KeGetCurrentIrql();
      v157 = v47;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v47 <= 0xFu )
      {
        v48 = KeGetCurrentPrcb()->SchedulerAssist;
        v48[5] |= (-1 << (v47 + 1)) & 4;
      }
      v49 = KeGetCurrentPrcb();
      v132 = v49;
      v147 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v46, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v147);
          while ( (*(_DWORD *)v46 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v46, 7u) );
        v49 = v132;
      }
      v50 = *(_DWORD *)(v46 + 4);
      v51 = v50 + 1;
      if ( v50 + 1 > *(_DWORD *)(v46 + 24) || v51 < v50 )
      {
        KiReleaseKobjectLock(v46);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v125 = KeGetCurrentIrql();
            if ( v125 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v125 >= 2u )
            {
              v126 = KeGetCurrentPrcb();
              v127 = v126->SchedulerAssist;
              v128 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
              v24 = (v128 & v127[5]) == 0;
              v127[5] &= v128;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v126);
            }
          }
        }
        __writecr8((unsigned __int8)v47);
        RtlRaiseStatus(-1073741753);
      }
      *(_DWORD *)(v46 + 4) = v51;
      if ( v50 || (v52 = *(_QWORD **)(v46 + 8), v52 == (_QWORD *)(v46 + 8)) )
      {
        v53 = (int)v132;
LABEL_91:
        _InterlockedAnd((volatile signed __int32 *)v46, 0xFFFFFF7F);
        KiExitDispatcher(v53, 1, 1, 1, v157);
        goto LABEL_184;
      }
      while ( 2 )
      {
        v54 = v52;
        v55 = *v52;
        v156 = (_QWORD *)v55;
        v56 = (_QWORD *)v54[1];
        if ( *(_QWORD **)(v55 + 8) != v54 || (_QWORD *)*v56 != v54 )
LABEL_208:
          __fastfail(3u);
        *v56 = v55;
        *(_QWORD *)(v55 + 8) = v56;
        v57 = *((_BYTE *)v54 + 16);
        if ( v57 == 1 )
        {
          v58 = *((unsigned __int16 *)v54 + 9);
          v59 = v54[3];
          v60 = 0;
          v61 = KeGetCurrentPrcb();
          v148 = 0;
          while ( 1 )
          {
            v62 = v61->SchedulerAssist;
            if ( v62 )
            {
              if ( v61->NestingLevel <= 1u )
              {
                v63 = v62[6];
                v62[6] = v63 + 1;
                if ( v63 == -1 )
                  KiRemoveSystemWorkPriorityKick(v61);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v59 + 64), 0LL) )
              break;
            v64 = v61->SchedulerAssist;
            if ( v64 )
            {
              if ( v61->NestingLevel <= 1u )
              {
                v65 = v64[6] - 1;
                v64[6] = v65;
                if ( !v65 )
                  KiRemoveSystemWorkPriorityKick(v61);
              }
            }
            do
              KeYieldProcessorEx(&v148);
            while ( *(_QWORD *)(v59 + 64) );
          }
          if ( *(_BYTE *)(v59 + 388) == 5 )
          {
            v66 = *(_BYTE *)(v59 + 112);
            v67 = v66 & 7;
            if ( v67 == 1 || v67 == 4 )
            {
              v71 = *(_QWORD *)(v59 + 232);
              if ( v71 )
              {
                if ( (*(_BYTE *)v71 & 0x7F) == 0x15 )
                {
                  *(_DWORD *)(v59 + 540) = (unsigned __int8)*(_DWORD *)(v59 + 540);
                  _InterlockedIncrement((volatile signed __int32 *)(v71 + 4LL * *(unsigned int *)(v59 + 540) + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v71 + 40));
                }
              }
              v72 = *(_QWORD *)(v59 + 712);
              if ( v72 )
              {
                v73 = KeGetCurrentPrcb();
                v149 = 0;
                while ( 1 )
                {
                  v74 = v73->SchedulerAssist;
                  if ( v74 )
                  {
                    if ( v73->NestingLevel <= 1u )
                    {
                      v75 = v74[6];
                      v74[6] = v75 + 1;
                      if ( v75 == -1 )
                        KiRemoveSystemWorkPriorityKick(v73);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v72 + 31760), 0LL) )
                    break;
                  v76 = v73->SchedulerAssist;
                  if ( v76 )
                  {
                    if ( v73->NestingLevel <= 1u )
                    {
                      v77 = v76[6] - 1;
                      v76[6] = v77;
                      if ( !v77 )
                        KiRemoveSystemWorkPriorityKick(v73);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v149);
                  while ( *(_QWORD *)(v72 + 31760) );
                }
                if ( *(_QWORD *)(v59 + 712) )
                {
                  v78 = *(_QWORD *)(v59 + 216);
                  v79 = *(_QWORD **)(v59 + 224);
                  if ( *(_QWORD *)(v78 + 8) != v59 + 216 || *v79 != v59 + 216 )
                    goto LABEL_208;
                  *v79 = v78;
                  *(_QWORD *)(v78 + 8) = v79;
                  *(_QWORD *)(v59 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v72 + 31760), 0LL);
                v80 = KeGetCurrentPrcb();
                v81 = v80->SchedulerAssist;
                if ( v81 )
                {
                  if ( v80->NestingLevel <= 1u )
                  {
                    v82 = v81[6] - 1;
                    v81[6] = v82;
                    if ( !v82 )
                      KiRemoveSystemWorkPriorityKick(v80);
                  }
                }
              }
              v83 = *(_BYTE *)(v59 + 388);
              if ( v83 == 1 )
                *(_DWORD *)(v59 + 116) |= 2u;
              if ( v83 == 5 )
              {
                v84 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v59 + 436));
                if ( *(_BYTE *)(v59 + 391) )
                  *(_QWORD *)(v59 + 1000) += v84;
                else
                  *(_QWORD *)(v59 + 992) += v84;
              }
              *(_BYTE *)(v59 + 388) = 7;
              v53 = (int)v132;
              *(_QWORD *)(v59 + 216) = v132->DeferredReadyListHead.Next;
              v132->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v59 + 216);
              *(_QWORD *)(v59 + 200) = v58;
              *(_QWORD *)(v59 + 976) = 0LL;
              v60 = 1;
            }
            else
            {
              if ( (*(_BYTE *)(v59 + 112) & 7) == 0 )
              {
                *(_BYTE *)(v59 + 112) = v66 & 0xF8 | 2;
                *(_QWORD *)(v59 + 200) = v58;
                *(_QWORD *)(v59 + 976) = 0LL;
                v60 = 1;
                *((_BYTE *)v54 + 17) = 0;
                goto LABEL_113;
              }
              if ( v67 == 5 )
              {
                *(_BYTE *)(v59 + 112) = v66 & 0xF8 | 6;
                goto LABEL_113;
              }
              v53 = (int)v132;
              if ( v67 == 3 )
                *((_BYTE *)v54 + 17) = 2;
            }
          }
          else
          {
LABEL_113:
            v53 = (int)v132;
          }
          *(_QWORD *)(v59 + 64) = 0LL;
          v68 = KeGetCurrentPrcb();
          v69 = v68->SchedulerAssist;
          if ( v69 )
          {
            if ( v68->NestingLevel <= 1u )
            {
              v70 = v69[6] - 1;
              v69[6] = v70;
              if ( !v70 )
                KiRemoveSystemWorkPriorityKick(v68);
            }
          }
          ++*((_BYTE *)v54 + 17);
          if ( v60 )
          {
            v24 = (*(_DWORD *)(v46 + 4))-- == 1;
            if ( v24 )
              goto LABEL_91;
          }
        }
        else if ( v57 == 2 )
        {
          *((_BYTE *)v54 + 17) = 5;
          v85 = v54[3];
          *v54 = 0LL;
          v86 = (_QWORD *)(v85 + 8);
          v87 = 0;
          v88 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v88 <= 0xFu )
          {
            v89 = KeGetCurrentPrcb()->SchedulerAssist;
            v89[5] |= (-1 << (v88 + 1)) & 4;
          }
          v90 = KeGetCurrentPrcb();
          v91 = v90->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v90->CurrentThread);
            EtwTraceEnqueueWork(v91, v54, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v85);
          if ( (_QWORD *)*v86 != v86
            && *(_DWORD *)(v85 + 40) < *(_DWORD *)(v85 + 44)
            && (v91->Queue != (_DISPATCHER_HEADER *volatile)v85 || v91->WaitReason != 15) )
          {
            v87 = KiWakeQueueWaiter(v90, v85, v54);
          }
          if ( !v87 )
          {
            v93 = *(_DWORD *)(v85 + 4);
            *(_DWORD *)(v85 + 4) = v93 + 1;
            v94 = *(_QWORD **)(v85 + 32);
            if ( *v94 != v85 + 24 )
              goto LABEL_208;
            *v54 = v85 + 24;
            v54[1] = v94;
            *v94 = v54;
            *(_QWORD *)(v85 + 32) = v54;
            if ( !v93 && (_QWORD *)*v86 != v86 )
              KiWakeOtherQueueWaiters(v90, v85);
          }
          _InterlockedAnd((volatile signed __int32 *)v85, 0xFFFFFF7F);
          v24 = (*(_DWORD *)(v46 + 4))-- == 1;
          v53 = (int)v132;
          if ( v24 )
            goto LABEL_91;
        }
        else
        {
          KiTryUnwaitThread(v49, v54, 256LL, 0LL);
          v53 = (int)v132;
        }
        v52 = v156;
        if ( v156 == (_QWORD *)(v46 + 8) )
          goto LABEL_91;
        v49 = v132;
        continue;
      }
    }
LABEL_189:
    v96 = v135;
    LOBYTE(Timeout) = 1;
    LOBYTE(HandleInformation) = v131;
    v9 = IoRemoveIoCompletion(
           *(_QWORD *)(v135[2] + 8LL),
           v150,
           BugCheckParameter2,
           v5,
           &v136,
           HandleInformation,
           0LL,
           Timeout);
    if ( (Flags[1] & 1) != 0 )
    {
      AlpciDestroyDeferredMessageContext(&v144);
      Flags[1] &= ~1u;
    }
    v97 = (unsigned __int64 *)v96[2];
    LockHandle.LockQueue.Lock = v97;
    LockHandle.LockQueue.Next = 0LL;
    v98 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v98 <= 0xFu )
    {
      v99 = KeGetCurrentPrcb()->SchedulerAssist;
      v99[5] |= (-1 << (v98 + 1)) & 4;
    }
    LockHandle.OldIrql = v98;
    v100 = KeGetCurrentPrcb();
    v101 = v100->SchedulerAssist;
    if ( v101 )
    {
      if ( v100->NestingLevel <= 1u )
      {
        v102 = v101[6];
        v101[6] = v102 + 1;
        if ( v102 == -1 )
          KiRemoveSystemWorkPriorityKick(v100);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v97);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v97, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v25 = (ULONG *)Object;
    if ( v9 != 258 )
      goto LABEL_210;
    v103 = ExpWorkerFactoryWantsToCreate(Object, 1LL);
    v26 = (ULONG *)v139;
    if ( !v103
      && *v27 > v25[70]
      && *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    {
      goto LABEL_210;
    }
    v17 = v135;
  }
  v9 = 258;
LABEL_210:
  --*(_DWORD *)(v135[2] + 28LL);
  if ( v9 == 258 )
  {
    --*v27;
    --v25[73];
    ExpRemoveCurrentThreadFromThreadHistory(v25);
    v104 = v141;
  }
  else
  {
    v104 = v141;
    if ( (*v141 & 7) != 4 )
    {
      v105 = KeGetCurrentThread();
      v106 = 0;
      v25 = (ULONG *)Object;
      v107 = (char *)Object + 72;
      v108 = (struct _KTHREAD **)((char *)Object + 72);
      while ( *v108 != v105 )
      {
        ++v106;
        ++v108;
        if ( v106 >= 4 )
        {
          ObfReferenceObjectWithTag(v105, 0x746C6644u);
          v109 = 0LL;
          while ( *v107 )
          {
            v109 = (unsigned int)(v109 + 1);
            ++v107;
            if ( (unsigned int)v109 >= 4 )
            {
              v110 = *v104 & 7;
              v111 = (PVOID *)&v25[2 * v110];
              ObfDereferenceObjectWithTag(v111[9], 0x746C6644u);
              v111[9] = v105;
              v112 = ((_BYTE)v110 + 1) & 3;
              v104 = v141;
              *v141 = *v141 & 0xFFFFFFF8 | v112;
              goto LABEL_221;
            }
          }
          *(_QWORD *)&v25[2 * v109 + 18] = v105;
          break;
        }
      }
    }
  }
LABEL_221:
  v113 = v135[2];
  if ( *v137 >= LODWORD(v139->KeyContext) || *(_DWORD *)(v113 + 28) )
  {
LABEL_227:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_234;
    }
    _m_prefetchw(&LockHandle);
    v115 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_234;
      v115 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v115->Lock, 1uLL);
LABEL_234:
    v116 = KeGetCurrentPrcb();
    v117 = v116->SchedulerAssist;
    if ( v117 )
    {
      if ( v116->NestingLevel <= 1u )
      {
        v118 = v117[6] - 1;
        v117[6] = v118;
        if ( !v118 )
          KiRemoveSystemWorkPriorityKick(v116);
      }
    }
    v119 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v120 = KeGetCurrentIrql();
        if ( v120 <= 0xFu && LockHandle.OldIrql <= 0xFu && v120 >= 2u )
        {
          v121 = KeGetCurrentPrcb();
          v122 = v121->SchedulerAssist;
          v123 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v123 & v122[5]) == 0;
          v122[5] &= v123;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v121);
        }
      }
    }
    __writecr8(v119);
    goto LABEL_246;
  }
  if ( v25[77] )
  {
    v114 = *v104 | 0x200;
    *v104 = v114;
    if ( !*(_DWORD *)(*(_QWORD *)(v113 + 8) + 4LL) )
    {
      if ( (v114 & 0x400) == 0 )
      {
        *v104 = v114 | 0x400;
        ObfReferenceObjectWithTag(v25, 0x746C6644u);
        KeRegisterObjectNotification(
          *(_QWORD *)(v113 + 8),
          (__int64)&ExpWorkerFactoryManagerQueue,
          (__int64)(v25 + 130));
      }
      goto LABEL_227;
    }
  }
  ExpWorkerFactoryCheckCreate(v25, &LockHandle);
LABEL_246:
  if ( !v9 )
    *v142 = v136;
LABEL_249:
  if ( (_OWORD *)BugCheckParameter2 != v159 )
    ExFreeHeapPool(BugCheckParameter2);
  if ( v151 )
    ObfDereferenceObjectWithTag(v151, 0x746C6644u);
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v9;
}
