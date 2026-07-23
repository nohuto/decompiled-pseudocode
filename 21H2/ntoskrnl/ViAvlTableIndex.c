/*
 * XREFs of ViAvlTableIndex @ 0x140371824
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1403716C0 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14037E688 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037E744 (VfAvlLookupTreeNode.c)
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
