/*
 * XREFs of ZwDeviceIoControlFile @ 0x1403F9B00
 * Callers:
 *     PopFlushAndHold @ 0x140576864 (PopFlushAndHold.c)
 *     SiGetDiskPartitionInformation @ 0x140687EB0 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14069BE7C (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDriveLayoutInformation @ 0x14077AC0C (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x140785290 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407853D4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1407855D4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407856AC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079351C (EtwpUpdateFileInfoDriverRegistration.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC634 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D22D8 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E0A2C (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1409506AC (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409508D8 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x140952904 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14096FF2C (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1409737C0 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14097389C (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140973938 (SiQueryProperty.c)
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
  return KiServiceInternal(FileHandle);
}
