/*
 * XREFs of IopReleaseFileObjectLock @ 0x1402314E0
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D50 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140224240 (IopAllocateAndPopulateWriteIrp.c)
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     IoSetInformation @ 0x1408836C0 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x1409441F4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944A28 (IopExceptionCleanupEx.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BBFA0 (KeSetEventBoostPriorityEx.c)
 */

void __fastcall IopReleaseFileObjectLock(volatile __int32 *Object)
{
  int Priority; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange(Object + 29, 0);
  if ( *((_DWORD *)Object + 28) )
    KeSetEventBoostPriorityEx(
      (_DWORD)Object + 128,
      (unsigned int)&v3,
      (unsigned int)&Priority,
      (_DWORD)Object + 128,
      0,
      1);
  KeAbPostRelease((ULONG_PTR)(Object + 32));
  ObfDereferenceObject((PVOID)Object);
  KeLeaveCriticalRegion();
}
