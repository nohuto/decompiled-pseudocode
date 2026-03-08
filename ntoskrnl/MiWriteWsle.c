/*
 * XREFs of MiWriteWsle @ 0x140228948
 * Callers:
 *     MiRemoveWsleList @ 0x1402824E0 (MiRemoveWsleList.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140B5CA80 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140229800 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2)
{
  return MiWriteValidPteVolatile(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
