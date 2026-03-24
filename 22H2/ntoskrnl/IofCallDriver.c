/*
 * XREFs of IofCallDriver @ 0x1402D2170
 * Callers:
 *     IopCallDriverReference @ 0x14022B670 (IopCallDriverReference.c)
 *     IoSynchronousPageWriteEx @ 0x14029C49C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     IoCallDriverWithTracing @ 0x1402D4050 (IoCallDriverWithTracing.c)
 *     IoAsynchronousPageWrite @ 0x1402E5D7C (IoAsynchronousPageWrite.c)
 *     IoSynchronousCallDriver @ 0x140318390 (IoSynchronousCallDriver.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140325030 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcSetValidData @ 0x1403615C4 (CcSetValidData.c)
 *     PopDequeueQuerySetIrp @ 0x140397A4C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140397C44 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x14039A1F0 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A6B9C (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x14059DEE4 (SmKmIssueVolumeIo.c)
 *     IopGetFileInformation @ 0x140620E34 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140620F70 (IoVolumeDeviceToDosName.c)
 *     RawReadWriteDeviceControl @ 0x14062D9F8 (RawReadWriteDeviceControl.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x140650DF0 (IopDeleteFile.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x14065F03C (IopGetSetObjectId.c)
 *     NtApphelpCacheControl @ 0x1406660F0 (NtApphelpCacheControl.c)
 *     FsRtlSetFileSize @ 0x140669A10 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140669B30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140669CD0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406954F0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406A0FD0 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406A5700 (FsRtlBalanceReads.c)
 *     WmipForwardWmiIrp @ 0x1406B24CC (WmipForwardWmiIrp.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x140702130 (FsRtlGetFileSize.c)
 *     CmpFileFlushAndPurge @ 0x14071D008 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071D1A8 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14071D3C0 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x140721620 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140721790 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetVolumeId @ 0x1407337A0 (IopGetVolumeId.c)
 *     IopFilterResourceRequirementsCall @ 0x140750270 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x1407653A4 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14076872C (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B720 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077BFD0 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14077D0D4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D5B4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x1407C0930 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407C0A30 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x1407C9D60 (PiPagePathSetState.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140863F3C (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864020 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x1408662B0 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140866390 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140866ACC (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AD4C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088C2D0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D850 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140892D40 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140893F30 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14089A950 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14089B114 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1408B2A10 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x1408B44B0 (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408ED448 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408EDA44 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x14090F384 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F4D8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090F928 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A558 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14092BEB4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092BF68 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x14098038C (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB274 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1520 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1409E5230 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1409E5310 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x140A61AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A955E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A957E8 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140397F34 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140507C40 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C4CC4 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  __int64 MajorFunction; // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver((PADAPTER_OBJECT)DeviceObject);
    else
      return IovCallDriver((PADAPTER_OBJECT)DeviceObject);
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
