/*
 * XREFs of ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00070F4
 * Callers:
 *     NtGdiGetETM @ 0x1C012F660 (NtGdiGetETM.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C013DC80 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027936C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFACE::pSurfobj(SURFACE *this)
{
  return (struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
}
