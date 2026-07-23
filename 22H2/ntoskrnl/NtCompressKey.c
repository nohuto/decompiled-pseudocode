/*
 * XREFs of NtCompressKey @ 0x140868330
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     PoIsInitializedStopWatch @ 0x14034C198 (PoIsInitializedStopWatch.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x1406E83F0 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmCompressKey @ 0x14086C250 (CmCompressKey.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087268C (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __cdecl NtCompressKey(HANDLE KeyHandle)
{
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v4; // r8
  unsigned int v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  PADAPTER_OBJECT v7; // rdi
  _DMA_OPERATIONS *DmaOperations; // rdx
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v16[3]; // [rsp+38h] [rbp-40h] BYREF

  DmaAdapter = 0LL;
  memset(v16, 0, sizeof(v16));
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v5 = (unsigned __int8)KeyHandle & 3;
      v2 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v4, PreviousMode, &DmaAdapter, 0LL);
      if ( v2 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
        {
          v7 = DmaAdapter;
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck((__int64)v7, 0LL);
            if ( v2 < 0 )
              break;
            DmaOperations = v7->DmaOperations;
            AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
            if ( LODWORD(DmaOperations->FlushAdapterBuffers) != *(_DWORD *)(*((_QWORD *)AllocateAdapterChannel + 8)
                                                                          + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v10 = (_QWORD *)((char *)AllocateAdapterChannel + 4248);
            if ( !PoIsInitializedStopWatch((_QWORD *)AllocateAdapterChannel + 531) )
            {
              v10 = (_QWORD *)((char *)AllocateAdapterChannel + 4232);
              if ( !PoIsInitializedStopWatch((_QWORD *)AllocateAdapterChannel + 529) )
              {
                CmpAttachToRegistryProcess((__int64)v16, v11, v12, v13);
                v2 = CmCompressKey(v7->DmaOperations->AllocateAdapterChannel, v5);
                KiUnstackDetachProcess((__int64)v16, 0);
                break;
              }
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)AllocateAdapterChannel + 72, 0LL);
            CmpWaitOnHiveWriteQueue(AllocateAdapterChannel, v10);
          }
          CmpUnlockRegistry();
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        else
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v2 = -1073741431;
        }
      }
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
    }
    else
    {
      return -1073741727;
    }
  }
  return v2;
}
