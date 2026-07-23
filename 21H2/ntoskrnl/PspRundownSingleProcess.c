/*
 * XREFs of PspRundownSingleProcess @ 0x1406F3E68
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspTerminateProcess @ 0x1406B1000 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1406B1130 (PspTerminateAllThreads.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x14090AE6C (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x14090B290 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x14090B340 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KeSetProcess @ 0x1402F652C (KeSetProcess.c)
 *     ExRundownCompleted @ 0x1402F6750 (ExRundownCompleted.c)
 *     RtlInterlockedSetClearBits @ 0x1402F6760 (RtlInterlockedSetClearBits.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x140513C5C (KeRundownSecureProcess.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     PspClearProcessThreadCidRefs @ 0x1406419A0 (PspClearProcessThreadCidRefs.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ObKillProcess @ 0x1406F2C20 (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x1406F3D00 (ExSweepHandleTable.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1406F4684 (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x1406F47B8 (PspSendProcessNotificationToJobChain.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(ULONG_PTR BugCheckParameter1, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  struct _DMA_ADAPTER *v27; // rcx
  void *v28; // rcx
  __int64 v29; // rdx
  _OWORD v31[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(v31, 0, sizeof(v31));
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  if ( v2 )
  {
LABEL_9:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      v12 = (_DWORD *)(BugCheckParameter1 + 1120);
      if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 1) == 0 )
      {
        RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 1120), 8, 32);
        PspSendProcessNotificationToJobChain(BugCheckParameter1, v13, *(_QWORD *)(BugCheckParameter1 + 1088));
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 992) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v31);
      if ( *(_QWORD *)(BugCheckParameter1 + 1392) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess((__int64)v31, 0LL);
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
    }
    v17 = *(_QWORD **)(BugCheckParameter1 + 2560);
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
    *(_QWORD *)(BugCheckParameter1 + 2560) = 0LL;
    v22 = *(_QWORD **)(BugCheckParameter1 + 2576);
    if ( v22 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v22 )
          {
            v23 = v22;
            v22 = (_QWORD *)*v22;
            *v23 = 0LL;
          }
          if ( !v22[1] )
            break;
          v24 = v22;
          v22 = (_QWORD *)v22[1];
          v24[1] = 0LL;
        }
        v25 = v22[2];
        SC_ENV::Free(v22);
        v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v26 )
          break;
        v22 = (_QWORD *)v26;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2576) = 0LL;
    if ( *(_QWORD *)(BugCheckParameter1 + 2600) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2600), 0);
      *(_QWORD *)(BugCheckParameter1 + 2600) = 0LL;
    }
    v27 = *(struct _DMA_ADAPTER **)(BugCheckParameter1 + 1304);
    if ( v27 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1304) = 0LL;
      HalPutDmaAdapter(v27);
    }
    v28 = *(void **)(BugCheckParameter1 + 1440);
    if ( v28 )
    {
      ObfDereferenceObjectWithTag(v28, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1440) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1, v10, v11, v12);
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 4u, 0);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v29 = *(_QWORD *)(BugCheckParameter1 + 1088);
    if ( v29 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v29, BugCheckParameter1);
  }
  else
  {
    v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v9 )
    {
      ExSweepHandleTable((_KPROCESS *)BugCheckParameter1, v9, 1);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    }
  }
  return v2;
}
