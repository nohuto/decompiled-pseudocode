/*
 * XREFs of PipFreeGroupTree @ 0x140B67B98
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140B67B98 (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140B67B98 (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
