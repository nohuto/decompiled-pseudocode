/*
 * XREFs of NtReadFile @ 0x1407E0B30
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1405C8984 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x1407E1BA4 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 */

NTSTATUS __stdcall NtReadFile(
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
  PVOID v11; // rbx
  _DWORD *v12; // rax
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             1u,
             (POBJECT_TYPE)IoFileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v11 = Object;
  if ( result >= 0 )
  {
    v12 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v12 && (*v12 & 4) != 0 && PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(v11);
      return -1073739504;
    }
    else
    {
      return IopReadFile(
               v11,
               Event,
               (__int64)IoStatusBlock,
               Buffer,
               Length,
               (__int64)ByteOffset,
               (__int64)Key,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
    }
  }
  return result;
}
