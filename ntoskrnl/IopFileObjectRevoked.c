/*
 * XREFs of IopFileObjectRevoked @ 0x14023EC30
 * Callers:
 *     IopReferenceFileObject @ 0x14023EBCC (IopReferenceFileObject.c)
 *     NtCopyFileChunk @ 0x1407DEE00 (NtCopyFileChunk.c)
 *     IopIoRingDispatchWrite @ 0x140946CF4 (IopIoRingDispatchWrite.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
