/*
 * XREFs of MiComparePageFileMemoryExtents @ 0x14065D52C
 * Callers:
 *     MiFindPageFileMemoryExtent @ 0x14065DAE0 (MiFindPageFileMemoryExtent.c)
 *     MiMovePageFileMemoryExtents @ 0x14065E2B8 (MiMovePageFileMemoryExtents.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A44298 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComparePageFileMemoryExtents(_DWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_DWORD *)(a2 + 28) )
    return (unsigned int)-(*a1 < *(_DWORD *)(a2 + 24));
  else
    return 1LL;
}
