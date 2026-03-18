/*
 * XREFs of PspRundownSingleProcess @ 0x140683990
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1407D7E94 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1407E6274 (PspTerminateAllThreads.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x1409B137C (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x1409B17B0 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x1409B1860 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140209344 (RtlInterlockedSetClearBits.c)
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     KeSetProcess @ 0x1402095F0 (KeSetProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x14056C694 (KeRundownSecureProcess.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x140683DA4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140683F18 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140684158 (PspRemoveProcessFromJobChain.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     ObKillProcess @ 0x14070BCA4 (ObKillProcess.c)
 *     PspClearProcessThreadCidRefs @ 0x1407A0920 (PspClearProcessThreadCidRefs.c)
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(__int64 BugCheckParameter1, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r11
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rdx
  _OWORD v25[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_9;
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(BugCheckParameter1 + 1080);
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1520) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
    v2 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v2 )
  {
LABEL_9:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      v8 = (_DWORD *)(BugCheckParameter1 + 1120);
      if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 1) == 0 )
      {
        RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 1120), 8, 32);
        PspSendProcessNotificationToJobChain(BugCheckParameter1, v9, *(_QWORD *)(BugCheckParameter1 + 1088));
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 992) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 1124), 0x12u) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v25, v8);
      if ( *(_QWORD *)(BugCheckParameter1 + 1392) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess((__int64)v25, 0LL);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2248) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2264, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 2248) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2248), 0);
      *(_QWORD *)(BugCheckParameter1 + 2248) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter1 + 2264);
      KeAbPostRelease(BugCheckParameter1 + 2264);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v10 = *(_QWORD **)(BugCheckParameter1 + 2840);
    if ( v10 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v10 )
          {
            v11 = v10;
            v10 = (_QWORD *)*v10;
            *v11 = 0LL;
          }
          if ( !v10[1] )
            break;
          v12 = v10;
          v10 = (_QWORD *)v10[1];
          v12[1] = 0LL;
        }
        v13 = v10[2];
        SC_ENV::Free(v10);
        v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 )
          break;
        v10 = (_QWORD *)v14;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2840) = 0LL;
    v15 = *(_QWORD **)(BugCheckParameter1 + 2856);
    if ( v15 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v15 )
          {
            v16 = v15;
            v15 = (_QWORD *)*v15;
            *v16 = 0LL;
          }
          if ( !v15[1] )
            break;
          v17 = v15;
          v15 = (_QWORD *)v15[1];
          v17[1] = 0LL;
        }
        v18 = v15[2];
        SC_ENV::Free(v15);
        v19 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v19 )
          break;
        v15 = (_QWORD *)v19;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2856) = 0LL;
    v20 = *(void **)(BugCheckParameter1 + 1048);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(BugCheckParameter1 + 1048) = 0LL;
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2888) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2888), 0);
      *(_QWORD *)(BugCheckParameter1 + 2888) = 0LL;
    }
    v21 = *(void **)(BugCheckParameter1 + 1304);
    if ( v21 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1304) = 0LL;
      ObfDereferenceObject(v21);
    }
    v22 = *(void **)(BugCheckParameter1 + 1440);
    if ( v22 )
    {
      ObfDereferenceObjectWithTag(v22, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1440) = 0LL;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 1124), 0x12u) )
      KeSetProcess((_QWORD *)BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      PspRemoveProcessFromJobChain(BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v23 = *(_QWORD *)(BugCheckParameter1 + 1088);
    if ( v23 )
      PspClearProcessThreadCidRefs(CurrentThread, v23, BugCheckParameter1);
  }
  else
  {
    v6 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      ExSweepHandleTable(BugCheckParameter1, v6, v7);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    }
  }
  return v2;
}
