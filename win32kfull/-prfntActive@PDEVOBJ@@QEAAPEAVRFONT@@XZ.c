/*
 * XREFs of ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0122F60
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     prfntKillList @ 0x1C00B724C (prfntKillList.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0116450 (prfntDeactivateEudcRFONTs.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C0125298 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C0125504 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C02A8FFC (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02B8F58 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntActive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(struct RFONT **)(*(_QWORD *)(v1 + 3496) + 1512LL);
  else
    return *(struct RFONT **)(v1 + 1512);
}
