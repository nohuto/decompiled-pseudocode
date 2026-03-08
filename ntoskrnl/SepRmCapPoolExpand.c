/*
 * XREFs of SepRmCapPoolExpand @ 0x1405B7464
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1408597BC (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409CEF1C (SepReadAndInsertCaps.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1, __int64 a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(256LL, a2, 1884513619LL);
}
