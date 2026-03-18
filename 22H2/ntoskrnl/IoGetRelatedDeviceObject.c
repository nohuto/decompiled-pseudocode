/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14022F530
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140250E60 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x1402A66F0 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F4A7C (FsRtlReleaseFileForModWrite.c)
 *     CcZeroData @ 0x1402FB700 (CcZeroData.c)
 *     PnpGetRelatedTargetDevice @ 0x1403224B8 (PnpGetRelatedTargetDevice.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140349A9C (FsRtlAcquireFileForModWriteEx.c)
 *     CcSetValidData @ 0x140354824 (CcSetValidData.c)
 *     IoAsynchronousPageWrite @ 0x1403693BC (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x14053C938 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14053CAB0 (FsRtlMdlReadComplete.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     FsRtlReleaseFile @ 0x140723980 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B90 (FsRtlAcquireFileExclusiveCommon.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     CmpFileFlushAndPurge @ 0x1407510D4 (CmpFileFlushAndPurge.c)
 *     IopGetFileInformation @ 0x14075B36C (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x14075B770 (IoGetDeviceObjectPointer.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765DB0 (BuildQueryDirectoryIrp.c)
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140773AC0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B4A78 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4D18 (FsRtlReleaseFileForCcFlush.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     IopParseFile @ 0x1407BC1D0 (IopParseFile.c)
 *     WmipGetFilePDO @ 0x1407C3F1C (WmipGetFilePDO.c)
 *     NtQueryEaFile @ 0x1407CA550 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x1407D3564 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1407D37EC (IopGetBasicInformationFile.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5EE0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1407D91F0 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x1407E0040 (CcMdlReadComplete.c)
 *     IopGetSetObjectId @ 0x1407E523C (IopGetSetObjectId.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1407E9990 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1407E9A10 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1407E9AB0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1407E9B30 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1407EA350 (CcMdlWriteComplete.c)
 *     FsRtlSetFileSize @ 0x1407EAC14 (FsRtlSetFileSize.c)
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835AC8 (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x14084E120 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 *     IopCopyOffloadCapable @ 0x140875F18 (IopCopyOffloadCapable.c)
 *     NtSetVolumeInformationFile @ 0x140881DA0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1408836C0 (IoSetInformation.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093D098 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14093D5F0 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14093EDD0 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140944CEC (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945B70 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1409464A4 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140946CB0 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x14094AD10 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1409519DC (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1409B8828 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8DAC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1409D96A4 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA478 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409DBE3C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
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
