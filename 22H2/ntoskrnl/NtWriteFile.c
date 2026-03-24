/*
 * XREFs of NtWriteFile @ 0x1406C91E0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14059D798 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IopFileObjectRevoked @ 0x140344CF0 (IopFileObjectRevoked.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 */

NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  if ( result >= 0 )
  {
    if ( IopFileObjectRevoked(0LL) )
    {
      HalPutDmaAdapter(0LL);
      return -1073739504;
    }
    else
    {
      return IopWriteFile(
               0LL,
               Event,
               (__int64)ApcRoutine,
               (__int64)ApcContext,
               IoStatusBlock,
               (__int64)Buffer,
               Length,
               ByteOffset,
               Key,
               0);
    }
  }
  return result;
}
