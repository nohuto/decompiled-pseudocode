/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1402D20D0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1402547F4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025522C (FsRtlAcquireFileForModWriteEx.c)
 *     IoSynchronousPageWriteEx @ 0x14029C49C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x1402E5D7C (IoAsynchronousPageWrite.c)
 *     CcZeroData @ 0x140359820 (CcZeroData.c)
 *     PnpGetRelatedTargetDevice @ 0x140360F2C (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x1403615C4 (CcSetValidData.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F178C (IopValidateAndGetWriteParameters.c)
 *     FsRtlGetFileExtents @ 0x1404EEC80 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1404EEDE0 (FsRtlMdlReadComplete.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopGetBasicInformationFile @ 0x140608D48 (IopGetBasicInformationFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x140608E08 (IopOpenLinkOrRenameTarget.c)
 *     IopGetFileInformation @ 0x140620E34 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140621240 (IoGetDeviceObjectPointer.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140650DF0 (IopDeleteFile.c)
 *     FsRtlReleaseFile @ 0x140655100 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406552D0 (FsRtlAcquireFileExclusiveCommon.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     IopGetSetObjectId @ 0x14065F03C (IopGetSetObjectId.c)
 *     IopCopyOffloadCapable @ 0x140668744 (IopCopyOffloadCapable.c)
 *     FsRtlSetFileSize @ 0x140669A10 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140669B30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140669CD0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 *     IopParseFile @ 0x14067B690 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14067F740 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140691690 (NtNotifyChangeDirectoryFileEx.c)
 *     CcMdlReadComplete @ 0x14069F2D0 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406A0FD0 (FsRtlQueryCachedVdl.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406A2E40 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406A2EC0 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406A2F60 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406A2FE0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1406A45B0 (CcMdlWriteComplete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406BFDE4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1406BFFC4 (FsRtlAcquireFileForCcFlushEx.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1406C8A70 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406C9680 (NtQueryVolumeInformationFile.c)
 *     FsRtlGetFileSize @ 0x140702130 (FsRtlGetFileSize.c)
 *     CmpFileFlushAndPurge @ 0x14071D008 (CmpFileFlushAndPurge.c)
 *     NtSetEaFile @ 0x140731000 (NtSetEaFile.c)
 *     IopGetVolumeId @ 0x1407337A0 (IopGetVolumeId.c)
 *     NtSetVolumeInformationFile @ 0x14076C940 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077BFD0 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x14078D304 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D5B4 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407C4CB4 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x1407C9D60 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AD4C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14088B290 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14088C2D0 (FsRtlQueryInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923FC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140892D40 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140893570 (IoAttachDevice.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14089B114 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x14090F828 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B644 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14092BF68 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CD24 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14092E71C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
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
