/*
 * XREFs of MiPfnZeroingNeeded @ 0x140214AC4
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiConvertContiguousPages @ 0x1403B7B48 (MiConvertContiguousPages.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     MiPageContentsRetainedAcrossAttributeChange @ 0x140214AFC (MiPageContentsRetainedAcrossAttributeChange.c)
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) != 0
      || (unsigned int)MiPageContentsRetainedAcrossAttributeChange(*(unsigned __int8 *)(a1 + 34) >> 6) == 0;
}
