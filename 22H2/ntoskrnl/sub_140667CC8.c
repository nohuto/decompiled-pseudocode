/*
 * XREFs of sub_140667CC8 @ 0x140667CC8
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D7994 @ 0x1405D7994 (sub_1405D7994.c)
 *     WbFreeMemoryBlock @ 0x140667C48 (WbFreeMemoryBlock.c)
 *     sub_140963D98 @ 0x140963D98 (sub_140963D98.c)
 *     sub_140963F88 @ 0x140963F88 (sub_140963F88.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 */

void __fastcall sub_140667CC8(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
