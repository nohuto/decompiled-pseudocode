/*
 * XREFs of SdbpGetPathCustomSdb @ 0x140A50220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x140A4FFD0 (SdbpGetPathAppPatch.c)
 *     AslPathCombine @ 0x140A524A8 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(wchar_t *a1, size_t a2)
{
  int v5; // ebx
  wchar_t pszSrc[280]; // [rsp+30h] [rbp-258h] BYREF

  wcscpy(pszSrc, L"\\CustomSDB");
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  pszSrc[16] = 0;
  v5 = AslPathCombine(pszSrc);
  if ( v5 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)v5;
}
