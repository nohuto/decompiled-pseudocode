/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C00C5F88
 * Callers:
 *     PplCreateLookasideList @ 0x1C00342D4 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C00C5D20 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00C5DC8 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00C5E74 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
