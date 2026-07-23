/*
 * XREFs of NtRestoreKey @ 0x140869520
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x1406E83F0 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072B380 (IoConvertFileHandleToKernelHandle.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  char v3; // r12
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  __int64 v10; // r8
  NTSTATUS v11; // eax
  HANDLE v12; // rdi
  int v13; // eax
  __int64 v14; // r8
  _DWORD *v15; // r9
  struct _DMA_ADAPTER *DmaOperations; // rdx
  struct _KTHREAD *v17; // rax
  _DMA_OPERATIONS *v18; // rdi
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r9
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v25; // [rsp+60h] [rbp-49h] BYREF
  __int128 v26; // [rsp+70h] [rbp-39h]
  __int128 v27; // [rsp+80h] [rbp-29h]
  _OWORD v28[3]; // [rsp+90h] [rbp-19h] BYREF

  Handle.DmaOperations = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  v24[1] = v24;
  v25 = 0LL;
  v3 = 0;
  v24[0] = v24;
  v26 = 0LL;
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 < 0 )
    {
LABEL_27:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v9;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      v11 = IoConvertFileHandleToKernelHandle(FileHandle, 1, 1u, 0, &Handle);
      v12 = *(HANDLE *)&Handle.Version;
      v9 = v11;
      if ( v11 < 0 )
      {
LABEL_24:
        if ( v12 && v12 != FileHandle )
          ZwClose(v12);
        goto LABEL_27;
      }
    }
    else
    {
      v12 = FileHandle;
      *(_QWORD *)&Handle.Version = FileHandle;
    }
    v13 = CmObReferenceObjectByHandle(
            KeyHandle,
            0,
            v10,
            PreviousMode,
            (struct _DMA_ADAPTER **)&Handle.DmaOperations,
            0LL);
    DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
    v9 = v13;
    if ( v13 < 0 )
    {
LABEL_22:
      if ( DmaOperations )
        HalPutDmaAdapter(DmaOperations);
      goto LABEL_24;
    }
    if ( (*((_DWORD *)Handle.DmaOperations->PutDmaAdapter + 2) & 0x80u) != 0 )
    {
      v9 = -1073741790;
      goto LABEL_22;
    }
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = Handle.DmaOperations;
    v19 = *(_QWORD *)&Handle.Version;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v25 = v18;
      *((_QWORD *)&v25 + 1) = v19;
      LODWORD(v26) = Flags;
      v20 = CmpCallCallBacksEx(0x29u, (__int64)&v25, 0LL, 1, 0x2Au, 0LL, (__int64)v24);
      v9 = v20;
      if ( v20 < 0 )
      {
        if ( v20 == -1073740541 )
          v9 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
        v12 = *(HANDLE *)&Handle.Version;
        goto LABEL_22;
      }
      v3 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v28, (__int64)DmaOperations, v14, v15);
    LOBYTE(v21) = PreviousMode;
    v9 = CmRestoreKey(v18, v19, Flags, v21);
    KiUnstackDetachProcess((__int64)v28, 0);
    if ( v3 )
      v9 = CmPostCallbackNotificationEx(0x2Au, (__int64)v18, v9, (__int64)&v25, 0LL, v24);
    goto LABEL_21;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741431;
}
