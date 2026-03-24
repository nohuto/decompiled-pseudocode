/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x1405D9294
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406D6400 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x14024F470 (RtlQueryPackageIdentityEx.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(int a1, int a2, int *a3)
{
  __int64 v4; // r14
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+28h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  size_t v16; // [rsp+50h] [rbp-B0h] BYREF
  size_t v17; // [rsp+58h] [rbp-A8h] BYREF
  size_t v18; // [rsp+60h] [rbp-A0h] BYREF
  size_t v19; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v22; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v24[72]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v25[72]; // [rsp+140h] [rbp+40h] BYREF
  WCHAR SourceString[128]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR v27[128]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v14 = 0LL;
  v4 = 0LL;
  v17 = 256LL;
  *a3 = 0;
  v16 = 256LL;
  v15 = 0LL;
  v19 = 132LL;
  v18 = 132LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v22 = 0LL;
  v6 = RtlQueryPackageIdentityEx(a1, SourceString, &v17, v24, &v19, v12, &v14);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0LL;
    v7 = 0;
  }
  else
  {
    v8 = v14;
  }
  if ( v7 >= 0 )
  {
    if ( v8 )
    {
      v9 = *a3;
    }
    else
    {
      *a3 = 1;
      v9 = 1;
    }
    if ( !v9 )
    {
      v10 = RtlQueryPackageIdentityEx(a2, v27, &v16, v25, &v18, v13, &v15);
      v7 = v10;
      if ( v10 == -1073741275 || v10 == -2147483643 )
        v7 = 0;
      else
        v4 = v15;
    }
    if ( v7 >= 0 )
    {
      if ( v4 )
      {
        if ( (((unsigned int)v4 ^ (unsigned int)v8) & 0xFFFFFFDF) != 0
          || v17 != v16
          || v19 != v18
          || (RtlInitUnicodeString(&DestinationString, SourceString),
              RtlInitUnicodeString(&String1, v24),
              RtlInitUnicodeString(&String2, v27),
              RtlInitUnicodeString(&v22, v25),
              !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
          || !RtlEqualUnicodeString(&String1, &v22, 1u) )
        {
          *a3 = 1;
        }
      }
    }
  }
  return (unsigned int)v7;
}
