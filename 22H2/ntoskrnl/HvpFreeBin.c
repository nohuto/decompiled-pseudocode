/*
 * XREFs of HvpFreeBin @ 0x140724FA0
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14065702C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1406572B4 (HvHiveCleanup.c)
 *     HvFreeHivePartial @ 0x14072090C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140721E28 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x14079FB58 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140873C98 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140873EE4 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x140363480 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
