/*
 * XREFs of PspExitThread @ 0x1407A0088
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1406C2560 (KiSchedulerApcTerminate.c)
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
 *     NtTerminateProcess @ 0x1407D7CA0 (NtTerminateProcess.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     ExTimerRundown @ 0x1402F0574 (ExTimerRundown.c)
 *     KiRundownMutants @ 0x1402F0604 (KiRundownMutants.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402F0880 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140310810 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x14035EB3C (KeForceResumeProcess.c)
 *     PopPowerRequestHandleClose @ 0x14036A100 (PopPowerRequestHandleClose.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x14056C058 (KeUnsecureThread.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     EtwTraceThread @ 0x1406F653C (EtwTraceThread.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x1406F8640 (PspCallThreadNotifyRoutines.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExWnfExitProcess @ 0x140791970 (ExWnfExitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     MmDeleteTeb @ 0x14079EE84 (MmDeleteTeb.c)
 *     KeRundownApcQueues @ 0x14079FBD4 (KeRundownApcQueues.c)
 *     IoCancelThreadIo @ 0x14079FC78 (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x14079FD44 (CmNotifyRunDown.c)
 *     PsCaptureExceptionPort @ 0x14079FFE8 (PsCaptureExceptionPort.c)
 *     PspTlsDataCleanup @ 0x1407A0818 (PspTlsDataCleanup.c)
 *     PspEmptyPropertySet @ 0x1407A08FC (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x1407A0920 (PspClearProcessThreadCidRefs.c)
 *     LpcRequestPort @ 0x1407A7CB0 (LpcRequestPort.c)
 *     PspExitProcess @ 0x1407DB734 (PspExitProcess.c)
 *     LpcExitProcess @ 0x1407E0CE4 (LpcExitProcess.c)
 *     DbgkExitProcess @ 0x14092A938 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14092A9F4 (DbgkExitThread.c)
 *     PspCatchCriticalBreak @ 0x1409B1558 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B16A8 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x1409C7C84 (SeAuditProcessExit.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  unsigned int v7; // ebx
  void *InitialStack; // r12
  void *v9; // rbx
  int v10; // eax
  LARGE_INTEGER v11; // rcx
  unsigned __int64 Teb; // rbx
  __int64 v13; // r8
  _DWORD *v14; // r9
  void *v15; // rcx
  __int16 v16; // ax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rcx
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v23; // r12
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  unsigned __int64 v26; // rbx
  void *v27; // rcx
  int v28; // eax
  void *v29; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _LIST_ENTRY *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-E8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-B8h] BYREF
  ULONG_PTR v36; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v37[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-88h]
  PVOID BaseAddress; // [rsp+70h] [rbp-78h] BYREF
  PVOID v40; // [rsp+78h] [rbp-70h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-68h]
  struct _KTHREAD *v42; // [rsp+88h] [rbp-60h]
  __int128 v43; // [rsp+90h] [rbp-58h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-48h] BYREF
  char v46; // [rsp+F8h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+100h] [rbp+18h] BYREF
  PVOID Object; // [rsp+108h] [rbp+20h]

  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (__int64)Process;
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
      v18 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v18 )
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
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestHandleClose(CurrentThread[1].ApcState.ApcListHead[1].Blink);
    ObfDereferenceObject(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v46 = 0;
  Object = 0LL;
  CurrentThread[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask[0] & 2) != 0 )
    EtwTraceThread((__int64)CurrentThread, 0LL, 0);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 2172) & 1) == 0 || *(_QWORD *)(v3 + 2240) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
  v6 = (volatile signed __int64 *)(v3 + 1080);
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
    v46 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v23 = *(_QWORD **)(v3 + 1504);
    if ( v23 != (_QWORD *)(v3 + 1504) )
    {
      v24 = (_QWORD *)(v3 + 1504);
      v25 = 0LL;
      do
      {
        if ( v23 - 167 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v23 - 1332) && ObReferenceObjectSafeWithTag((__int64)(v23 - 167)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v3 + 1080);
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v23 - 167, Executive, 0, 0, 0LL);
            if ( v25 )
              ObfDereferenceObjectWithTag(v25, 0x65547350u);
            v25 = v23 - 167;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v24 = (_QWORD *)(v3 + 1504);
        }
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v24 );
      Object = v25;
    }
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3 + 1080);
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v32 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v32 == (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v32[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v32 - 48) >> 8)] != PsJobType
      || (HIDWORD(v32[94].Blink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v32, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v32, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v46 )
    {
      v7 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 2004));
  }
  v7 = a1;
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
    LODWORD(Timeout) = v7;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
  }
  if ( v46 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v7;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v37[0] = 0x600300008LL;
    *((_QWORD *)&v38 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v28 = LpcRequestPort(*((_QWORD *)InitialStack + 1), v37);
        if ( v28 != -1073741801 && v28 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)InitialStack + 1));
      v29 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v29;
    }
    while ( v29 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v9 = PsCaptureExceptionPort(v3);
    if ( v9 )
    {
      *(_QWORD *)&v37[0] = 0x600300008LL;
      *((_QWORD *)&v38 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v10 = LpcRequestPort(v9, v37);
        if ( v10 != -1073741801 && v10 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v9);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v43 = CurrentThread;
    DWORD2(v43) = 1;
    PsInvokeWin32Callout(1, (__int64)&v43, 0, 0LL);
  }
  if ( v46 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v44 = v3;
    DWORD2(v44) = 0;
    PsInvokeWin32Callout(0, (__int64)&v44, 0, 0LL);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  PspTlsDataCleanup(CurrentThread, 0LL);
  IoCancelThreadIo(v11);
  ExTimerRundown();
  CmNotifyRunDown((__int64)CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Teb = (unsigned __int64)CurrentThread->Teb;
  Object = (PVOID)Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v33, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        BaseAddress = *(PVOID *)(Teb + 5240);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 1408) )
        {
          v16 = *(_WORD *)(v3 + 2412);
          if ( v16 == 332 || (v18 = v16 == 452, v17 = 0, v18) )
            v17 = 1;
          if ( v17 )
          {
            v40 = (PVOID)*(unsigned int *)(Teb + 11788);
            v36 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v40, &v36, 0x8000u);
          }
        }
      }
      v15 = *(void **)(Teb + 5800);
      if ( v15 )
        ObCloseHandle(v15, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb((_KPROCESS *)v3, Teb, v13, v14);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise(&CurrentThread[1].Header.WaitListHead.Flink);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v46 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    LOBYTE(v19) = 1;
    PspExitProcess(v19, v3);
    v26 = PsReferencePrimaryTokenWithTag(v3, 0x65547350u);
    if ( SeAuditingWithTokenForSubcategory(134, v26) )
      SeAuditProcessExit(v3, *(unsigned int *)(v3 + 2004));
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v26, 0x65547350u);
    ExWnfExitProcess(v3, 0);
    PspRundownSingleProcess(v3, 1);
    LpcExitProcess(v3);
    v27 = *(void **)(v3 + 2120);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(v3 + 2120) = 0LL;
    }
  }
  KeRundownApcQueues((__int64)CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  PspTlsDataCleanup(CurrentThread, 1LL);
  Thread = CurrentThread[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Thread = 0LL;
  }
  return KeTerminateThread((char *)CurrentThread);
}
