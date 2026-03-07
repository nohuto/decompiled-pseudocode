__int64 __fastcall PspIdentityBasedJobBreakaway(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v10; // eax
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v21; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR v23[72]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v24[72]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR SourceString[128]; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR v26[128]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v16 = 256LL;
  *a3 = 0;
  v15 = 256LL;
  v14 = 0LL;
  v18 = 132LL;
  v17 = 132LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v21 = 0LL;
  v6 = RtlQueryPackageIdentityEx(a1, (__int64)SourceString, (__int64)&v16, (__int64)v23, (__int64)&v18, v11, &v13);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0LL;
    v7 = 0;
  }
  else
  {
    if ( v6 < 0 )
      return v7;
    v8 = v13;
  }
  if ( !v8 )
    *a3 = 1;
  if ( !*a3 )
  {
    v10 = RtlQueryPackageIdentityEx(a2, (__int64)v26, (__int64)&v15, (__int64)v24, (__int64)&v17, v12, &v14);
    v7 = v10;
    if ( v10 == -1073741275 || v10 == -2147483643 )
    {
      v7 = 0;
    }
    else
    {
      if ( v10 < 0 )
        return v7;
      v4 = v14;
    }
  }
  if ( v4 )
  {
    if ( (((unsigned int)v4 ^ (unsigned int)v8) & 0xFFFFFFDF) != 0
      || v16 != v15
      || v18 != v17
      || (RtlInitUnicodeString(&DestinationString, SourceString),
          RtlInitUnicodeString(&String1, v23),
          RtlInitUnicodeString(&String2, v26),
          RtlInitUnicodeString(&v21, v24),
          !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
      || !RtlEqualUnicodeString(&String1, &v21, 1u) )
    {
      *a3 = 1;
    }
  }
  return v7;
}
