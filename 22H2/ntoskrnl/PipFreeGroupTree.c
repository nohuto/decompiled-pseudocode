/*
 * XREFs of PipFreeGroupTree @ 0x140B6BA28
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B40180 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140B6BA28 (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140B6BA28 (PipFreeGroupTree.c)
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
