/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C000AD50
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C000AD70 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     prfntKillList @ 0x1C000BDE0 (prfntKillList.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0011AA8 (prfntDeactivateEudcRFONTs.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00F7270 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C015EA48 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C029C730 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02A67E0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A7404 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(struct RFONT **)(*(_QWORD *)(v1 + 3496) + 1520LL);
  else
    return *(struct RFONT **)(v1 + 1520);
}
