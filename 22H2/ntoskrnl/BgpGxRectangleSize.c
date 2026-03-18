/*
 * XREFs of BgpGxRectangleSize @ 0x14038733C
 * Callers:
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     AnFwConfigureProgressResources @ 0x140AEF8E0 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x140AEFA98 (BgpGxReservePoolRectangleSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
