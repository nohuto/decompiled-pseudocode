/*
 * XREFs of HvpFreeBin @ 0x1407E9ED8
 * Callers:
 *     HvFreeHivePartial @ 0x140707258 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x140709780 (HvHiveCleanup.c)
 *     HvpAddBin @ 0x14074F684 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074FCA4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140A1DCE0 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140A1DDA4 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14036D7E4 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     MmFreeIndependentPages @ 0x140880080 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
