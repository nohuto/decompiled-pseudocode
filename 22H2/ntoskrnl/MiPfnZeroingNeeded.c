/*
 * XREFs of MiPfnZeroingNeeded @ 0x14021AF14
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6C0 (MiChangePageAttributeContiguous.c)
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiConvertContiguousPages @ 0x1403BD470 (MiConvertContiguousPages.c)
 *     MiFindLargePageMemory @ 0x140A497D8 (MiFindLargePageMemory.c)
 * Callees:
 *     MiPageContentsRetainedAcrossAttributeChange @ 0x14021AF4C (MiPageContentsRetainedAcrossAttributeChange.c)
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) != 0
      || (unsigned int)MiPageContentsRetainedAcrossAttributeChange(*(unsigned __int8 *)(a1 + 34) >> 6) == 0;
}
