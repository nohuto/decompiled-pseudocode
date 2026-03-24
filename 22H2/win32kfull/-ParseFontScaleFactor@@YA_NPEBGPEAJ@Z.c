/*
 * XREFs of ?ParseFontScaleFactor@@YA_NPEBGPEAJ@Z @ 0x1C00A2FEC
 * Callers:
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C00A0F24 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ParseFontScaleFactor(wchar_t *Str, int *a2)
{
  char v4; // bl
  signed int v5; // eax
  wchar_t *v6; // rcx
  wchar_t *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !iswdigit(*Str) )
    return 0;
  EndPtr = 0LL;
  v5 = wcstoul(Str, &EndPtr, 10);
  v6 = EndPtr;
  *a2 = v5;
  if ( !*v6 )
    return v5 > 0;
  return v4;
}
