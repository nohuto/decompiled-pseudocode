/*
 * XREFs of ?GetDirtyRects@CConversionSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18029EC10
 * Callers:
 *     ?GetDirtyRects@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18011CE10 (-GetDirtyRects@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAIPEAV-$vector@UtagRECT@@V-$allocator@Utag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((FastRegion::Internal::CRgnData **)(a1 + 672), a2);
}
