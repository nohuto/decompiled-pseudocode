/*
 * XREFs of MiPfnZeroingNeeded @ 0x1402384D0
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiAddMdlPageToTradeBlock @ 0x14027FB08 (MiAddMdlPageToTradeBlock.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiChangePageAttributeContiguous @ 0x140328CE8 (MiChangePageAttributeContiguous.c)
 *     MiConvertContiguousPages @ 0x140355124 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140355284 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140374EF4 (MiAllocateMdlPagesByLists.c)
 *     MiUpdateLargePagePfns @ 0x14055EB3C (MiUpdateLargePagePfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1, int a2)
{
  int v2; // ecx
  _BOOL8 result; // rax

  result = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140C4DFD8) == 0 )
      return 0;
  }
  return result;
}
