/*
 * XREFs of MiPfnBestZeroAttribute @ 0x1402CEAFC
 * Callers:
 *     MiZeroAndReleasePages @ 0x1402776A0 (MiZeroAndReleasePages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402B4948 (MiUpdateCacheAttributeListsForPage.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiZeroAndConvertPage @ 0x14064DA84 (MiZeroAndConvertPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  return *(unsigned int *)(qword_140C65720
                         + 4
                         * (a2
                          + 28LL
                          + 94LL
                          * *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4))
                                            + 8)
                          + 4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6)));
}
