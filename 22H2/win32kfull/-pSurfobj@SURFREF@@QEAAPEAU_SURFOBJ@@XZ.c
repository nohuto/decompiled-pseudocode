/*
 * XREFs of ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026CC30
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8EAC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiGetETM @ 0x1C013F420 (NtGdiGetETM.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C01598F4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B154 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFREF::pSurfobj(SURFREF *this)
{
  return (struct _SURFOBJ *)((*((_QWORD *)this + 4) + 24LL) & -(__int64)(*((_QWORD *)this + 4) != 0LL));
}
