/*
 * XREFs of sub_1405E7168 @ 0x1405E7168
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D7994 @ 0x1405D7994 (sub_1405D7994.c)
 *     WbFreeMemoryBlock @ 0x1405E70E8 (WbFreeMemoryBlock.c)
 *     sub_140963F28 @ 0x140963F28 (sub_140963F28.c)
 *     sub_140964118 @ 0x140964118 (sub_140964118.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 */

void __fastcall sub_1405E7168(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
