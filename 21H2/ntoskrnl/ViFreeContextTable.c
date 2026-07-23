/*
 * XREFs of ViFreeContextTable @ 0x1409C94B4
 * Callers:
 *     VfInsertContext @ 0x1405A0A80 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405A0C50 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
