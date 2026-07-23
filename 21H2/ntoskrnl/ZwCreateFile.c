/*
 * XREFs of ZwCreateFile @ 0x1403FB020
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x14037111C (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14038021C (LdrpMapResourceFile.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1406B74B0 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407C4A14 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x1407C7E1C (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C9274 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407D02F4 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D2528 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x14087148C (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873148 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x140891024 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14089EF54 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CE34 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14092E82C (SmpUtilsGetControlDevice.c)
 *     PopFlushVolumeWorker @ 0x140998FA0 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x1409B7AE0 (KdpCreateFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4240C (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6EEEC (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A95C98 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
