/*
 * XREFs of ViFreeContextTable @ 0x1409C84C4
 * Callers:
 *     VfInsertContext @ 0x1405A0790 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405A0960 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
