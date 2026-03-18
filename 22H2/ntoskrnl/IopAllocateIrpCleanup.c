/*
 * XREFs of IopAllocateIrpCleanup @ 0x1409441F4
 * Callers:
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765DB0 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407CA550 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x140881DA0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1408836C0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945B70 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14094AD10 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(volatile __int32 *Object, PVOID a2)
{
  if ( a2 )
    ObfDereferenceObject(a2);
  if ( (Object[20] & 2) != 0 )
    IopReleaseFileObjectLock(Object);
  return ObfDereferenceObject((PVOID)Object);
}
