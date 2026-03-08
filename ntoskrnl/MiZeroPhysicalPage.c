/*
 * XREFs of MiZeroPhysicalPage @ 0x1402CE78C
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiZeroAndReleasePages @ 0x1402776A0 (MiZeroAndReleasePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiFreePageToSlabAllocator @ 0x1402CE4E0 (MiFreePageToSlabAllocator.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MiPerformFinalZeroing @ 0x14064B6C0 (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertPage @ 0x14064DA84 (MiZeroAndConvertPage.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x1402CE820 (MiFillPhysicalPages.c)
 *     MiPfnBestZeroAttribute @ 0x1402CEAFC (MiPfnBestZeroAttribute.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiZeroPhysicalPage(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // r9

  v6 = 48 * a2 - 0x220000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = v7;
  if ( (a3 & 1) == 0 )
  {
    v9 = MiPfnBestZeroAttribute(v6, a4, a3);
    v8 = v9;
    if ( v9 != v7 )
      MiChangePageAttribute(v6, v9, 0LL, v10);
  }
  result = MiFillPhysicalPages(a2);
  if ( v8 != v7 && v8 != a4 )
    return MiChangePageAttribute(v6, v7, 0LL, v12);
  return result;
}
