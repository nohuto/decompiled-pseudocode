/*
 * XREFs of ZwDeviceIoControlFile @ 0x1404123F0
 * Callers:
 *     PopFlushAndHold @ 0x14058DE18 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x1405ED470 (DifZwDeviceIoControlFileWrapper.c)
 *     SiGetDiskPartitionInformation @ 0x14076EAA0 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14077B1D8 (PfSnVolumeCheckSeekPenalty.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14081B254 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1408300C8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1408302C0 (BiIssueGetDriveLayoutIoctl.c)
 *     BiGetPartitionInformation @ 0x140830398 (BiGetPartitionInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1408304AC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140858188 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14085E644 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A0F74 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1409F9C60 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409F9DB4 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FB67C (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140A5A870 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140A5C84C (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140A5C928 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A5CA28 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A5CAC4 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B72350 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140B9799C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B97B20 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140B97E10 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140B97F70 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
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
