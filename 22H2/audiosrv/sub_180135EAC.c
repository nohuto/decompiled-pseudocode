/*
 * XREFs of sub_180135EAC @ 0x180135EAC
 * Callers:
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 * Callees:
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180135EAC(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // rcx
  char v6; // bl
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v8 = v4;
  if ( *(_BYTE *)(a1 + 209) )
    goto LABEL_12;
  sub_180060060(v9, L"LegacyDefaultEndpointKey");
  sub_1800308A0((_QWORD *)(a1 + 464), &v8, (char *)v9);
  if ( v10 >= 8 )
    sub_1800472E0(v9[0], 2 * v10 + 2);
  if ( v8 == *(struct _RTL_CRITICAL_SECTION **)(a1 + 472)
    || (v5 = *(_DWORD **)&v8[1].LockCount, *a2 == v5[1])
    && a2[1] == v5[7]
    && a2[2] == v5[13]
    && a2[3] == v5[19]
    && a2[4] == v5[25]
    && a2[5] == v5[31] )
  {
LABEL_12:
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
