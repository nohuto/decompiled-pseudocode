/*
 * XREFs of IopAllocateIrpCleanup @ 0x140890EA4
 * Callers:
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
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
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 */

void __fastcall IopAllocateIrpCleanup(PADAPTER_OBJECT DmaAdapter, PADAPTER_OBJECT a2)
{
  if ( a2 )
    HalPutDmaAdapter(a2);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
    IopReleaseFileObjectLock(DmaAdapter);
  HalPutDmaAdapter(DmaAdapter);
}
