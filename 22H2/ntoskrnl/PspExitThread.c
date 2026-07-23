/*
 * XREFs of PspExitThread @ 0x1406C35F8
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1406886D0 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x140707430 (NtTerminateProcess.c)
 *     PspTerminateThreadByPointer @ 0x140707AC0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PspRevertContainerImpersonation @ 0x14021FAA0 (PspRevertContainerImpersonation.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C9130 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402FFA40 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14031C3B4 (ExfAcquireReleasePushLockExclusive.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     KeQuerySystemTimeUnsafe @ 0x140341ED8 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     ExTimerRundown @ 0x140342758 (ExTimerRundown.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     PopPowerRequestCleanUp @ 0x14034B808 (PopPowerRequestCleanUp.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     KeForceResumeProcess @ 0x14035BFB8 (KeForceResumeProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x1403F9DE0 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x1405133D8 (KeUnsecureThread.c)
 *     LpcRequestPort @ 0x1405E3D10 (LpcRequestPort.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140608B90 (SeAuditingWithTokenForSubcategory.c)
 *     ExWnfExitProcess @ 0x1406132EC (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140614288 (LpcExitProcess.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x14061B820 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x14062997C (EtwTraceThread.c)
 *     PspExitProcess @ 0x14062FC1C (PspExitProcess.c)
 *     MmDeleteTeb @ 0x140636AF0 (MmDeleteTeb.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     KeRundownApcQueues @ 0x1406C3D64 (KeRundownApcQueues.c)
 *     CmNotifyRunDown @ 0x1406C5510 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x1406C5770 (IoCancelThreadIo.c)
 *     PsCaptureExceptionPort @ 0x1406C5868 (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x1406C5908 (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x1406C5940 (PspClearProcessThreadCidRefs.c)
 *     DbgkExitProcess @ 0x140887A5C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140887B18 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x14090A8EC (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x14090AF34 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090B078 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x14091E294 (SeAuditProcessExit.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
  unsigned int v10; // ebx
  _QWORD *InitialStack; // r12
  struct _DMA_ADAPTER *v12; // rbx
  int v13; // eax
  char Reserved1; // al
  unsigned __int64 Teb; // rbx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rax
  void *v19; // rcx
  __int16 v20; // ax
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v24; // r12
  _QWORD *v25; // rax
  _QWORD *v26; // r15
  struct _DMA_ADAPTER *v27; // rbx
  void *v28; // rcx
  int v29; // eax
  _QWORD *v30; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v33; // zf
  struct _LIST_ENTRY *v34; // rbx
  signed __int32 v35[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR v38; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v39[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-98h]
  void *v41; // [rsp+70h] [rbp-88h]
  PVOID BaseAddress; // [rsp+78h] [rbp-80h] BYREF
  PVOID v43; // [rsp+80h] [rbp-78h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-70h]
  struct _KTHREAD *v45; // [rsp+90h] [rbp-68h]
  __int128 v46; // [rsp+98h] [rbp-60h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-50h] BYREF
  char v49; // [rsp+108h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h]

  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v45 = CurrentThread;
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
      v33 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v33 )
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
  v49 = 0;
  Object = 0LL;
  CurrentThread[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)CurrentThread, 0LL, 0);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 2172) & 1) == 0 || *(_QWORD *)(v3 + 2240) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
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
    v49 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v24 = *(_QWORD **)(v3 + 1504);
    if ( v24 != (_QWORD *)(v3 + 1504) )
    {
      v25 = (_QWORD *)(v3 + 1504);
      v26 = 0LL;
      do
      {
        if ( v24 - 157 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v24 - 1252) && ObReferenceObjectSafeWithTag((__int64)(v24 - 157)) )
          {
            if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v24 - 157, Executive, 0, 0, 0LL);
            if ( v26 )
              ObfDereferenceObjectWithTag(v26, 0x65547350u);
            v26 = v24 - 157;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v25 = (_QWORD *)(v3 + 1504);
        }
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v25 );
      Object = v26;
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v34 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v34 == (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v34[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v34 - 48) >> 8)] != PsJobType
      || (HIDWORD(v34[82].Blink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v34, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v34, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v49 )
    {
      v10 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 2004));
  }
  v10 = a1;
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
    LODWORD(Timeout) = v10;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
  }
  if ( v49 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v10;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v39[0] = 0x600300008LL;
    *((_QWORD *)&v40 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v29 = LpcRequestPort(InitialStack[1], (__int64)v39);
        if ( v29 != -1073741801 && v29 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)InitialStack[1]);
      v30 = (_QWORD *)*InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v30;
    }
    while ( v30 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v12 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort(v3);
    if ( v12 )
    {
      *(_QWORD *)&v39[0] = 0x600300008LL;
      *((_QWORD *)&v40 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v13 = LpcRequestPort((__int64)v12, (__int64)v39);
        if ( v13 != -1073741801 && v13 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(v12);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v46 = CurrentThread;
    DWORD2(v46) = 1;
    PsInvokeWin32Callout(1, (__int64)&v46, 0, 0LL);
  }
  if ( v49 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v47 = v3;
    DWORD2(v47) = 0;
    PsInvokeWin32Callout(0, (__int64)&v47, 0, 0LL);
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
  Teb = (unsigned __int64)CurrentThread->Teb;
  Object = (PVOID)Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v35, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v41 = *(void **)(Teb + 5240);
        BaseAddress = v41;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v18 = *(_QWORD *)(v3 + 1408);
        if ( v18 )
        {
          v20 = *(_WORD *)(v18 + 8);
          if ( v20 == 332 || v20 == 452 )
          {
            v43 = (PVOID)*(unsigned int *)(Teb + 11788);
            v38 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v43, &v38, 0x8000u);
          }
        }
      }
      v19 = *(void **)(Teb + 5800);
      if ( v19 )
        ObCloseHandle(v19, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb((_KPROCESS *)v3, Teb, v16, v17);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v49 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    PspExitProcess(1, v3);
    v27 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v3);
    if ( SeAuditingWithTokenForSubcategory(135, (__int64)v27) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v27);
    ExWnfExitProcess(v3, 0);
    PspRundownSingleProcess(v3, 1);
    LpcExitProcess((struct _KPROCESS *)v3);
    v28 = *(void **)(v3 + 2120);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
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
