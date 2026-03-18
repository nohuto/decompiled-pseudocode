/*
 * XREFs of IofCallDriver @ 0x14022EF10
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140250E60 (IoSynchronousPageWriteEx.c)
 *     PopDequeueQuerySetIrp @ 0x14028E29C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x14028E8AC (PopQueueQuerySetIrp.c)
 *     IoPageReadEx @ 0x1402A66F0 (IoPageReadEx.c)
 *     IopCallDriverReference @ 0x1402A7820 (IopCallDriverReference.c)
 *     CcSetValidData @ 0x140354824 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140354C60 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x1403693BC (IoAsynchronousPageWrite.c)
 *     PoCallDriver @ 0x14036DB40 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x14038F0E4 (HalpPassIrpFromFdoToPdo.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C3A40 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoCallDriver @ 0x140556890 (IoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x1405CB65C (SmKmIssueVolumeIo.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     WmipForwardWmiIrp @ 0x1406C7530 (WmipForwardWmiIrp.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140701FE0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140702150 (IoVolumeDeviceNameToGuidPath.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x1407510D4 (CmpFileFlushAndPurge.c)
 *     IopGetFileInformation @ 0x14075B36C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14075B4A0 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140773AC0 (FsRtlQueryKernelEaFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140790740 (IopFilterResourceRequirementsCall.c)
 *     RawReadWriteDeviceControl @ 0x140791E64 (RawReadWriteDeviceControl.c)
 *     PnpAsynchronousCall @ 0x1407954A4 (PnpAsynchronousCall.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5EE0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1407D91F0 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1407E523C (IopGetSetObjectId.c)
 *     FsRtlSetFileSize @ 0x1407EAC14 (FsRtlSetFileSize.c)
 *     PnpQueryInterface @ 0x1407FD8F0 (PnpQueryInterface.c)
 *     PopThermalWorker @ 0x140801D90 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140802170 (PopFanWorker.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835AC8 (FsRtlIssueFileNotificationFsctl.c)
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D960 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086FCF8 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x1408751C0 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140875D00 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x140882338 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x1408836C0 (IoSetInformation.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140932EB8 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140932FC8 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140934FAC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093508C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140935B40 (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093D098 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14093EDD0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1409403E0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140944CEC (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1409464A4 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140947760 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140951090 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x1409519DC (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x14096CDC8 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x14096F0B4 (PipSendGuestAssignedNotification.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryQueryStatus @ 0x1409955E0 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x140995BC4 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x1409B8384 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B84D8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B8924 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7C60 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1409D95E4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D96A4 (SmKmSendUsageNotification.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A739E0 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A99BF4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99FA4 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACEAA8 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140AE0520 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140AE0600 (ViFilterDispatchPnp.c)
 *     IopStoreBootDriveLetter @ 0x140B3CE40 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B3D2CC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B94A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9C95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9CB50 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x14028D60C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x14045F22A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140AC21D0 (IovCallDriver.c)
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
