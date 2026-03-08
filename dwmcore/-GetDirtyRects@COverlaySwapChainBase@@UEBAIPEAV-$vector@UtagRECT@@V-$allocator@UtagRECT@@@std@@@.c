/*
 * XREFs of ?GetDirtyRects@COverlaySwapChainBase@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800F0E40
 * Callers:
 *     ?GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18011B6D0 (-GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT.c)
 *     ?GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18011C750 (-GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlaySwapChainBase::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((FastRegion::Internal::CRgnData **)(a1 + 136), a2);
}
