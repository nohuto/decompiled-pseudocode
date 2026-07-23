/*
 * XREFs of NtSaveKeyEx @ 0x140729810
 * Callers:
 *     NtSaveKey @ 0x1408697D0 (NtSaveKey.c)
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
 *     CmSaveKey @ 0x140729A8C (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072B380 (IoConvertFileHandleToKernelHandle.c)
 *     CmDumpKey @ 0x14087BD68 (CmDumpKey.c)
 */

NTSTATUS __cdecl NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  KPROCESSOR_MODE PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  HANDLE v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  struct _KTHREAD *v16; // rax
  PADAPTER_OBJECT v17; // rdi
  HANDLE v18; // r15
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned int v24; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v29; // [rsp+60h] [rbp-49h] BYREF
  __int128 v30; // [rsp+70h] [rbp-39h]
  __int128 v31; // [rsp+80h] [rbp-29h]
  _OWORD v32[3]; // [rsp+90h] [rbp-19h] BYREF

  DmaAdapter = 0LL;
  Handle = 0LL;
  v28[1] = v28;
  v29 = 0LL;
  v28[0] = v28;
  v30 = 0LL;
  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v8 = CmCheckNoTxContext();
  if ( v8 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      if ( ((Format - 1) & 0xFFFFFFFC) == 0 && Format != 3 )
      {
        if ( PreviousMode == 1 )
        {
          LOBYTE(v9) = 1;
          v11 = IoConvertFileHandleToKernelHandle(FileHandle, v9, 2LL, 0LL, &Handle);
          v12 = Handle;
          v8 = v11;
          if ( v11 < 0 )
          {
LABEL_20:
            if ( v12 && v12 != FileHandle )
              ZwClose(v12);
            goto LABEL_23;
          }
        }
        else
        {
          v12 = FileHandle;
          Handle = FileHandle;
        }
        v8 = CmObReferenceObjectByHandle(KeyHandle, 0, v10, PreviousMode, &DmaAdapter, 0LL);
        if ( v8 >= 0 )
        {
          v16 = KeGetCurrentThread();
          --v16->KernelApcDisable;
          v17 = DmaAdapter;
          v18 = Handle;
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (*(_QWORD *)&v29 = v17,
                *((_QWORD *)&v29 + 1) = v18,
                LODWORD(v30) = Format,
                v19 = CmpCallCallBacksEx(0x2Bu, (__int64)&v29, 0LL, 1, 0x2Cu, 0LL, (__int64)v28),
                v8 = v19,
                v19 < 0) )
          {
            if ( v19 == -1073740541 )
              v8 = 0;
          }
          else
          {
            CmpAttachToRegistryProcess((__int64)v32, v13, v14, v15);
            if ( Format == 4 )
            {
              LOBYTE(v20) = PreviousMode;
              v23 = CmDumpKey(v17, v18, v20);
            }
            else
            {
              v22 = 5LL;
              LOBYTE(v21) = PreviousMode;
              if ( Format != 2 )
                v22 = 3LL;
              v23 = CmSaveKey(v17, v18, v22, v21);
            }
            v24 = v23;
            KiUnstackDetachProcess((__int64)v32, 0);
            v8 = CmPostCallbackNotificationEx(0x2Cu, (__int64)v17, v24, (__int64)&v29, 0LL, v28);
          }
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v12 = Handle;
        }
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_20;
      }
      v8 = -1073741811;
    }
    else
    {
      v8 = -1073741727;
    }
  }
LABEL_23:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
