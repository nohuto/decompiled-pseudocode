/*
 * XREFs of SdbpGetPathAppraiser @ 0x140A13FC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A142D0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x140A15B1C (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A17ABC (AslEnvGetSysNativeDirPathForGuestBuf.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(NTSTRSAFE_PWSTR pszDest, size_t cchDest, const wchar_t *a3, __int64 a4)
{
  const wchar_t *v5; // r10
  int ProcessHostGuestArchitectures; // ebx
  _WORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[12]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDesta[264]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = a3;
  wcscpy(pszSrc, L"\\appraiser");
  if ( cchDest < 0xB )
    return 3221225507LL;
  *pszDest = 0;
  v11 = -1;
  v10[0] = -1;
  pszDesta[0] = 0;
  if ( !a3 )
    v5 = &word_140011C40;
  ProcessHostGuestArchitectures = AslPathCombine(pszSrc, v5, pszDesta, 0x104uLL);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v11, v10, a4),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(pszDest, cchDest, pszDesta, (__int64)v10);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
