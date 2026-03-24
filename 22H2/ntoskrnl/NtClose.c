/*
 * XREFs of NtClose @ 0x14063E0A0
 * Callers:
 *     SepRmCallLsa @ 0x14034D310 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A7C40 (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403A7D00 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A7D60 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x14058E440 (RtlQueryValidationRunlevel.c)
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1405DF5BC (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     PfSnGetPrefetchInstructions @ 0x14062D440 (PfSnGetPrefetchInstructions.c)
 *     PfSnPrefetchMetadata @ 0x1406324B0 (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x14063290C (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x140632CA0 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1406331D8 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x1406340E4 (PfpReadSupportCleanup.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140634420 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x140634A00 (PfSnIsVolumeMounted.c)
 *     AlpcpCreateConnectionPort @ 0x14068D758 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406A0E10 (NtCreateRegistryTransaction.c)
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     PfpVolumeOpenAndVerify @ 0x14070B318 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchPrivatePages @ 0x14070C958 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x14070CBB0 (PfpSourceGetPrefetchSupport.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140731FB0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpLoadLanguageConfigList @ 0x14078F5A0 (RtlpLoadLanguageConfigList.c)
 *     CmpInitializeLazyWriters @ 0x140799DE8 (CmpInitializeLazyWriters.c)
 *     AdtpObjsInitialize @ 0x14079E8F0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14079EDE8 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CB968 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x1408685D0 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140891510 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x140915ED8 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094798C (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C020 (ExpWatchLicenseInfoWork.c)
 *     sub_140A37A14 @ 0x140A37A14 (sub_140A37A14.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A4BB0C (SepAdtInitializeAuditingOptions.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A67640 (IopInitCrashDumpRegCallback.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6BB14 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A6E368 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6F6AC (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A72948 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8C3D0 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x1402C8EF0 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x1402C8F50 (ObpIsKernelHandle.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380800 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140515E60 (KeRaiseUserException.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x14063E910 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x1409DA194 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  unsigned __int64 v1; // rbx
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r15
  struct _EX_RUNDOWN_REF *Process; // r13
  PEPROCESS v6; // r12
  unsigned __int64 Count; // rbp
  signed __int64 *v8; // rax
  signed __int64 *v9; // rsi
  NTSTATUS v10; // edi
  ULONG_PTR v12; // rcx
  char v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = (unsigned __int64)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v12);
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v13 = 0;
  if ( ObpIsKernelHandle(v1, PreviousMode) )
  {
    Count = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v6 = PsInitialSystemProcess;
  }
  else
  {
    v6 = (PEPROCESS)Process;
    if ( KeGetCurrentThread()->ApcStateIndex != 1 )
    {
      Count = Process[174].Count;
      if ( Count != ObpKernelHandleTable )
        goto LABEL_5;
      return -1073741816;
    }
    Count = ObReferenceProcessHandleTable(Process);
    if ( !Count )
      return -1073741816;
    v4 = 1;
  }
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v1 & 0x3FC) != 0 )
  {
    v8 = (signed __int64 *)ExpLookupHandleTableEntry(Count, v1);
    v9 = v8;
    if ( v8 )
    {
      if ( ExLockHandleTableEntry(Count, v8) )
      {
        v10 = ObCloseHandleTableEntry(Count, v9, v6, v1, PreviousMode, 0);
        goto LABEL_9;
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v1 >= 0xFFFFFFFFFFFFFFFAuLL || v1 == 0 )
    goto LABEL_14;
  ExQueryHandleExceptionsPermanency(Count, &v14, &v13);
  if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v13 )
    ExHandleLogBadReference(Count, v1, PreviousMode);
  if ( !PreviousMode )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 && Process[170].Count && (_BYTE)KdDebuggerEnabled )
      KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
    goto LABEL_14;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[175].Count && !*(_QWORD *)(Count + 96) )
  {
LABEL_14:
    v10 = -1073741816;
    if ( v1 + 6 <= 5 )
      v10 = 0;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v10 = -1073741816;
  else
    v10 = KeRaiseUserException(0xC0000008);
LABEL_9:
  if ( v4 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v6[1].ProfileListHead.Blink);
  return v10;
}
