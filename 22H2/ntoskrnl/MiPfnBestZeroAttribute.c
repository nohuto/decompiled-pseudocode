/*
 * XREFs of MiPfnBestZeroAttribute @ 0x1403393CC
 * Callers:
 *     MiZeroAndReleasePages @ 0x1402D3030 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1402E77E0 (MiAllocateLargeZeroPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9810 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402F9B08 (MiUpdateCacheAttributeListsForPage.c)
 *     MiZeroPhysicalPage @ 0x14033905C (MiZeroPhysicalPage.c)
 *     MiZeroAndConvertPage @ 0x1406500A4 (MiZeroAndConvertPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  return *(unsigned int *)(qword_140C65BA0
                         + 4
                         * (a2
                          + 28LL
                          + 94LL
                          * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4))
                            + 2)
                          + 4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6)));
}
