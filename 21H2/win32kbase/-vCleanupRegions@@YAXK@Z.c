/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C001C150
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C001C270 (HmgNextOwned.c)
 *     bDeleteRegion @ 0x1C001C640 (bDeleteRegion.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002E990 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C002F920 (HmgLockEx.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int Owned; // esi

  Owned = 0;
  do
    Owned = HmgNextOwned(Owned, a1);
  while ( Owned );
}
