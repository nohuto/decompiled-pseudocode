/*
 * XREFs of HvpFreeBin @ 0x14079AE68
 * Callers:
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140A1AF8C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140A1B050 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x140301FE4 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a3, a2);
}
