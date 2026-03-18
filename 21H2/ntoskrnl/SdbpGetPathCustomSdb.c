/*
 * XREFs of SdbpGetPathCustomSdb @ 0x140A14110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x140A13EC0 (SdbpGetPathAppPatch.c)
 *     AslPathCombine @ 0x140A15B1C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(wchar_t *a1, size_t a2, const wchar_t *a3)
{
  const wchar_t *v3; // r10
  int v7; // ebx
  wchar_t pszSrc[16]; // [rsp+30h] [rbp-258h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  wcscpy(pszSrc, L"\\CustomSDB");
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  pszDest[0] = 0;
  if ( !a3 )
    v3 = &word_140011C40;
  v7 = AslPathCombine(pszSrc, v3, pszDest, 0x104uLL);
  if ( v7 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, pszDest);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)v7;
}
