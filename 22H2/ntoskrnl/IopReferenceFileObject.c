/*
 * XREFs of IopReferenceFileObject @ 0x1403016DC
 * Callers:
 *     NtFlushBuffersFileEx @ 0x140685F70 (NtFlushBuffersFileEx.c)
 *     NtCopyFileChunk @ 0x140749DA0 (NtCopyFileChunk.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765DB0 (BuildQueryDirectoryIrp.c)
 *     NtCancelIoFile @ 0x1407C1CC0 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1407C1E70 (NtCancelIoFileEx.c)
 *     NtQueryEaFile @ 0x1407CA550 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x140881DA0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945B70 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x140946694 (IopValidateJunctionTarget.c)
 *     IopIoRingReferenceFileObject @ 0x140949FB4 (IopIoRingReferenceFileObject.c)
 *     NtSetEaFile @ 0x14094AD10 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x140301740 (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION a5)
{
  NTSTATUS v6; // ebx
  PVOID v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &v8, a5);
  *a4 = v8;
  if ( v6 >= 0 && (unsigned __int8)IopFileObjectRevoked() )
  {
    ObfDereferenceObject(*a4);
    return (unsigned int)-1073739504;
  }
  return (unsigned int)v6;
}
