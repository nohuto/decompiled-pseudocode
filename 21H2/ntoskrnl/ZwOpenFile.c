/*
 * XREFs of ZwOpenFile @ 0x1403FABE0
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EE1AC (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1405C3DB0 (BiLogFileOwnerProcess.c)
 *     SiOpenDevice @ 0x140602AA4 (SiOpenDevice.c)
 *     NtGetNlsSectionPtr @ 0x14060EE10 (NtGetNlsSectionPtr.c)
 *     CmpLogHiveFileInaccessible @ 0x14066A9C4 (CmpLogHiveFileInaccessible.c)
 *     IoGetDeviceObjectPointer @ 0x14068AA90 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x1406A268C (ExpGetGlobalLocaleSection.c)
 *     KsepSdbMapToMemory @ 0x140755C14 (KsepSdbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x14075DE08 (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x14075F488 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140776FE8 (PopValidateHiberFileSize.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiInitializeDDB @ 0x14077EB24 (PiInitializeDDB.c)
 *     RtlLockBootStatusData @ 0x14077F730 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x140782908 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x140785280 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140785694 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x1407857CC (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14078596C (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079888C (EtwpUpdateFileInfoDriverRegistration.c)
 *     PspLocateSystemDll @ 0x140798D78 (PspLocateSystemDll.c)
 *     HalpAcquirePccInterface @ 0x140866984 (HalpAcquirePccInterface.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873148 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x14088463C (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140887CF4 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140891A84 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140893044 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140893680 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14089F4E4 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x14089F790 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A1830 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B447C (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6EC8 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x1408CCC68 (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x14095082C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140950A58 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x140952A84 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140958C80 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EFA4 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140967D04 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140967DBC (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969E40 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x14096FF6C (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140A62890 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140A700E4 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A74F08 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140A90EC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A91110 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140A95818 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
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
