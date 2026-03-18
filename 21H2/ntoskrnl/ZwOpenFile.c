/*
 * XREFs of ZwOpenFile @ 0x14041BDC0
 * Callers:
 *     DbgkPostModuleMessage @ 0x1405400A4 (DbgkPostModuleMessage.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E880 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x140621A40 (DifZwOpenFileWrapper.c)
 *     EtwpGetDriverDataDosPath @ 0x14062CAEC (EtwpGetDriverDataDosPath.c)
 *     BiLogFileOwnerProcess @ 0x14064CD50 (BiLogFileOwnerProcess.c)
 *     PsCheckProcessFileSigningLevel @ 0x14065FD10 (PsCheckProcessFileSigningLevel.c)
 *     IopValidateJunctionTarget @ 0x14066119C (IopValidateJunctionTarget.c)
 *     SiOpenDevice @ 0x1406BB6BC (SiOpenDevice.c)
 *     ExpGetGlobalLocaleSection @ 0x1406C421C (ExpGetGlobalLocaleSection.c)
 *     CmpLogHiveFileInaccessible @ 0x1406D2D00 (CmpLogHiveFileInaccessible.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     MiCreateSectionForDriver @ 0x14076185C (MiCreateSectionForDriver.c)
 *     NtGetNlsSectionPtr @ 0x140784CB0 (NtGetNlsSectionPtr.c)
 *     PiInitializeDDB @ 0x1407EC34C (PiInitializeDDB.c)
 *     KsepShimDatabaseTime @ 0x1407ECB78 (KsepShimDatabaseTime.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     PopValidateHiberFileSize @ 0x1408018EC (PopValidateHiberFileSize.c)
 *     BiGetNtPartitionPath @ 0x140802BE0 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x14080397C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140803D90 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140803EC0 (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140804060 (BiIsVolumePartitionInformationRetained.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PspLocateSystemDll @ 0x14084565C (PspLocateSystemDll.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085D06C (EtwpUpdateFileInfoDriverRegistration.c)
 *     HalpAcquirePccInterface @ 0x14090AB48 (HalpAcquirePccInterface.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140919908 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x14092AAC4 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x1409348AC (IopIsNotNativeDriverImage.c)
 *     IoAttachDevice @ 0x140935E60 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x1409440D0 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x140944390 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140946830 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14095A3E4 (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14095D038 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x1409FC9E0 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCC0C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FEC6C (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140A047F0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0AA8C (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140A14C28 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140A14CE0 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x140A1DCEC (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140B0E670 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140B2AFB8 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B3116C (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140B4F514 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B4F790 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140B54680 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
