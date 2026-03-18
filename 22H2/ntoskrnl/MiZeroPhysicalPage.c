/*
 * XREFs of MiZeroPhysicalPage @ 0x14033905C
 * Callers:
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiZeroAndReleasePages @ 0x1402D3030 (MiZeroAndReleasePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiFreePageToSlabAllocator @ 0x140338DB0 (MiFreePageToSlabAllocator.c)
 *     MiPerformFinalZeroing @ 0x14064DCDC (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertPage @ 0x1406500A4 (MiZeroAndConvertPage.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x1403390F0 (MiFillPhysicalPages.c)
 *     MiPfnBestZeroAttribute @ 0x1403393CC (MiPfnBestZeroAttribute.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 */

__int64 __fastcall MiZeroPhysicalPage(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 result; // rax

  v6 = 48 * a2 - 0x220000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = v7;
  if ( (a3 & 1) == 0 )
  {
    v9 = MiPfnBestZeroAttribute(v6, a4, a3);
    v8 = v9;
    if ( v9 != v7 )
      MiChangePageAttribute(v6, v9, 0LL);
  }
  result = MiFillPhysicalPages(a2);
  if ( v8 != v7 && v8 != a4 )
    return MiChangePageAttribute(v6, v7, 0LL);
  return result;
}
