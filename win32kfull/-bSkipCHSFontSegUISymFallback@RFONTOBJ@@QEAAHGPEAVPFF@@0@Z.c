/*
 * XREFs of ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C014F714
 * Callers:
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0123E18 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C02B630C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bSkipCHSFontSegUISymFallback(RFONTOBJ *this, __int16 a2, struct PFF *a3, struct PFF *a4)
{
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 13964LL)
    || (unsigned __int16)(a2 + 0x2000) > 0x18FFu
    || (*((_DWORD *)a4 + 13) & 0x4000) == 0 )
  {
    return 0LL;
  }
  else
  {
    return (*((_DWORD *)a3 + 13) >> 15) & 1;
  }
}
