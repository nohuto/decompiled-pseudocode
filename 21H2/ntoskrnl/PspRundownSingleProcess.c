/*
 * XREFs of PspRundownSingleProcess @ 0x140604738
 * Callers:
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     PspTerminateProcess @ 0x1406D9D20 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1406D9E50 (PspTerminateAllThreads.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE460 (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x14090AD0C (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x14090B130 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x14090B1E0 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KeSetProcess @ 0x140251D1C (KeSetProcess.c)
 *     ExRundownCompleted @ 0x140251F40 (ExRundownCompleted.c)
 *     RtlInterlockedSetClearBits @ 0x140251F50 (RtlInterlockedSetClearBits.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x140513A1C (KeRundownSecureProcess.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     ObKillProcess @ 0x1406034EC (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x140604F54 (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140605088 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140616398 (PspRemoveProcessFromJobChain.c)
 *     PspClearProcessThreadCidRefs @ 0x14064CB80 (PspClearProcessThreadCidRefs.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406B7B50 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(__int64 BugCheckParameter1, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rdi
  unsigned __int64 v6; // rax
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // r11
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  struct _DMA_ADAPTER *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  _OWORD v26[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(v26, 0, sizeof(v26));
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
      v10 = (_DWORD *)(BugCheckParameter1 + 1120);
      if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 1) == 0 )
      {
        RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 1120), 8, 32);
        PspSendProcessNotificationToJobChain(BugCheckParameter1, v11, *(_QWORD *)(BugCheckParameter1 + 1088));
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 992) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v26, v10);
      if ( *(_QWORD *)(BugCheckParameter1 + 1392) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess((__int64)v26, 0);
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
    v12 = *(_QWORD **)(BugCheckParameter1 + 2560);
    if ( v12 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v12 )
          {
            v13 = v12;
            v12 = (_QWORD *)*v12;
            *v13 = 0LL;
          }
          if ( !v12[1] )
            break;
          v14 = v12;
          v12 = (_QWORD *)v12[1];
          v14[1] = 0LL;
        }
        v15 = v12[2];
        SC_ENV::Free(v12);
        v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v16 )
          break;
        v12 = (_QWORD *)v16;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2560) = 0LL;
    v17 = *(_QWORD **)(BugCheckParameter1 + 2576);
    if ( v17 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v17 )
          {
            v18 = v17;
            v17 = (_QWORD *)*v17;
            *v18 = 0LL;
          }
          if ( !v17[1] )
            break;
          v19 = v17;
          v17 = (_QWORD *)v17[1];
          v19[1] = 0LL;
        }
        v20 = v17[2];
        SC_ENV::Free(v17);
        v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v21 )
          break;
        v17 = (_QWORD *)v21;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2576) = 0LL;
    if ( *(_QWORD *)(BugCheckParameter1 + 2600) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2600), 0);
      *(_QWORD *)(BugCheckParameter1 + 2600) = 0LL;
    }
    v22 = *(struct _DMA_ADAPTER **)(BugCheckParameter1 + 1304);
    if ( v22 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1304) = 0LL;
      HalPutDmaAdapter(v22);
    }
    v23 = *(void **)(BugCheckParameter1 + 1440);
    if ( v23 )
    {
      ObfDereferenceObjectWithTag(v23, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1440) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1, v8, v9, v10);
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v24 = *(_QWORD *)(BugCheckParameter1 + 1088);
    if ( v24 )
      PspClearProcessThreadCidRefs(CurrentThread, v24, BugCheckParameter1);
  }
  else
  {
    v6 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v6 )
    {
      ExSweepHandleTable((_KPROCESS *)BugCheckParameter1, v6, 1, v7);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    }
  }
  return v2;
}
