/*
 * XREFs of ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BI@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F72D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::NotifyRenderedRect(__int64 a1, _DWORD *a2)
{
  CLegacySwapChain::NotifyRenderedRect(a1 - *(int *)(a1 - 4) - 24, a2);
}
