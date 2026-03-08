/*
 * XREFs of IopReleaseFileObjectLock @ 0x140267920
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x1402400A0 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140240590 (IopAllocateAndPopulateWriteIrp.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     IopWriteFile @ 0x1406B3E10 (IopWriteFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     IopFlushBuffersFile @ 0x14076DF74 (IopFlushBuffersFile.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x1409411D4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

void __fastcall IopReleaseFileObjectLock(volatile __int32 *Object)
{
  int Priority; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange(Object + 29, 0);
  if ( *((_DWORD *)Object + 28) )
    KeSetEventBoostPriorityEx((__int64)(Object + 32), (__int64)&v3, &Priority, (__int64)(Object + 32), 0, 1);
  KeAbPostRelease((ULONG_PTR)(Object + 32));
  ObfDereferenceObject((PVOID)Object);
  KeLeaveCriticalRegion();
}
