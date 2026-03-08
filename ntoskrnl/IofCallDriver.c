/*
 * XREFs of IofCallDriver @ 0x140312640
 * Callers:
 *     CcSetValidData @ 0x140209160 (CcSetValidData.c)
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 *     IopCallDriverReference @ 0x14027F1E0 (IopCallDriverReference.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     PopQueueQuerySetIrp @ 0x1402BAFA4 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x1402BB70C (PopDequeueQuerySetIrp.c)
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x1402FE3CC (IoAsynchronousPageWrite.c)
 *     PoCallDriver @ 0x140302260 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x14038CC24 (HalpPassIrpFromFdoToPdo.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403BE180 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoCallDriver @ 0x1405543F0 (IoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x1405C91AC (SmKmIssueVolumeIo.c)
 *     PnpAsynchronousCall @ 0x1406885F8 (PnpAsynchronousCall.c)
 *     WmipForwardWmiIrp @ 0x14069CE70 (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     NtApphelpCacheControl @ 0x1406C31C0 (NtApphelpCacheControl.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     RawReadWriteDeviceControl @ 0x1406F30A4 (RawReadWriteDeviceControl.c)
 *     IopFilterResourceRequirementsCall @ 0x1406F6A4C (IopFilterResourceRequirementsCall.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14072054C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140720680 (IoVolumeDeviceToDosName.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x14072BBD0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14072BD40 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpGetVolumeClusterSize @ 0x14072EFBC (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x140731D18 (CmpFileFlushAndPurge.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     FsRtlSetKernelEaFile @ 0x140786AA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x14078A8E0 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x14079602C (IopGetSetObjectId.c)
 *     FsRtlSetFileSize @ 0x14079BDF4 (FsRtlSetFileSize.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     FsRtlQueryKernelEaFile @ 0x1407D8DE0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835E18 (FsRtlIssueFileNotificationFsctl.c)
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140846840 (PopFanWorker.c)
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086B440 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x140872300 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140872E40 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14092FF88 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140930098 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140931F9C (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093207C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140932B30 (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093A078 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14093BDB0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14093D3C0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140941CCC (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x140943484 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14094E070 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14094E9BC (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x140969DA8 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x14096C094 (PipSendGuestAssignedNotification.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409915D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryQueryStatus @ 0x140992530 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x140992B14 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x1409B5354 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B54A8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B58F4 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D4DC0 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1409D6744 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D6804 (SmKmSendUsageNotification.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A70CE0 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A96E64 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACAAA8 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140ADC520 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140ADC600 (ViFilterDispatchPnp.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9874C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B98940 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x1402B981C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x14045728A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140ABE1D0 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  __int64 MajorFunction; // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver(DeviceObject);
    else
      return IovCallDriver(DeviceObject);
  }
  else
  {
    if ( --Irp->CurrentLocation <= 0 )
      KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
    v2 = Irp->Tail.Overlay.CurrentStackLocation - 1;
    Irp->Tail.Overlay.CurrentStackLocation = v2;
    MajorFunction = v2->MajorFunction;
    v2->DeviceObject = DeviceObject;
    if ( (_BYTE)MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
      return IopPoHandleIrp(Irp);
    else
      return ((__int64 (__fastcall *)(PDEVICE_OBJECT))DeviceObject->DriverObject->MajorFunction[MajorFunction])(DeviceObject);
  }
}
