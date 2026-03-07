struct _KPRCB *__fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  unsigned int v7; // ebx
  void *InitialStack; // r12
  _DWORD *v9; // r13
  void *v10; // rbx
  int v11; // eax
  char v12; // r12
  unsigned __int64 Teb; // rbx
  void *v14; // rcx
  __int16 v15; // ax
  char v16; // al
  bool v17; // zf
  __int64 v18; // rcx
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  ULONG_PTR v25; // rbx
  void *v26; // rcx
  int v27; // eax
  void *v28; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _LIST_ENTRY *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR v36; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v37[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-98h]
  PVOID BaseAddress; // [rsp+70h] [rbp-88h] BYREF
  PVOID v40; // [rsp+78h] [rbp-80h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-78h]
  struct _KTHREAD *v42; // [rsp+88h] [rbp-70h]
  char *v43; // [rsp+90h] [rbp-68h]
  __int128 v44; // [rsp+98h] [rbp-60h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-50h] BYREF
  char v47; // [rsp+108h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h]

  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(
    (__int64)CurrentThread,
    *(_QWORD *)&CurrentThread[1].CurrentRunTime,
    (ULONG_PTR)CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v17 )
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
  v47 = 0;
  Object = 0LL;
  CurrentThread[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask[0] & 2) != 0 )
    EtwTraceThread(CurrentThread, 0LL, 0LL);
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
    v47 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v22 = *(_QWORD **)(v3 + 1504);
    if ( v22 != (_QWORD *)(v3 + 1504) )
    {
      v23 = (_QWORD *)(v3 + 1504);
      v24 = 0LL;
      do
      {
        if ( v22 - 167 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v22 - 1332) && ObReferenceObjectSafeWithTag((__int64)(v22 - 167)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v22 - 167, Executive, 0, 0, 0LL);
            if ( v24 )
              ObfDereferenceObjectWithTag(v24, 0x65547350u);
            v24 = v22 - 167;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v23 = (_QWORD *)(v3 + 1504);
        }
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v23 );
      Object = v24;
    }
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v32 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v32 == (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v32[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v32 - 48) >> 8)] != PsJobType
      || (HIDWORD(v32[96].Flink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v32, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v32, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v47 )
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
  if ( v47 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
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
        v27 = LpcRequestPort(*((_QWORD *)InitialStack + 1), v37);
        if ( v27 != -1073741801 && v27 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)InitialStack + 1));
      v28 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v28;
    }
    while ( v28 );
  }
  v9 = &CurrentThread[1].SwapListEntry + 1;
  v43 = (char *)(&CurrentThread[1].SwapListEntry + 1);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v10 = (void *)PsCaptureExceptionPort(v3);
    if ( v10 )
    {
      *(_QWORD *)&v37[0] = 0x600300008LL;
      *((_QWORD *)&v38 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v11 = LpcRequestPort(v10, v37);
        if ( v11 != -1073741801 && v11 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v10);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v44 = CurrentThread;
    DWORD2(v44) = 1;
    PsInvokeWin32Callout(1, (__int64)&v44, 0, 0LL);
  }
  v12 = v47;
  if ( v47 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v45 = v3;
    DWORD2(v45) = 0;
    PsInvokeWin32Callout(0, (__int64)&v45, 0, 0LL);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  PspTlsDataCleanup(CurrentThread, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
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
    MemoryDescriptorList = (PMDL)&CurrentThread->116;
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*v9 & 2) != 0 )
      {
        BaseAddress = *(PVOID *)(Teb + 5240);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 1408) )
        {
          v15 = *(_WORD *)(v3 + 2412);
          if ( v15 == 332 || (v17 = v15 == 452, v16 = 0, v17) )
            v16 = 1;
          if ( v16 )
          {
            v40 = (PVOID)*(unsigned int *)(Teb + 11788);
            v36 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v40, &v36, 0x8000u);
          }
        }
      }
      v14 = *(void **)(Teb + 5800);
      if ( v14 )
        ObCloseHandle(v14, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*v9 & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb((struct _KPROCESS *)v3, Teb);
    }
    v12 = v47;
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise(&CurrentThread[1].Header.WaitListHead.Flink);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v12 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    LOBYTE(v18) = 1;
    PspExitProcess(v18, v3);
    v25 = PsReferencePrimaryTokenWithTag(v3, 0x65547350u);
    if ( SeAuditingWithTokenForSubcategory(134, v25) )
      SeAuditProcessExit(v3, *(unsigned int *)(v3 + 2004));
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v25, 0x65547350u);
    ExWnfExitProcess(v3, 0);
    PspRundownSingleProcess((PRKPROCESS)v3, 1);
    LpcExitProcess((struct _KPROCESS *)v3);
    v26 = *(void **)(v3 + 2120);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v3 + 2120) = 0LL;
    }
  }
  KeRundownApcQueues(CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  PspTlsDataCleanup(CurrentThread, 1LL);
  Thread = CurrentThread[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Thread = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
