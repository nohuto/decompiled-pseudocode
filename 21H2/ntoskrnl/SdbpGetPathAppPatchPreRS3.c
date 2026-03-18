/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x1406498D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x140A13EC0 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A142D0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x140A15B1C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(wchar_t *a1, size_t a2, const wchar_t *a3, __int64 a4)
{
  NTSTATUS ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  __int16 v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[12]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-B0h] BYREF

  wcscpy(pszSrc, L"AppPatch64");
  if ( a2 < 0xB )
    return 3221225507LL;
  v13 = -1;
  pszDest[0] = 0;
  v12[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v13, v12, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v12[0] == 9 || v12[0] == 12 )
    {
      if ( !a3 )
        a3 = &word_140011C40;
      ProcessHostGuestArchitectures = AslPathCombine(pszSrc, a3, pszDest, 0x104uLL);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 1004;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
        a3 = &word_140011C40;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v11 = 1010;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  }
  v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v11 = 992;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v11, (_DWORD)v10, ProcessHostGuestArchitectures);
  return v9;
}
