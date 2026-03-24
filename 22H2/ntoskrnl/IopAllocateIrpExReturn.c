/*
 * XREFs of IopAllocateIrpExReturn @ 0x1402D21F0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B300 (IopBuildDeviceIoControlRequest.c)
 *     IoSynchronousPageWriteEx @ 0x14029C49C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x1402D2090 (IopAllocateIrpMustSucceed.c)
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x1402E5D7C (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140358DF0 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F14CC (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateBackpocketIrp @ 0x1404FFD50 (IopAllocateBackpocketIrp.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopGetFileInformation @ 0x140620E34 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14067F740 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140691690 (NtNotifyChangeDirectoryFileEx.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1406C8A70 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406C9680 (NtQueryVolumeInformationFile.c)
 *     NtSetEaFile @ 0x140731000 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076C940 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077BFD0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923FC (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x140893F30 (IoVerifyVolume.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1402D2220 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1402E5F20 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C47B0 (IovAllocateIrp.c)
 */

__int64 IopAllocateIrpExReturn()
{
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate();
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension();
  return IovAllocateIrp();
}
