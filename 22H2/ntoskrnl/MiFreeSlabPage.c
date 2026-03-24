/*
 * XREFs of MiFreeSlabPage @ 0x14037B9E4
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x1403103EC (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  return MiEnumerateSlabAllocators(
           *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
           (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreePageToSlabAllocator,
           a1);
}
