/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14022BAA0
 * Callers:
 *     IoVolumeDeviceToDosName @ 0x140620F70 (IoVolumeDeviceToDosName.c)
 *     IopGetSetObjectId @ 0x14065F03C (IopGetSetObjectId.c)
 *     NtApphelpCacheControl @ 0x1406660F0 (NtApphelpCacheControl.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406954F0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406A0FD0 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406A5700 (FsRtlBalanceReads.c)
 *     IoVolumeDeviceToGuidPath @ 0x140721620 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140721790 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetVolumeId @ 0x1407337A0 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B720 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x14077D0D4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D5B4 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140863F3C (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864020 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x1408662B0 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140866390 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D850 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140892D40 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089A978 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14090F384 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F4D8 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14092BEB4 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x14098038C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14022B300 (IopBuildDeviceIoControlRequest.c)
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
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return IopBuildDeviceIoControlRequest(
           IoControlCode,
           (__int64)DeviceObject,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock,
           retaddr);
}
