/*
 * XREFs of ViFreeContextTable @ 0x140AC502C
 * Callers:
 *     VfInsertContext @ 0x1405CE4D0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CE660 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
