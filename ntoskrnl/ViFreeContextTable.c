/*
 * XREFs of ViFreeContextTable @ 0x140AC102C
 * Callers:
 *     VfInsertContext @ 0x1405CC020 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CC1B0 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
