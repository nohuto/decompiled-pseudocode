/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14024FE00
 * Callers:
 *     NtApphelpCacheControl @ 0x1406C31C0 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x140720680 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuidPath @ 0x14072BBD0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14072BD40 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlQueryCachedVdl @ 0x14078A8E0 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x14079602C (IopGetSetObjectId.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835E18 (FsRtlIssueFileNotificationFsctl.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086B440 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x140872300 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140872E40 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14092FF88 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140930098 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140931F9C (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093207C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14093D3C0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140941CCC (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x140943484 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14094E098 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409915D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     RawPerformDevIoCtrl @ 0x1409B5354 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B54A8 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1409D6744 (SmKmSendDeviceControl.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A70CE0 (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
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
           (__int64)OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock);
}
