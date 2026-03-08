/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x1406B5654
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x1402400A0 (IopValidateAndGetWriteParameters.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x14076DF74 (IopFlushBuffersFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     NtSetVolumeInformationFile @ 0x14087CFF0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     IopWaitForLockAlertable @ 0x140241084 (IopWaitForLockAlertable.c)
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        volatile signed __int32 *Object,
        char a2,
        char a3,
        __int64 a4,
        _BYTE *a5)
{
  NTSTATUS v9; // ebp
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  int Priority; // [rsp+60h] [rbp+8h] BYREF

  _InterlockedIncrement(Object + 28);
  do
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange(Object + 29, 1) )
    {
      if ( a4 )
        *(_BYTE *)(a4 + 18) = 1;
      ObfReferenceObject((PVOID)Object);
      _InterlockedDecrement(Object + 28);
      return 0;
    }
    if ( a4 )
      KeAbPreWait((__int64 *)a4);
    v9 = IopWaitForLockAlertable((PVOID)(Object + 32), a2, a3);
    if ( a4 )
      a4 = KeAbPreAcquire((__int64)(Object + 32), a4);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement(Object + 28);
  if ( !*((_DWORD *)Object + 29) && *((_DWORD *)Object + 28) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx((__int64)(Object + 32), (__int64)v11, &Priority, (__int64)(Object + 32), 0, 1);
  }
  if ( a4 )
    KeAbPostReleaseEx((ULONG_PTR)(Object + 32), a4);
  *a5 = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
