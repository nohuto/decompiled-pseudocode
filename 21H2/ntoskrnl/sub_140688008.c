/*
 * XREFs of sub_140688008 @ 0x140688008
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D7994 @ 0x1405D7994 (sub_1405D7994.c)
 *     WbFreeMemoryBlock @ 0x140687F88 (WbFreeMemoryBlock.c)
 *     sub_140963D48 @ 0x140963D48 (sub_140963D48.c)
 *     sub_140963F38 @ 0x140963F38 (sub_140963F38.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 */

void __fastcall sub_140688008(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
