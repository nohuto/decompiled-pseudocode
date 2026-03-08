/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x14066BCC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x140A4FFD0 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A503E0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x140A524A8 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(wchar_t *a1, size_t a2, __int64 a3, __int64 a4)
{
  wchar_t *v7; // rdi
  int ProcessHostGuestArchitectures; // ebx
  const char *v9; // r9
  int v10; // r8d
  __int16 v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[8]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v15; // [rsp+70h] [rbp-90h]

  wcscpy(pszSrc, L"Custom");
  v14[0] = *(_OWORD *)L"Custom\\Custom64";
  v14[1] = *(_OWORD *)L"ustom64";
  if ( a2 < 7 )
    return 3221225507LL;
  v12 = -1;
  *a1 = 0;
  v7 = pszSrc;
  v15 = 0;
  v11[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v12, v11, a4);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v11[0] == 9 || v11[0] == 12 )
      v7 = (wchar_t *)v14;
    ProcessHostGuestArchitectures = AslPathCombine(v7);
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(a1, a2);
    v9 = "AslPathCombine failed [%x]";
    v10 = 1174;
  }
  else
  {
    v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v10 = 1160;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v10, (_DWORD)v9);
  return (unsigned int)ProcessHostGuestArchitectures;
}
