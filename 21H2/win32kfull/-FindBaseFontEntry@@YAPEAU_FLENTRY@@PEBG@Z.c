/*
 * XREFs of ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00A11D4
 * Callers:
 *     bAddFlEntry @ 0x1C00A0C38 (bAddFlEntry.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00A3930 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     vLinkEudcPFEsWorker @ 0x1C00A3C74 (vLinkEudcPFEsWorker.c)
 *     bDeleteFlEntry @ 0x1C0298670 (bDeleteFlEntry.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0298FE0 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     <none>
 */

struct _FLENTRY *__fastcall FindBaseFontEntry(wchar_t *Str1)
{
  _WORD *i; // rbx
  _WORD *v3; // rdi
  __int64 v4; // rdx
  const wchar_t *v5; // rcx
  const wchar_t *v6; // rdx

  for ( i = off_1C032B378; ; i = *(_WORD **)i )
  {
    v3 = 0LL;
    if ( i == (_WORD *)&off_1C032B378 )
      break;
    v4 = 17LL;
    v3 = i;
    if ( i[16] != 64 )
      v4 = 16LL;
    v5 = Str1;
    v6 = &i[v4];
    if ( *Str1 == 64 )
      v5 = Str1 + 1;
    if ( !_wcsicmp(v5, v6) )
      break;
  }
  return (struct _FLENTRY *)v3;
}
