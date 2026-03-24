/*
 * XREFs of ?GetDirtyRects@CLegacySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800F1D34
 * Callers:
 *     ?GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@A@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800F6D70 (-GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@A@EBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ?GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800F7210 (-GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@.c)
 *     ?GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800F7560 (-GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((int **)(a1 - 160), a2);
}
