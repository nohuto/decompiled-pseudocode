/*
 * XREFs of ZwOpenFile @ 0x1403FA080
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EDEAC (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1405C3AC0 (BiLogFileOwnerProcess.c)
 *     ExpGetGlobalLocaleSection @ 0x14061303C (ExpGetGlobalLocaleSection.c)
 *     IoGetDeviceObjectPointer @ 0x140621240 (IoGetDeviceObjectPointer.c)
 *     SiOpenDevice @ 0x140687F44 (SiOpenDevice.c)
 *     NtGetNlsSectionPtr @ 0x14069CEC0 (NtGetNlsSectionPtr.c)
 *     CmpLogHiveFileInaccessible @ 0x1406F00E4 (CmpLogHiveFileInaccessible.c)
 *     KsepSdbMapToMemory @ 0x140755244 (KsepSdbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x14075D438 (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x14075EAB8 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140773EB8 (PopValidateHiberFileSize.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C750 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiInitializeDDB @ 0x14077E864 (PiInitializeDDB.c)
 *     RtlLockBootStatusData @ 0x14077F470 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x140782648 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x140784FC0 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407853D4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14078550C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407856AC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079351C (EtwpUpdateFileInfoDriverRegistration.c)
 *     PspLocateSystemDll @ 0x140793A08 (PspLocateSystemDll.c)
 *     HalpAcquirePccInterface @ 0x140866874 (HalpAcquirePccInterface.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873038 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x14088452C (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140887BE4 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140891974 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140892F34 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140893570 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14089F3D4 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x14089F680 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A1720 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B436C (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6DB8 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x1408CCB58 (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x1409506AC (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409508D8 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x140952904 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140958B00 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EE14 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140967B74 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140967C2C (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969CB0 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x14096FDDC (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
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
  return KiServiceInternal(FileHandle);
}
