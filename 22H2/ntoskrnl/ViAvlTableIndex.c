/*
 * XREFs of ViAvlTableIndex @ 0x14020A468
 * Callers:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x14020A3CC (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14020A740 (VfAvlDeleteTreeNode.c)
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
