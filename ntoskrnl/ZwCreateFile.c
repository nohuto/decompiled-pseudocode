/*
 * XREFs of ZwCreateFile @ 0x140412DB0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x140303FE4 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1403A2E68 (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x1405EC1F0 (DifZwCreateFileWrapper.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     PspIoRateEntryActivate @ 0x140753428 (PspIoRateEntryActivate.c)
 *     EtwpCreateDirectoryFile @ 0x1407727E4 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x14084A990 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeContextStart @ 0x14084C4D0 (CmpVolumeContextStart.c)
 *     FsRtlpOpenDev @ 0x14084EFE0 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140851780 (CmpVolumeManagerGetContextForFilePath.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14085E644 (ExpGetSystemWriteConstraintInformation.c)
 *     IopBootLogToFile @ 0x140941244 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14095272C (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D75D8 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409D8F9C (SmpUtilsGetControlDevice.c)
 *     CmpInitBackupHive @ 0x140A18034 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1A060 (CmpOpenFileWithExtremePrejudice.c)
 *     SdbpGetFileTimestamp @ 0x140A4BCD4 (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 *     PopFlushVolumeWorker @ 0x140AA3140 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140AB0BD0 (KdpCreateFileCallback.c)
 *     BapdpProcessBCDCache @ 0x140B44668 (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B44AFC (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B68F88 (PiCreateDriverDataDirectoryRoot.c)
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
