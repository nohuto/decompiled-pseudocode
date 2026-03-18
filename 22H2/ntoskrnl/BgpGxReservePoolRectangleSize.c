/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x140AEFA98
 * Callers:
 *     BgpTxtRegionSize @ 0x1403872DC (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x14038733C (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
