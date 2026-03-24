/*
 * XREFs of ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090784
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CF3C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C009D0D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     NtGdiSelectBitmap @ 0x1C0100E90 (NtGdiSelectBitmap.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C011C550 (NtGdiMakeObjectUnXferable.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011E610 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C013A088 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiFrameRgn @ 0x1C013E790 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C01462A0 (NtGdiFillRgn.c)
 *     vUnlinkEudcRFONTs @ 0x1C02983B4 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02984B0 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiSelectBrush @ 0x1C02AF980 (NtGdiSelectBrush.c)
 *     NtGdiSelectPen @ 0x1C02AFA70 (NtGdiSelectPen.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bValid(RFONTOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
