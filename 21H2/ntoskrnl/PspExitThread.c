/*
 * XREFs of PspExitThread @ 0x14063F658
 * Callers:
 *     KiSchedulerApcTerminate @ 0x140603230 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x1406B0E40 (NtTerminateProcess.c)
 *     PspTerminateThreadByPointer @ 0x1406B14D0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140225090 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KeQuerySystemTimeUnsafe @ 0x140266E68 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x140266EA0 (KeQuerySystemTimePrecise.c)
 *     ExTimerRundown @ 0x1402676E8 (ExTimerRundown.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     KeForceResumeProcess @ 0x14029BDA8 (KeForceResumeProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x1403FA940 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x1405136D8 (KeUnsecureThread.c)
 *     KeRundownApcQueues @ 0x14063FDC4 (KeRundownApcQueues.c)
 *     CmNotifyRunDown @ 0x140641570 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x1406417D0 (IoCancelThreadIo.c)
 *     PsCaptureExceptionPort @ 0x1406418C8 (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x140641968 (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x1406419A0 (PspClearProcessThreadCidRefs.c)
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 *     LpcExitProcess @ 0x14067DA88 (LpcExitProcess.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x140685020 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     ExWnfExitProcess @ 0x1406A293C (ExWnfExitProcess.c)
 *     LpcRequestPort @ 0x1406D3470 (LpcRequestPort.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     MmDeleteTeb @ 0x1407007B0 (MmDeleteTeb.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     DbgkExitProcess @ 0x140887B6C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140887C28 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x14090A9FC (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x14090B044 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090B188 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x14091E3A4 (SeAuditProcessExit.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  struct _DMA_ADAPTER *Blink; // rbx
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  void *InitialStack; // r12
  struct _DMA_ADAPTER *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char Reserved1; // al
  unsigned int *Teb; // rbx
  __int64 v22; // rax
  void *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rcx
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v29; // r12
  _QWORD *v30; // rax
  _QWORD *v31; // r15
  struct _DMA_ADAPTER *v32; // rbx
  void *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  void *v38; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v41; // zf
  struct _LIST_ENTRY *v42; // rbx
  signed __int32 v43[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR v46; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v47[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v48; // [rsp+60h] [rbp-98h]
  void *v49; // [rsp+70h] [rbp-88h]
  PVOID BaseAddress; // [rsp+78h] [rbp-80h] BYREF
  PVOID v51; // [rsp+80h] [rbp-78h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-70h]
  struct _KTHREAD *v53; // [rsp+90h] [rbp-68h]
  __int128 v54; // [rsp+98h] [rbp-60h] BYREF
  __int128 v55; // [rsp+A8h] [rbp-50h] BYREF
  char v57; // [rsp+108h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h]

  memset(v47, 0, sizeof(v47));
  v48 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(CurrentThread, *(_QWORD *)&CurrentThread[1].CurrentRunTime, CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v41 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v41 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].ApcState.ApcListHead[1].Flink )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].ApcState.ApcListHead[1].Flink, 0x79517350u);
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlockFill11[88]);
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread, v5, v6, v7);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = (struct _DMA_ADAPTER *)CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestCleanUp((unsigned int *)CurrentThread[1].ApcState.ApcListHead[1].Blink);
    HalPutDmaAdapter(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v57 = 0;
  Object = 0LL;
  CurrentThread[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(CurrentThread, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 2172) & 1) == 0 || *(_QWORD *)(v3 + 2240) )
    PspCallThreadNotifyRoutines(CurrentThread, 0LL);
  v9 = (volatile signed __int64 *)(v3 + 1080);
  ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
  if ( --*(_DWORD *)(v3 + 1520) )
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 1532) = a1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 1124), 0x2000008u);
    KeForceResumeProcess(v3);
    v57 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v29 = *(_QWORD **)(v3 + 1504);
    if ( v29 != (_QWORD *)(v3 + 1504) )
    {
      v30 = (_QWORD *)(v3 + 1504);
      v31 = 0LL;
      do
      {
        if ( v29 - 157 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v29 - 1252) && ObReferenceObjectSafeWithTag((__int64)(v29 - 157)) )
          {
            if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v3 + 1080);
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread, v34, v35, v36);
            KeWaitForSingleObject(v29 - 157, Executive, 0, 0, 0LL);
            if ( v31 )
              ObfDereferenceObjectWithTag(v31, 0x65547350u);
            v31 = v29 - 157;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v30 = (_QWORD *)(v3 + 1504);
        }
        v29 = (_QWORD *)*v29;
      }
      while ( v29 != v30 );
      Object = v31;
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3 + 1080);
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v42 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v42 == (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v42[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v42 - 48) >> 8)] != PsJobType
      || (HIDWORD(v42[82].Blink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v42, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v42, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v57 )
    {
      v13 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 2004));
  }
  v13 = a1;
LABEL_23:
  if ( (*(_BYTE *)(v3 + 992) & 1) != 0 )
  {
    MemoryDescriptorList = 0LL;
    if ( (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
    {
      MmUnlockPages(MemoryDescriptorList);
      ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0
    && (CurrentThread->Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v13;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
  }
  if ( v57 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v13;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v47[0] = 0x600300008LL;
    *((_QWORD *)&v48 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v37 = LpcRequestPort(*((_QWORD *)InitialStack + 1), v47);
        if ( v37 != -1073741801 && v37 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(*((PADAPTER_OBJECT *)InitialStack + 1));
      v38 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v38;
    }
    while ( v38 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v15 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort(v3);
    if ( v15 )
    {
      *(_QWORD *)&v47[0] = 0x600300008LL;
      *((_QWORD *)&v48 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v16 = LpcRequestPort(v15, v47);
        if ( v16 != -1073741801 && v16 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(v15);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v54 = CurrentThread;
    DWORD2(v54) = 1;
    PsInvokeWin32Callout(1LL, &v54, 0LL, 0LL);
  }
  if ( v57 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v55 = v3;
    DWORD2(v55) = 0;
    PsInvokeWin32Callout(0LL, &v55, 0LL, 0LL);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = (unsigned int *)CurrentThread->Teb;
  Object = Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v43, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v49 = (void *)*((_QWORD *)Teb + 655);
        BaseAddress = v49;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v22 = *(_QWORD *)(v3 + 1408);
        if ( v22 )
        {
          v24 = *(_WORD *)(v22 + 8);
          if ( v24 == 332 || v24 == 452 )
          {
            v51 = (PVOID)Teb[2947];
            v46 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v51, &v46, 0x8000u);
          }
        }
      }
      v23 = (void *)*((_QWORD *)Teb + 725);
      if ( v23 )
        ObCloseHandle(v23, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb(v3, Teb);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v57 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    LOBYTE(v25) = 1;
    PspExitProcess(v25, v3);
    v32 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v3);
    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(135LL) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v32);
    ExWnfExitProcess(v3, 0LL);
    PspRundownSingleProcess(v3);
    LpcExitProcess(v3);
    v33 = *(void **)(v3 + 2120);
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      *(_QWORD *)(v3 + 2120) = 0LL;
    }
  }
  KeRundownApcQueues(CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  Thread = CurrentThread[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Thread = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
