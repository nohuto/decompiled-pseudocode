/*
 * XREFs of IoFreeIrp @ 0x14030EC00
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140202690 (PnpDeviceCompletionRoutine.c)
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x140293E48 (IopDropIrp.c)
 *     PopFreeIrp @ 0x1402BB5E8 (PopFreeIrp.c)
 *     IopCompletePageWrite @ 0x1403019B0 (IopCompletePageWrite.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x140315A70 (IoRemoveIoCompletion.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlGetFileExtents @ 0x14053A498 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1405627B0 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140562810 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x14058779C (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CAEC0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x1405DCED0 (DifIoFreeIrpWrapper.c)
 *     WmipSendWmiIrp @ 0x14069CD88 (WmipSendWmiIrp.c)
 *     IopFreeCompletionListPackets @ 0x1406F7B38 (IopFreeCompletionListPackets.c)
 *     CmpGetVolumeClusterSize @ 0x14072EFBC (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x140731D18 (CmpFileFlushAndPurge.c)
 *     WmipGetFilePDO @ 0x14077437C (WmipGetFilePDO.c)
 *     FsRtlSetKernelEaFile @ 0x140786AA0 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x140799A30 (IopUserRundown.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14079A910 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14079AA30 (FsRtlMdlReadEx.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1407D8DE0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140847A74 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084A820 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084BC94 (PopAcquireCoolingInterface.c)
 *     WmipSetTraceNotify @ 0x140869620 (WmipSetTraceNotify.c)
 *     FsRtlQueryInformationFile @ 0x14093BDB0 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D500 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D5A0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 *     IoCancelFileOpen @ 0x140943D90 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x140969D18 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x140991958 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1409D5B90 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5F0C (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACAAA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x14030EC30 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140ABE6D0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
