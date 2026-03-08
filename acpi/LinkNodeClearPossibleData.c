/*
 * XREFs of LinkNodeClearPossibleData @ 0x1C0099300
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C009D040 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009E540 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

__int64 *LinkNodeClearPossibleData()
{
  __int64 v0; // rcx
  __int64 *result; // rax

  v0 = LinkNodeListHead - 56;
  for ( result = (__int64 *)LinkNodeListHead; &LinkNodeListHead != result; v0 = (__int64)(result - 7) )
  {
    *(_DWORD *)(v0 + 36) = 0;
    result = *(__int64 **)(v0 + 56);
    *(_DWORD *)(v0 + 28) = 0;
  }
  return result;
}
