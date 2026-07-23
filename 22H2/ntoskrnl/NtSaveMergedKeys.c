/*
 * XREFs of NtSaveMergedKeys @ 0x1408697F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1403FCAE0 (ZwSaveMergedKeys.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1406E8014 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1406E83F0 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072B380 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x14087CAE0 (CmSaveMergedKeys.c)
 */

NTSTATUS __cdecl NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v9; // rdx
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-29h] BYREF
  PADAPTER_OBJECT v18; // [rsp+38h] [rbp-21h] BYREF
  struct _DMA_ADAPTER FileHandlea; // [rsp+40h] [rbp-19h] BYREF
  HANDLE HighPrecedenceKeyHandlea; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v21[3]; // [rsp+58h] [rbp-1h] BYREF

  FileHandlea.DmaOperations = 0LL;
  HighPrecedenceKeyHandlea = 0LL;
  v18 = 0LL;
  DmaAdapter = 0LL;
  *(_QWORD *)&FileHandlea.Version = 0LL;
  memset(v21, 0, sizeof(v21));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          v7 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v9, PreviousMode, 0, &HighPrecedenceKeyHandlea);
          if ( v7 >= 0 )
          {
            v7 = CmConvertHandleToKernelHandle(
                   LowPrecedenceKeyHandle,
                   v11,
                   PreviousMode,
                   0,
                   (PHANDLE)&FileHandlea.DmaOperations);
            if ( v7 >= 0 )
            {
              v7 = IoConvertFileHandleToKernelHandle(FileHandle, PreviousMode, 2u, 0, &FileHandlea);
              if ( v7 >= 0 )
                v7 = ZwSaveMergedKeys(
                       HighPrecedenceKeyHandlea,
                       FileHandlea.DmaOperations,
                       *(HANDLE *)&FileHandlea.Version);
            }
          }
        }
        else
        {
          v7 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v10, 0, &v18, 0LL);
          if ( v7 >= 0 )
          {
            v7 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v12, 0, &DmaAdapter, 0LL);
            if ( v7 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v21, v13, v14, v15);
              v7 = CmSaveMergedKeys(v18, DmaAdapter, FileHandle, 0LL);
              KiUnstackDetachProcess((__int64)v21, 0);
            }
          }
        }
      }
      else
      {
        v7 = -1073741727;
      }
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v18 )
      HalPutDmaAdapter(v18);
    if ( *(_QWORD *)&FileHandlea.Version )
      ZwClose(*(HANDLE *)&FileHandlea.Version);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  if ( FileHandlea.DmaOperations )
    ZwClose(FileHandlea.DmaOperations);
  if ( HighPrecedenceKeyHandlea )
    ZwClose(HighPrecedenceKeyHandlea);
  return v7;
}
