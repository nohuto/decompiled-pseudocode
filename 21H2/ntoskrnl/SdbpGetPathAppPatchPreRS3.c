/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x1405C0A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x140967140 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140967520 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x1409689F4 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(wchar_t *a1, size_t a2, const wchar_t *a3, __int64 a4)
{
  NTSTATUS ProcessHostGuestArchitectures; // ebx
  const char *v9; // r9
  int v10; // r8d
  const wchar_t *v11; // r8
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
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v12[0] == 9 || v12[0] == 12 )
    {
      ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "AslPathCombine failed [%x]";
        v10 = 1004;
        goto LABEL_5;
      }
    }
    else
    {
      v11 = &word_14001BEB0;
      if ( a3 )
        v11 = a3;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(pszDest, 0x104uLL, v11);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v10 = 1010;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  }
  v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v10 = 992;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v10, (_DWORD)v9);
  return (unsigned int)ProcessHostGuestArchitectures;
}
