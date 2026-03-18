/*
 * XREFs of ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C000B878
 * Callers:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000B774 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000B7FC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C008915C (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C009B700 (ulGetNearestIndexFromColorref.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016C3DC (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XEPALOBJ::bIsPalDefault(XEPALOBJ *this)
{
  return *(_QWORD *)this == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 6000LL);
}
