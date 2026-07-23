/*
 * XREFs of ZwDeviceIoControlFile @ 0x1403FA660
 * Callers:
 *     PopFlushAndHold @ 0x140576B64 (PopFlushAndHold.c)
 *     SiGetDiskPartitionInformation @ 0x140602A10 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140675760 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDriveLayoutInformation @ 0x14077AECC (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x140785550 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140785694 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140785894 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14078596C (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079888C (EtwpUpdateFileInfoDriverRegistration.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC3F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D2528 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E0B3C (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14095082C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140950A58 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x140952A84 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1409700BC (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140973950 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140973A2C (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140973AC8 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A74F08 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140A95818 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A961A8 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
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
