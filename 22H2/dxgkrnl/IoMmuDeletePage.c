/*
 * XREFs of IoMmuDeletePage @ 0x1C002870C
 * Callers:
 *     IoMmuDeleteTreeNode @ 0x1C0056FEC (IoMmuDeleteTreeNode.c)
 *     IoMmuUpdatePfn @ 0x1C0057570 (IoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

void __fastcall IoMmuDeletePage(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
