/*
 * XREFs of ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090814
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CFCC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C009D160 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     NtGdiSelectBitmap @ 0x1C01011E0 (NtGdiSelectBitmap.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C011C8D0 (NtGdiMakeObjectUnXferable.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011E990 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C013A480 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiFrameRgn @ 0x1C013EC70 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0146850 (NtGdiFillRgn.c)
 *     vUnlinkEudcRFONTs @ 0x1C02989E4 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0298AE0 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiSelectBrush @ 0x1C02B0040 (NtGdiSelectBrush.c)
 *     NtGdiSelectPen @ 0x1C02B0130 (NtGdiSelectPen.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bValid(RFONTOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
