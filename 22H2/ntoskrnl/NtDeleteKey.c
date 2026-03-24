/*
 * XREFs of NtDeleteKey @ 0x1406E5000
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032A994 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406A5B3C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmDeleteKey @ 0x1406E47E4 (CmDeleteKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F870 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140921400 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

__int64 __fastcall NtDeleteKey(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  _DMA_OPERATIONS *v4; // rbx
  char v6; // r14
  char v7; // r12
  char v8; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  _DMA_OPERATIONS *v12; // rcx
  signed int v13; // edi
  PADAPTER_OBJECT v14; // rbx
  struct _KTHREAD *v15; // rax
  int v16; // edx
  unsigned int (__fastcall *GetDmaAlignment)(_DMA_ADAPTER *); // rax
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  GUID *p_TransactionId; // r8
  BOOLEAN v23; // [rsp+48h] [rbp-89h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-81h] BYREF
  int v25; // [rsp+58h] [rbp-79h] BYREF
  __int64 v26; // [rsp+60h] [rbp-71h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-69h]
  __int64 v28; // [rsp+70h] [rbp-61h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-49h] BYREF
  GUID v31[2]; // [rsp+A8h] [rbp-29h] BYREF
  GUID TransactionId; // [rsp+D0h] [rbp-1h] BYREF
  _OWORD v33[2]; // [rsp+E0h] [rbp+Fh] BYREF

  v4 = 0LL;
  v26 = 0LL;
  DmaOperations = 0LL;
  v6 = 0;
  v25 = 0;
  memset(v31, 0, sizeof(v31));
  v28 = 0LL;
  memset(v33, 0, sizeof(v33));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v33, 0x20000LL, a3, a4);
  DmaAdapter = 0LL;
  v29[1] = v29;
  v7 = 0;
  v29[0] = v29;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v23 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v23 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v13 = -1073741431;
    goto LABEL_32;
  }
  v13 = CmObReferenceObjectByHandle(Handle, 0x10000u, v11, PreviousMode, &DmaAdapter, &v26);
  if ( v13 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
    {
      v13 = -1073741790;
      v14 = DmaAdapter;
      goto LABEL_40;
    }
    v20 = CmObReferenceObjectByHandle(Handle, 0x20019u, v19, PreviousMode, &DmaAdapter, &v26);
    v14 = DmaAdapter;
    v13 = v20;
    if ( v20 < 0 )
      goto LABEL_40;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter) )
    {
      v13 = -1073741790;
      goto LABEL_40;
    }
    v6 = 1;
  }
  else
  {
    v14 = DmaAdapter;
  }
  if ( v13 >= 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v14 = DmaAdapter;
    v13 = 0;
    v8 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v31[0].Data1 = v14;
      v13 = CmpCallCallBacksEx(0, (__int64)v31, 0LL, 1, 0xFu, (__int64)v14, (__int64)v29);
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v13 = 0;
        goto LABEL_24;
      }
      v7 = 1;
      v13 = 0;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v14 )
      DmaOperations = v14->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v14->DmaOperations == ExpControlKey->DmaOperations
      || ::DmaAdapter && v14->DmaOperations == ::DmaAdapter->DmaOperations )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v14 = DmaAdapter;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v14 = DmaAdapter;
      v12 = DmaAdapter->DmaOperations;
      if ( (LODWORD(v12->PutDmaAdapter) & 0x80u) != 0 )
        goto LABEL_55;
      GetDmaAlignment = v12->GetDmaAlignment;
      if ( GetDmaAlignment )
      {
        if ( (*((_DWORD *)GetDmaAlignment + 2) & 0x80u) != 0 )
          goto LABEL_55;
      }
      if ( !v6 )
        goto LABEL_22;
      LOBYTE(v16) = PreviousMode;
      v21 = CmKeyBodyRemapToVirtual(
              (unsigned int)&DmaAdapter,
              v16,
              0x10000,
              (unsigned int)&SubjectContext,
              (__int64)&v25);
      v14 = DmaAdapter;
      v13 = v21;
      if ( v21 < 0 )
        goto LABEL_24;
      if ( CmpVEEnabled && ((__int64)DmaAdapter->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_22:
        v13 = CmDeleteKey((__int64)v14);
        if ( v13 >= 0 && (v26 & 4) != 0 )
        {
          if ( v14[3].DmaOperations || *(_QWORD *)&v14[4].Version )
          {
            CmpLockRegistry();
            CmpTransSearchAddTransFromKeyBody(v14, &v28);
            TransactionId = *(GUID *)(v28 + 88);
            CmpUnlockRegistry();
            p_TransactionId = &TransactionId;
          }
          else
          {
            p_TransactionId = 0LL;
          }
          SeDeleteObjectAuditAlarmWithTransaction(v14, Handle, p_TransactionId);
        }
      }
      else
      {
LABEL_55:
        v13 = -1073741790;
      }
    }
  }
LABEL_24:
  if ( v6 )
LABEL_40:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
    v13 = CmPostCallbackNotificationEx(0xFu, (__int64)v14, v13, (__int64)v31, 0LL, v29);
  if ( v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = DmaAdapter;
  }
  if ( v14 )
    HalPutDmaAdapter(v14);
  v4 = DmaOperations;
LABEL_32:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v12) = 12;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v12,
      v33,
      (unsigned int)v13,
      0LL,
      v4,
      0LL);
  }
  if ( v23 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v13;
}
