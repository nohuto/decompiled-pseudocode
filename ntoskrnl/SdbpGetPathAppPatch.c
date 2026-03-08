/*
 * XREFs of SdbpGetPathAppPatch @ 0x140A4FFD0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x14066BB30 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x14066BCC0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x140A50220 (SdbpGetPathCustomSdb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140A524A8 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140A527A4 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(NTSTRSAFE_PWSTR pszDest, size_t cchDest)
{
  int v5; // ebx
  wchar_t pszSrc[16]; // [rsp+30h] [rbp-258h] BYREF
  wchar_t v7[264]; // [rsp+50h] [rbp-238h] BYREF

  wcscpy(pszSrc, L"\\AppPatch");
  if ( cchDest < 0xA )
    return 3221225507LL;
  *pszDest = 0;
  v7[0] = 0;
  v5 = AslPathCombine(pszSrc);
  if ( v5 < 0 || (v5 = AslPathToSystemPathBuf(pszDest, cchDest, v7), v5 < 0) )
    AslLogCallPrintf(1LL);
  return (unsigned int)v5;
}
