/*
 * XREFs of IopReferenceFileObject @ 0x14023EBCC
 * Callers:
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x14076DEE0 (NtFlushBuffersFileEx.c)
 *     NtCancelIoFile @ 0x14076FE10 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x14076FFC0 (NtCancelIoFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     NtCopyFileChunk @ 0x1407DEE00 (NtCopyFileChunk.c)
 *     NtSetVolumeInformationFile @ 0x14087CFF0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x140943674 (IopValidateJunctionTarget.c)
 *     IopIoRingReferenceFileObject @ 0x140946F94 (IopIoRingReferenceFileObject.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopFileObjectRevoked @ 0x14023EC30 (IopFileObjectRevoked.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
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
