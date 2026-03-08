/*
 * XREFs of CmQuerySingleFeatureConfiguration @ 0x140A0EFE0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1402F02B0 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall CmQuerySingleFeatureConfiguration(__int64 *a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  __int64 v11; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]

  v12 = 0LL;
  v11 = 0LL;
  if ( a2 != 8 )
    return (unsigned int)-1073741820;
  v7 = *a1;
  v12 = *a1;
  if ( a4 != 24 )
  {
    v6 = -1073741820;
LABEL_5:
    *a5 = 24;
    return v6;
  }
  v13 = 0LL;
  v14 = 0;
  v8 = RtlQueryFeatureConfiguration(SHIDWORD(v7), v7, &v11, (__int64)&v13);
  v6 = v8;
  if ( v8 >= 0 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)a3 = v11;
    *(_QWORD *)(a3 + 8) = v13;
    *(_DWORD *)(a3 + 16) = v14;
    *a5 = 24;
    return 0;
  }
  if ( v8 == -1073741275 || v8 == -2147483614 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)a3 = v11;
    goto LABEL_5;
  }
  return v6;
}
