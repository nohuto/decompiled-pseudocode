/*
 * XREFs of sub_180132B98 @ 0x180132B98
 * Callers:
 *     sub_1800BCCD0 @ 0x1800BCCD0 (sub_1800BCCD0.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800DD7A0 @ 0x1800DD7A0 (sub_1800DD7A0.c)
 *     sub_180132E0C @ 0x180132E0C (sub_180132E0C.c)
 */

__int64 __fastcall sub_180132B98(const WCHAR *a1, void *a2, __int64 a3, char *a4, __int64 a5, HKEY hkey, _WORD *a7)
{
  __int64 result; // rax
  unsigned int v11; // edi
  wchar_t *v12; // r15
  __int64 v13; // rcx
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  result = 0LL;
  if ( a1 && a2 && hkey )
  {
    if ( a7 && *a7 )
      *(_DWORD *)a4 |= 0x80u;
    v11 = 0;
    v12 = aDefault_0;
    pcbData = 256;
    if ( lstrcmpW(a1, aSystemdefault) )
      v12 = (wchar_t *)a1;
    if ( !RegGetValueW(hkey, aAppeventsSchem, 0LL, 2u, 0LL, String1, &pcbData) && !lstrcmpiW(String1, aNone_2) )
      *(_DWORD *)a4 |= 2u;
    if ( !(unsigned int)sub_1800DD7A0(v12, 40LL, &phkResult)
      && (*a4 >= 0 || !a7 || !*a7 || (v11 = sub_180132E0C(v13, a7, v12, a2)) == 0)
      && ((*(_DWORD *)a4 & 0x400000) == 0 || (v11 = sub_180132E0C(v13, aExplorer, v12, a2)) == 0) )
    {
      v11 = sub_180132E0C(v13, aDefault_1, v12, a2);
      if ( !v11 )
      {
        phkResult = 0LL;
        pcbData = 260;
        sub_18000E660((char *)String1, 260LL, (const char *)aSS_1, aSoftwareMicros_8, v12);
        if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, String1, 0, 0x20019u, &phkResult) )
        {
          v11 = RegGetValueW(phkResult, 0LL, aSound, v11 + 2, 0LL, a2, &pcbData) == 0;
          RegCloseKey(phkResult);
        }
      }
    }
    return v11;
  }
  return result;
}
