/*
 * XREFs of ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C00E77DC
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C009C154 (GreGetGlyphOutlineInternal.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00E7408 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bSkipCHSFontSegUISymFallback(RFONTOBJ *this, __int16 a2, struct PFF *a3, struct PFF *a4)
{
  return !gbAllowSCPUAFontFallback
      && (unsigned __int16)(a2 + 0x2000) <= 0x18FFu
      && (*((_DWORD *)a4 + 13) & 0x4000) != 0
      && (*((_DWORD *)a3 + 13) & 0x8000) != 0;
}
