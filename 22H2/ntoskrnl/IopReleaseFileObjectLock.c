/*
 * XREFs of IopReleaseFileObjectLock @ 0x1402CDEE0
 * Callers:
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F14CC (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F178C (IopValidateAndGetWriteParameters.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     NtQueryVolumeInformationFile @ 0x1406C9680 (NtQueryVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077BFD0 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x140271E08 (KeSetEventBoostPriorityEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 */

void __fastcall IopReleaseFileObjectLock(PADAPTER_OBJECT DmaAdapter)
{
  int Priority; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange((volatile __int32 *)(&DmaAdapter[7].Size + 1), 0);
  if ( *(_DWORD *)&DmaAdapter[7].Version )
    KeSetEventBoostPriorityEx((__int64)&DmaAdapter[8], (__int64)&v3, (__int64)&Priority, &DmaAdapter[8].Version, 0, 1);
  KeAbPostRelease((ULONG_PTR)&DmaAdapter[8]);
  HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegion();
}
