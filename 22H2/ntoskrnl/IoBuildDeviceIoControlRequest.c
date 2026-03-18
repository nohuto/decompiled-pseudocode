/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140251430
 * Callers:
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140701FE0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140702150 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x14075B4A0 (IoVolumeDeviceToDosName.c)
 *     FsRtlQueryCachedVdl @ 0x1407D91F0 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1407E523C (IopGetSetObjectId.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835AC8 (FsRtlIssueFileNotificationFsctl.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D960 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086FCF8 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x1408751C0 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140875D00 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x140882338 (IopInvalidateVolumesForDevice.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140932EB8 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140932FC8 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140934FAC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093508C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1409403E0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140944CEC (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1409464A4 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1409510B8 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     RawPerformDevIoCtrl @ 0x1409B8384 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B84D8 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1409D95E4 (SmKmSendDeviceControl.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A739E0 (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1402510F0 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IopBuildDeviceIoControlRequest(
           IoControlCode,
           (__int64)DeviceObject,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock);
}
