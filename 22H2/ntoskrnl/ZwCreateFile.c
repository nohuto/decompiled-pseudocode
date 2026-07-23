/*
 * XREFs of ZwCreateFile @ 0x1403FA4C0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x140371DAC (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14037FE7C (LdrpMapResourceFile.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x140713A70 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407C4CB4 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x1407C7A1C (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C8E74 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407D00A4 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D22D8 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x14087137C (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873038 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x140890F14 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14089EE44 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CD24 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14092E71C (SmpUtilsGetControlDevice.c)
 *     PopFlushVolumeWorker @ 0x140997F90 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x1409B6AE0 (KdpCreateFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4083C (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6DEEC (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
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
