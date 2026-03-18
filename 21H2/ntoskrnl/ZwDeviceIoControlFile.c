/*
 * XREFs of ZwDeviceIoControlFile @ 0x14041B840
 * Callers:
 *     PopFlushAndHold @ 0x1405D6CD4 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x14061F970 (DifZwDeviceIoControlFileWrapper.c)
 *     SiGetDiskPartitionInformation @ 0x1406BB628 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406D958C (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406DBCB4 (PfSnVolumeCheckIsSdBus.c)
 *     BiGetPartitionInformation @ 0x140803C4C (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140803D90 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140803F88 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140804060 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14082EA28 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085D06C (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1408624E8 (ExpGetSystemWriteConstraintInformation.c)
 *     ExpGetDriveGeometry @ 0x1409FC9E0 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCC0C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FEC6C (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140A1DE3C (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140A216DC (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140A217B8 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A218B8 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A21954 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B3116C (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140B54680 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140B54FF8 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
