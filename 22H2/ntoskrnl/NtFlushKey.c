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

__int64 __fastcall NtFlushKey(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DMA_OPERATIONS *DmaOperations; // r15
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // al
  int v9; // r8d
  int v10; // r9d
  struct _KTHREAD *v11; // rcx
  BOOLEAN v12; // r12
  PADAPTER_OBJECT v13; // rcx
  signed int v14; // ebx
  char PreviousMode; // si
  struct _KTHREAD *v16; // rax
  PADAPTER_OBJECT v17; // rdi
  int v18; // eax
  _DMA_OPERATIONS *v19; // rbx
  ULONG_PTR v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  struct _EX_RUNDOWN_REF *v25; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-69h] BYREF
  __int64 v31; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v33[2]; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v34[3]; // [rsp+80h] [rbp-29h] BYREF
  _OWORD v35[2]; // [rsp+B0h] [rbp+7h] BYREF

  v31 = 0LL;
  DmaOperations = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(v34, 0, sizeof(v34));
  memset(v35, 0, sizeof(v35));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v35, 0x20000LL, a3, a4);
  DmaAdapter = 0LL;
  v32[1] = v32;
  v6 = 0;
  v32[0] = v32;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v11 = KeGetCurrentThread();
  v12 = v8;
  if ( !v8 )
  {
    KeLeaveCriticalRegionThread((__int64)v11);
    v14 = -1073741431;
    goto LABEL_30;
  }
  PreviousMode = v11->PreviousMode;
  LOBYTE(v10) = PreviousMode;
  v14 = CmObReferenceObjectByHandle(a1, 0, v9, v10, (__int64)&DmaAdapter, (__int64)&v31);
  if ( v14 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = DmaAdapter;
    if ( (*((_DWORD *)DmaAdapter->DmaOperations->AllocateAdapterChannel + 40) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v31) & 0x20006) != 0 )
    {
      v14 = -1073741790;
LABEL_27:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v33[0] = v17;
      v18 = CmpCallCallBacksEx(0x1Eu, (__int64)v33, 0LL, 1, 0x1Fu, (__int64)v17, (__int64)v32);
      v14 = v18;
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
          v14 = 0;
        goto LABEL_27;
      }
      v6 = 1;
    }
    CmpLockRegistryFreezeAware(0LL);
    v19 = v17->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v19->FreeAdapterChannel, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)&v19->FreeMapRegisters);
    v14 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
    if ( v14 >= 0 )
    {
      v20 = (ULONG_PTR)v17->DmaOperations;
      v21 = *(struct _EX_RUNDOWN_REF **)(v20 + 32);
      if ( v21 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v20);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v34, v22, v23, v24);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v34, 0);
        v14 = 0;
        goto LABEL_25;
      }
      v25 = v21 + 204;
      if ( ExAcquireRundownProtection(v21 + 204) )
      {
        CmpUnlockKcb((ULONG_PTR)v17->DmaOperations);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v34, v27, v28, v29);
        v14 = CmpFlushHive((ULONG_PTR)v21, 0);
        if ( v14 < 0 )
          v14 = -1073741491;
        KiUnstackDetachProcess((__int64)v34, 0);
        ExReleaseRundownProtection(v25);
        goto LABEL_25;
      }
      v14 = -1073740763;
    }
    CmpUnlockKcb((ULONG_PTR)v17->DmaOperations);
    CmpUnlockRegistry();
LABEL_25:
    if ( v6 )
      v14 = CmPostCallbackNotificationEx(0x1Fu, (__int64)DmaAdapter, v14, (__int64)v33, 0LL, v32);
    goto LABEL_27;
  }
LABEL_28:
  v13 = DmaAdapter;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_30:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v13) = 21;
    (*(void (__fastcall **)(PADAPTER_OBJECT, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v13,
      v35,
      (unsigned int)v14,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v12 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v14;
}
