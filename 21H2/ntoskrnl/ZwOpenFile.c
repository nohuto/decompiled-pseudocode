/*
 * XREFs of ZwOpenFile @ 0x1403FAA00
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EDF6C (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1405C3B80 (BiLogFileOwnerProcess.c)
 *     ExpGetGlobalLocaleSection @ 0x140612BDC (ExpGetGlobalLocaleSection.c)
 *     IoGetDeviceObjectPointer @ 0x140620E20 (IoGetDeviceObjectPointer.c)
 *     CmpLogHiveFileInaccessible @ 0x1406772F4 (CmpLogHiveFileInaccessible.c)
 *     SiOpenDevice @ 0x1406A4E74 (SiOpenDevice.c)
 *     NtGetNlsSectionPtr @ 0x1406B9930 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140755A54 (KsepSdbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x14075DC48 (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x14075F2C8 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140776E28 (PopValidateHiberFileSize.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C850 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiInitializeDDB @ 0x14077E964 (PiInitializeDDB.c)
 *     RtlLockBootStatusData @ 0x14077F570 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x140782748 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1407850C0 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407854D4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14078560C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407857AC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079868C (EtwpUpdateFileInfoDriverRegistration.c)
 *     PspLocateSystemDll @ 0x140798B78 (PspLocateSystemDll.c)
 *     HalpAcquirePccInterface @ 0x140866824 (HalpAcquirePccInterface.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140872FE8 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x1408844DC (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140887B94 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140891924 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140892EE4 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140893520 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14089F384 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x14089F630 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A16D0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B431C (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6D68 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x1408CCB08 (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x14095065C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140950888 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409528B4 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140958AB0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EDC4 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140967B24 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140967BDC (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969C60 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x14096FD8C (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140A61890 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140A6F0E4 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A73F08 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A90110 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140A94818 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
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
