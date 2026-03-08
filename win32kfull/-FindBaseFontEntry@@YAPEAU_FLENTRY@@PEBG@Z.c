/*
 * XREFs of ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0115FA0
 * Callers:
 *     vLinkEudcPFEsWorker @ 0x1C0114EE8 (vLinkEudcPFEsWorker.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C01155D8 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02A3620 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     <none>
 */

struct _FLENTRY *__fastcall FindBaseFontEntry(wchar_t *Str1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rcx

  v2 = (_QWORD *)(*(_QWORD *)(SGDGetSessionState(Str1) + 32) + 13912LL);
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  while ( 1 )
  {
    v4 = 34LL;
    if ( *((_WORD *)v3 + 16) != 64 )
      v4 = 32LL;
    v5 = (const wchar_t *)((char *)v3 + v4);
    v6 = *Str1 == 64 ? Str1 + 1 : Str1;
    if ( !_wcsicmp(v6, v5) )
      break;
    v3 = (_QWORD *)*v3;
    if ( v3 == v2 )
      return 0LL;
  }
  return (struct _FLENTRY *)v3;
}
