/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1403121F0
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140202D04 (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x140209160 (CcSetValidData.c)
 *     FsRtlReleaseFileForModWrite @ 0x140212510 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140212E3C (FsRtlAcquireFileForModWriteEx.c)
 *     CcZeroData @ 0x140243410 (CcZeroData.c)
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x1402FE3CC (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x14053A498 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14053A610 (FsRtlMdlReadComplete.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14072054C (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 *     CmpFileFlushAndPurge @ 0x140731D18 (CmpFileFlushAndPurge.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14075F248 (FsRtlReleaseFileForCcFlush.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     IopParseFile @ 0x14076A460 (IopParseFile.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x14076DF74 (IopFlushBuffersFile.c)
 *     WmipGetFilePDO @ 0x14077437C (WmipGetFilePDO.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x140783F08 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x140784190 (IopGetBasicInformationFile.c)
 *     FsRtlSetKernelEaFile @ 0x140786AA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x14078A8E0 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x140790C70 (CcMdlReadComplete.c)
 *     IopGetSetObjectId @ 0x14079602C (IopGetSetObjectId.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14079A910 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x14079A990 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x14079AA30 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x14079AAB0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x14079B3A0 (CcMdlWriteComplete.c)
 *     FsRtlSetFileSize @ 0x14079BDF4 (FsRtlSetFileSize.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     FsRtlReleaseFile @ 0x1407D18E0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1407D1AF0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryKernelEaFile @ 0x1407D8DE0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835E18 (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x14084A990 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 *     IopCopyOffloadCapable @ 0x140873058 (IopCopyOffloadCapable.c)
 *     NtSetVolumeInformationFile @ 0x14087CFF0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093A078 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14093A5D0 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14093BDB0 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140941CCC (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140943484 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140943C90 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14094E9BC (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1409B57F8 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5F0C (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1409D6804 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D75D8 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409D8F9C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  _QWORD *FileObjectExtension; // r8
  PVPB v5; // rax
  PDEVICE_OBJECT *v6; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v5 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v5->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != IopRevocationExtension
      && (v6 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v6 )
    {
      while ( result != *v6 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v6;
    }
    else
    {
      do
      {
LABEL_5:
        result = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
    }
  }
  return result;
}
