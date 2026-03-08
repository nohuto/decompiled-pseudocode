/*
 * XREFs of ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18011B910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  CLegacySwapChain::NotifyRenderedRect(a1 - *(int *)(a1 - 4) - 432, a2);
}
