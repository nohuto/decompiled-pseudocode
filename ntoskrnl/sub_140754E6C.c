/*
 * XREFs of sub_140754E6C @ 0x140754E6C
 * Callers:
 *     sub_1407538E4 @ 0x1407538E4 (sub_1407538E4.c)
 *     sub_140753A9C @ 0x140753A9C (sub_140753A9C.c)
 *     WbFreeMemoryBlock @ 0x140754DEC (WbFreeMemoryBlock.c)
 *     sub_140A4B164 @ 0x140A4B164 (sub_140A4B164.c)
 *     sub_140A4B34C @ 0x140A4B34C (sub_140A4B34C.c)
 * Callees:
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 */

void __fastcall sub_140754E6C(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
