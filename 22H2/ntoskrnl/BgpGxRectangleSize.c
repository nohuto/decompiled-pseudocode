/*
 * XREFs of BgpGxRectangleSize @ 0x14039B648
 * Callers:
 *     AnFwConfigureProgressResources @ 0x1409F1744 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x1409F1834 (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
