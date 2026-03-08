/*
 * XREFs of LinkNodeCopyData @ 0x1C0099338
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C009D040 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeCopyData(int a1)
{
  __int64 v1; // rdx
  __int64 *i; // rax

  v1 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v1 = (__int64)(i - 7) )
  {
    if ( a1 == 1 )
    {
      *(_DWORD *)(v1 + 36) = *(_DWORD *)(v1 + 32);
      *(_DWORD *)(v1 + 28) = *(_DWORD *)(v1 + 24);
    }
    else
    {
      *(_DWORD *)(v1 + 32) = *(_DWORD *)(v1 + 36);
      *(_DWORD *)(v1 + 24) = *(_DWORD *)(v1 + 28);
    }
    i = *(__int64 **)(v1 + 56);
  }
  return 0LL;
}
