/*
 * XREFs of ZwCreateFile @ 0x14041C200
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1402D8914 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1403D79F4 (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x14061E6A0 (DifZwCreateFileWrapper.c)
 *     PspIoRateEntryActivate @ 0x1406D4DF0 (PspIoRateEntryActivate.c)
 *     EtwpCreateDirectoryFile @ 0x1406F0DC8 (EtwpCreateDirectoryFile.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     FsRtlpOpenDev @ 0x14085698C (FsRtlpOpenDev.c)
 *     CmpVolumeContextStart @ 0x140857634 (CmpVolumeContextStart.c)
 *     PopGetPolicyDeviceObject @ 0x140858E74 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085A75C (CmpVolumeManagerGetContextForFilePath.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1408624E8 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x140917E18 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140919908 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x140933C14 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x140943B34 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D71F0 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409D8B9C (SmpUtilsGetControlDevice.c)
 *     PopFlushVolumeWorker @ 0x140A51F50 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140A72AC0 (KdpCreateFileCallback.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B1C49C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessBCDCache @ 0x140B1C78C (BapdpProcessBCDCache.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B286CC (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
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
