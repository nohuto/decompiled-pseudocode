/*
 * XREFs of SepRmCapPoolExpand @ 0x140597E20
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1407CDE5C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409259CC (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
