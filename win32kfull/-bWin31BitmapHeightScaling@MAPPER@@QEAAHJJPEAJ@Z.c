/*
 * XREFs of ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C029D6BC
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C029D2F0 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

_BOOL8 __fastcall MAPPER::bWin31BitmapHeightScaling(MAPPER *this, int a2, int a3, int *a4)
{
  return (unsigned int)SafeDivide<long,long,long>(a2 + a3 / 4, a3, a4) == 0;
}
