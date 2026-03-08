/*
 * XREFs of ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C02A1A0C
 * Callers:
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 * Callees:
 *     ?ParseFontScaleFactor@@YA_NPEBGPEAJ@Z @ 0x1C02A1B50 (-ParseFontScaleFactor@@YA_NPEBGPEAJ@Z.c)
 */

bool __fastcall ParseFontLinkEntry(unsigned __int16 *a1, struct FontLinkData *a2)
{
  unsigned __int16 *v3; // rbx
  wchar_t *v4; // rbx
  wchar_t *v5; // rbx
  wchar_t *v6; // rsi
  wchar_t *v7; // rsi
  bool result; // al

  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *(_QWORD *)a2 = a1;
  v3 = &a1[wcscspn(a1, L",")];
  if ( !*v3 )
    return 1;
  *v3 = 0;
  v4 = &v3[wcsspn(v3 + 1, L" ") + 1];
  if ( !iswdigit(*v4) )
  {
    *((_QWORD *)a2 + 1) = v4;
    v5 = &v4[wcscspn(v4, L",")];
    if ( *v5 )
    {
      *v5 = 0;
      v4 = &v5[wcsspn(v5 + 1, L" ") + 1];
      goto LABEL_5;
    }
    return 1;
  }
LABEL_5:
  v6 = &v4[wcscspn(v4, L",")];
  result = *v6
        && (*v6 = 0, v7 = &v6[wcsspn(v6 + 1, L" ") + 1], ParseFontScaleFactor(v4, (int *)a2 + 4))
        && ParseFontScaleFactor(v7, (int *)a2 + 5);
  return result;
}
