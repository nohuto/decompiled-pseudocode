/*
 * XREFs of NtFlushKey @ 0x140696C00
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140696830 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpDoFlushAll @ 0x14037D80C (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 */

NTSTATUS __cdecl NtFlushKey(HANDLE KeyHandle)
{
  _DMA_OPERATIONS *DmaOperations; // r15
  int v2; // ebx
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  int v6; // r8d
  int v7; // r9d
  struct _KTHREAD *v8; // rcx
  BOOLEAN v9; // r12
  PADAPTER_OBJECT v10; // rcx
  int v11; // ebx
  char PreviousMode; // si
  struct _KTHREAD *v13; // rax
  PADAPTER_OBJECT v14; // rdi
  int v15; // eax
  _DMA_OPERATIONS *v16; // rbx
  ULONG_PTR v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  struct _EX_RUNDOWN_REF *v22; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-69h] BYREF
  __int64 v28; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v30[2]; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v31[3]; // [rsp+80h] [rbp-29h] BYREF
  _OWORD v32[2]; // [rsp+B0h] [rbp+7h] BYREF

  v28 = 0LL;
  DmaOperations = 0LL;
  v2 = (int)KeyHandle;
  memset(v30, 0, sizeof(v30));
  memset(v31, 0, sizeof(v31));
  memset(v32, 0, sizeof(v32));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v32, 0x20000u);
  DmaAdapter = 0LL;
  v29[1] = v29;
  v3 = 0;
  v29[0] = v29;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v8 = KeGetCurrentThread();
  v9 = v5;
  if ( !v5 )
  {
    KeLeaveCriticalRegionThread((__int64)v8);
    v11 = -1073741431;
    goto LABEL_30;
  }
  PreviousMode = v8->PreviousMode;
  LOBYTE(v7) = PreviousMode;
  v11 = CmObReferenceObjectByHandle(v2, 0, v6, v7, (__int64)&DmaAdapter, (__int64)&v28);
  if ( v11 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = DmaAdapter;
    if ( (*((_DWORD *)DmaAdapter->DmaOperations->AllocateAdapterChannel + 40) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v28) & 0x20006) != 0 )
    {
      v11 = -1073741790;
LABEL_27:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v30[0] = v14;
      v15 = CmpCallCallBacksEx(0x1Eu, (__int64)v30, 0LL, 1, 0x1Fu, (__int64)v14, (__int64)v29);
      v11 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073740541 )
          v11 = 0;
        goto LABEL_27;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0LL);
    v16 = v14->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v16->FreeAdapterChannel, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)&v16->FreeMapRegisters);
    v11 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
    if ( v11 >= 0 )
    {
      v17 = (ULONG_PTR)v14->DmaOperations;
      v18 = *(struct _EX_RUNDOWN_REF **)(v17 + 32);
      if ( v18 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v17);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v31, v19, v20, v21);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v31, 0);
        v11 = 0;
        goto LABEL_25;
      }
      v22 = v18 + 204;
      if ( ExAcquireRundownProtection(v18 + 204) )
      {
        CmpUnlockKcb((ULONG_PTR)v14->DmaOperations);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v31, v24, v25, v26);
        v11 = CmpFlushHive((ULONG_PTR)v18, 0);
        if ( v11 < 0 )
          v11 = -1073741491;
        KiUnstackDetachProcess((__int64)v31, 0);
        ExReleaseRundownProtection(v22);
        goto LABEL_25;
      }
      v11 = -1073740763;
    }
    CmpUnlockKcb((ULONG_PTR)v14->DmaOperations);
    CmpUnlockRegistry();
LABEL_25:
    if ( v3 )
      v11 = CmPostCallbackNotificationEx(0x1Fu, (__int64)DmaAdapter, v11, (__int64)v30, 0LL, v29);
    goto LABEL_27;
  }
LABEL_28:
  v10 = DmaAdapter;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_30:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v10) = 21;
    (*(void (__fastcall **)(PADAPTER_OBJECT, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v10,
      v32,
      (unsigned int)v11,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v11;
}
