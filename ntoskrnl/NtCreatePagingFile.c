/*
 * XREFs of NtCreatePagingFile @ 0x140834F40
 * Callers:
 *     <none>
 * Callees:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 */

__int64 __fastcall NtCreatePagingFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r10d

  v4 = a4;
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  return MiCreatePagingFile(a1, a2, a3, a4, v4, MiSystemPartition);
}
