__int64 __fastcall SdbpGetPathAppraiser(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  _WORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v10; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[276]; // [rsp+38h] [rbp-C8h] BYREF

  wcscpy(pszSrc, L"\\appraiser");
  if ( cchDest < 0xB )
    return 3221225507LL;
  *pszDest = 0;
  v10 = -1;
  v9[0] = -1;
  pszSrc[12] = 0;
  ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v10, v9, a4),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(pszDest, cchDest, (__int64)v9);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
