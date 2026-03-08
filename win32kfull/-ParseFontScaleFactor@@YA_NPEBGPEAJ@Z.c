/*
 * XREFs of ?ParseFontScaleFactor@@YA_NPEBGPEAJ@Z @ 0x1C02A1B50
 * Callers:
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C02A1A0C (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ParseFontScaleFactor(wchar_t *Str, int *a2)
{
  int v4; // eax
  bool v5; // bl
  signed int v6; // eax
  wchar_t *v7; // rcx
  wchar_t *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  v4 = iswdigit(*Str);
  v5 = 0;
  if ( v4 )
  {
    EndPtr = 0LL;
    v6 = wcstoul(Str, &EndPtr, 10);
    v7 = EndPtr;
    *a2 = v6;
    if ( !*v7 )
      v5 = v6 > 0;
    LOBYTE(v4) = v5;
  }
  return v4;
}
