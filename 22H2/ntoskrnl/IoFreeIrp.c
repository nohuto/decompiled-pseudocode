/*
 * XREFs of IoFreeIrp @ 0x1402D3CF0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140204390 (IoRemoveIoCompletion.c)
 *     IopBuildDeviceIoControlRequest @ 0x14022B300 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x140313D7C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x14032A320 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140358DF0 (IopBuildAsynchronousFsdRequest.c)
 *     IopDropIrp @ 0x14035A9A4 (IopDropIrp.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D080 (PnpDiagnosticCompletionRoutine.c)
 *     PnpDeviceCompletionRoutine @ 0x14036ECE0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x14037A4EC (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x1403CCF18 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x1404EEC80 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x140510060 (IopDeviceEjectComplete.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059F8B0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140650DF0 (IopDeleteFile.c)
 *     FsRtlSetKernelEaFile @ 0x140669B30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140669CD0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406A2E40 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406A2F60 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1406A3400 (IopUserRundown.c)
 *     IopFreeCompletionListPackets @ 0x140702870 (IopFreeCompletionListPackets.c)
 *     CmpFileFlushAndPurge @ 0x14071D008 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071D1A8 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x140756D0C (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x140780C58 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14078D304 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14079AE50 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1DF4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407C4B28 (PopConnectToPolicyDevice.c)
 *     FsRtlQueryInformationFile @ 0x14088C2D0 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D990 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DA30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IoCancelFileOpen @ 0x140893670 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1408B29C8 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408F15AC (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x14092B2C8 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B644 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1520 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1402D3D20 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C51E0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
