/*
 * XREFs of ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C000A328
 * Callers:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000A224 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000A2AC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C00281CC (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00AAA70 (ulGetNearestIndexFromColorref.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C019925C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XEPALOBJ::bIsPalDefault(XEPALOBJ *this)
{
  return *(_QWORD *)this == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 6000LL);
}
