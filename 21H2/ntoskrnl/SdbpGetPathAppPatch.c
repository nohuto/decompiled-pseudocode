/*
 * XREFs of SdbpGetPathAppPatch @ 0x140A13EC0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1406498D0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x140649A60 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x140A14110 (SdbpGetPathCustomSdb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140A15B1C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140A15D60 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(NTSTRSAFE_PWSTR pszDest, size_t cchDest, const wchar_t *a3)
{
  const wchar_t *v3; // r10
  int v7; // ebx
  wchar_t pszSrc[16]; // [rsp+30h] [rbp-258h] BYREF
  wchar_t pszDesta[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  wcscpy(pszSrc, L"\\AppPatch");
  if ( cchDest < 0xA )
    return 3221225507LL;
  *pszDest = 0;
  pszDesta[0] = 0;
  if ( !a3 )
    v3 = &word_140011C40;
  v7 = AslPathCombine(pszSrc, v3, pszDesta, 0x104uLL);
  if ( v7 < 0 || (v7 = AslPathToSystemPathBuf(pszDest, cchDest, pszDesta), v7 < 0) )
    AslLogCallPrintf(1LL);
  return (unsigned int)v7;
}
