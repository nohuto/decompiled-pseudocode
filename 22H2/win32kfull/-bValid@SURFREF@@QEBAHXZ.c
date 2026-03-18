/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C013E070
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C0274F74 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275904 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0276A0C (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     NtGdiGetETM @ 0x1C02D5D30 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *((_QWORD *)this + 4) != 0LL;
}
