/*
 * XREFs of MiIsPageInHugePfn @ 0x1403F2F9C
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F3074 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3428 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x14052F038 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  return qword_140C4E668 && _bittest64((const signed __int64 *)qword_140C4E668, (a1 >> 18) & 0x3FFFF);
}
