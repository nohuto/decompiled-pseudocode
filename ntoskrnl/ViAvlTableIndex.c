/*
 * XREFs of ViAvlTableIndex @ 0x140303AE4
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x140303A48 (VfAvlInsertReservedTreeNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViAvlTableIndex(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v3 == 1 )
    return 0LL;
  else
    return (a2 >> 12) % v3;
}
