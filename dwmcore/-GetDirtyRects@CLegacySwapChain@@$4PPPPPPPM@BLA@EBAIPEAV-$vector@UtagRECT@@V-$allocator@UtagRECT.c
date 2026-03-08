/*
 * XREFs of ?GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18011B6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return COverlaySwapChainBase::GetDirtyRects(a1 - *(int *)(a1 - 4) - 432, a2);
}
