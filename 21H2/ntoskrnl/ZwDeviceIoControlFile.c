/*
 * XREFs of ZwDeviceIoControlFile @ 0x1403FA480
 * Callers:
 *     PopFlushAndHold @ 0x140576924 (PopFlushAndHold.c)
 *     SiGetDiskPartitionInformation @ 0x1406A4DE0 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406C6E70 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDriveLayoutInformation @ 0x14077AD0C (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x140785390 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407854D4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1407856D4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407857AC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079868C (EtwpUpdateFileInfoDriverRegistration.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC1F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D23B8 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E09DC (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14095065C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140950888 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409528B4 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14096FEDC (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140973770 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14097384C (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x1409738E8 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A73F08 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140A94818 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A951A8 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
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
