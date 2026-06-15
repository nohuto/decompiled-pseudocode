/*
 * XREFs of sub_18000AC70 @ 0x18000AC70
 * Callers:
 *     sub_180046EF0 @ 0x180046EF0 (sub_180046EF0.c)
 *     sub_180046F30 @ 0x180046F30 (sub_180046F30.c)
 *     sub_180046FA0 @ 0x180046FA0 (sub_180046FA0.c)
 *     sub_180046FE0 @ 0x180046FE0 (sub_180046FE0.c)
 *     sub_1800470A0 @ 0x1800470A0 (sub_1800470A0.c)
 *     sub_1800470D0 @ 0x1800470D0 (sub_1800470D0.c)
 *     sub_180073620 @ 0x180073620 (sub_180073620.c)
 *     sub_1800736D0 @ 0x1800736D0 (sub_1800736D0.c)
 *     sub_1800736F0 @ 0x1800736F0 (sub_1800736F0.c)
 *     sub_180126B90 @ 0x180126B90 (sub_180126B90.c)
 *     sub_1801367E0 @ 0x1801367E0 (sub_1801367E0.c)
 * Callees:
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000AC70(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  __int64 v5; // r15
  char v8; // bp
  const WCHAR *v9; // r8
  unsigned int v10; // r9d
  HANDLE ProcessHeap; // rax
  _OWORD *v12; // rbx
  int pvData; // [rsp+40h] [rbp-A8h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v15; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v17[4]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v18[3]; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp-58h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v5 = a3;
  if ( !*(_BYTE *)(a1 + 96) )
    return 0LL;
  pvData = 0;
  v8 = 0;
  if ( *(_BYTE *)(a1 + 209) )
  {
    sub_180060060(v18, a2);
    sub_1800308A0(a1 + 464, &v16, v18);
    if ( v19 >= 8 )
      sub_1800472E0(v18[0], 2 * v19 + 2);
    if ( v16 == *(_QWORD *)(a1 + 472) )
    {
      sub_18004BD84(retaddr, 682LL, "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", 2147943568LL);
      return 2147943568LL;
    }
    v10 = *(_DWORD *)(24 * v5 + *(_QWORD *)(v16 + 48) + 4);
    pvData = v10;
    v8 = *(_BYTE *)(24 * v5 + *(_QWORD *)(v16 + 48) + 1);
    if ( *(_BYTE *)(32 * v5 + a1 + 272) && !v8 )
      v10 = 0;
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(a1 + 99) )
    goto LABEL_14;
  pcbData = 4;
  v9 = L"AudioSrvLicenseResult";
  if ( !*(_BYTE *)(a1 + 100) )
    v9 = L"AudioDGLicenseResult";
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
    v9,
    0x10u,
    0LL,
    &pvData,
    &pcbData);
  v10 = pvData;
  if ( pvData >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    ProcessHeap = GetProcessHeap();
    v12 = HeapAlloc(ProcessHeap, 0, 0x40uLL);
    v17[2] = 24LL;
    v17[3] = 31LL;
    *v12 = *(_OWORD *)L"LegacyDefaultEndpointKey";
    v12[1] = *(_OWORD *)L"faultEndpointKey";
    v12[2] = *(_OWORD *)L"pointKey";
    *((_WORD *)v12 + 24) = 0;
    v17[0] = v12;
    sub_1800308A0(a1 + 464, &v15, v17);
    sub_18006A148(v12, 64LL);
    if ( v15 == *(_QWORD *)(a1 + 472) )
    {
      sub_18004BD84(retaddr, 672LL, "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", 2147549183LL);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      return 2147549183LL;
    }
    v10 = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 24 * v5 + 4);
    pvData = v10;
    if ( a1 != -56 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_14:
      v10 = pvData;
    }
  }
LABEL_22:
  if ( a4 )
    *a4 = v8;
  return v10;
}
