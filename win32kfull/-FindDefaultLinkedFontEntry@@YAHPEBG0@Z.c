/*
 * XREFs of ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C02A0F54
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C01154C8 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FindDefaultLinkedFontEntry(wchar_t *Str1, char *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  _WORD *i; // rbx
  __int64 v7; // rbp

  v4 = 0;
  v5 = *(_QWORD *)(SGDGetSessionState(Str1) + 32);
  for ( i = (_WORD *)(v5 + 14212); ; i += 332 )
  {
    if ( *((_DWORD *)i - 31) )
    {
      if ( !*i )
      {
        v7 = 664LL * v4;
        if ( !_wcsicmp(Str1, (const wchar_t *)(v7 + v5 + 14146))
          && (int)StringCchCopyW((char *)(v7 + v5 + 14212), 261LL, a2) < 0 )
        {
          break;
        }
      }
    }
    if ( ++v4 >= 7 )
      return 1LL;
  }
  return 0LL;
}
