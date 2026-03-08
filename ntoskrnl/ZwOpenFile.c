/*
 * XREFs of ZwOpenFile @ 0x140412970
 * Callers:
 *     EtwpGetDriverDataDosPath @ 0x1403D1CCC (EtwpGetDriverDataDosPath.c)
 *     DbgkPostModuleMessage @ 0x1405395FC (DbgkPostModuleMessage.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055BD40 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x1405EF490 (DifZwOpenFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14066EEB0 (BiLogFileOwnerProcess.c)
 *     NtGetNlsSectionPtr @ 0x14069E7D0 (NtGetNlsSectionPtr.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 *     RtlLockBootStatusData @ 0x14073DD00 (RtlLockBootStatusData.c)
 *     SiOpenDevice @ 0x14076EB34 (SiOpenDevice.c)
 *     ExpGetGlobalLocaleSection @ 0x140780BAC (ExpGetGlobalLocaleSection.c)
 *     CmpLogHiveFileInaccessible @ 0x14078B330 (CmpLogHiveFileInaccessible.c)
 *     PiInitializeDDB @ 0x14079CD80 (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x1407F5C64 (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x1408019BC (KsepShimDatabaseTime.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14081DD70 (PiDrvDbQuerySystemPathWin32.c)
 *     BiCreatePartitionDevice @ 0x14082FDBC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1408300C8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x1408301F8 (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1408304AC (BiIsVolumePartitionInformationRetained.c)
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     PspLocateSystemDll @ 0x14084AE64 (PspLocateSystemDll.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140858188 (EtwpUpdateFileInfoDriverRegistration.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14087FA04 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     HalpAcquirePccInterface @ 0x1409328F4 (HalpAcquirePccInterface.c)
 *     DbgkSendSystemDllMessages @ 0x140933E74 (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140936458 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x1409420DC (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140943674 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140943C90 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x140952F88 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x140953234 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1409552E0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096BE90 (IopFileUtilClearAttributes.c)
 *     PopValidateHiberFileSize @ 0x140986270 (PopValidateHiberFileSize.c)
 *     PsCheckProcessFileSigningLevel @ 0x1409AD870 (PsCheckProcessFileSigningLevel.c)
 *     ExpGetDriveGeometry @ 0x1409F9C60 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409F9DB4 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FB67C (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1409FF53C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A075CC (ApiSetpLoadSchemaImage.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1A060 (CmpOpenFileWithExtremePrejudice.c)
 *     MiOpenHotPatchFile @ 0x140A376D4 (MiOpenHotPatchFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x140A51428 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140A514E0 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A539A4 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x140A5A720 (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140B54EB0 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140B6AD78 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B72350 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B90F20 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140B9799C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B97B20 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B97F70 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
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
