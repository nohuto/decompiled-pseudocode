/*
 * XREFs of ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00563A0
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C0274F74 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275904 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0276A0C (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     NtGdiGetETM @ 0x1C02D5D30 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFACE::pSurfobj(SURFACE *this)
{
  return (struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
}
