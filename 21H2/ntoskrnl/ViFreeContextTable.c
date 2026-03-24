/*
 * XREFs of ViFreeContextTable @ 0x1409C84B4
 * Callers:
 *     VfInsertContext @ 0x1405A0850 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405A0A20 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
