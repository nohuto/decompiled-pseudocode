/*
 * XREFs of ZwCreateFile @ 0x1403FAE40
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1403715CC (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1403806CC (LdrpMapResourceFile.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1406E01D0 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407C44F4 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x1407C7AFC (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C8F54 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407D0184 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D23B8 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x14087132C (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140872FE8 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x140890EC4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14089EDF4 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CCD4 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14092E6CC (SmpUtilsGetControlDevice.c)
 *     PopFlushVolumeWorker @ 0x140997FA0 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x1409B6AE0 (KdpCreateFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4140C (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6DEEC (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
