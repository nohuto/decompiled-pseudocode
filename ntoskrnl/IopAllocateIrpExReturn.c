/*
 * XREFs of IopAllocateIrpExReturn @ 0x140312290
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140240590 (IopAllocateAndPopulateWriteIrp.c)
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x1402FE3CC (IoAsynchronousPageWrite.c)
 *     IopAllocateIrpMustSucceed @ 0x14030F2F0 (IopAllocateIrpMustSucceed.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateBackpocketIrp @ 0x1405525E0 (IopAllocateBackpocketIrp.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14072054C (IopGetFileInformation.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x14076DF74 (IopFlushBuffersFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     NtSetVolumeInformationFile @ 0x14087CFF0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402B18A4 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1403122C0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140ABDCE0 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
