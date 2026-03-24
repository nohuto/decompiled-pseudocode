/*
 * XREFs of IopFileObjectRevoked @ 0x140344CF0
 * Callers:
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     NtWriteFile @ 0x1406C91E0 (NtWriteFile.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x140690804 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
