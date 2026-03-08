/*
 * XREFs of BgpGxRectangleSize @ 0x1403846EC
 * Callers:
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwConfigureProgressResources @ 0x140AEB920 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x140AEBAD8 (BgpGxReservePoolRectangleSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
