NTSTATUS __fastcall RtlpGetDynamicTimeZoneInfoHandle(NTSTRSAFE_PCWSTR pszSrc, HANDLE *a2)
{
  __int64 v3; // r8
  wchar_t *v4; // rdx
  wchar_t v5; // ax
  wchar_t *v6; // rax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  wchar_t *v9; // rax
  __int64 v10; // r8
  wchar_t *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  char *v14; // rdx
  wchar_t v15; // r8
  wchar_t *v16; // rax
  WCHAR pszDest[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*pszSrc )
    return -1073741811;
  v3 = 256LL;
  v4 = pszDest;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v5 = *(wchar_t *)((char *)v4 + (char *)L"Time Zones\\" - (char *)pszDest);
    if ( !v5 )
      break;
    *v4++ = v5;
    --v3;
  }
  while ( v3 );
  v6 = v4 - 1;
  if ( v3 )
    v6 = v4;
  *v6 = 0;
  result = v3 == 0 ? 0x80000005 : 0;
  if ( v3 )
  {
    result = RtlStringCbCatW(pszDest, 0x200uLL, pszSrc);
    if ( result >= 0 )
    {
      v8 = 256LL;
      v9 = pszDest;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      v10 = (256 - v8) & -(__int64)(v8 != 0);
      result = v8 == 0 ? 0xC000000D : 0;
      if ( v8 )
      {
        v11 = &pszDest[v10];
        v12 = 256 - v10;
        if ( 256 != v10 )
        {
          v13 = 2147483646LL;
          v14 = (char *)((char *)L"\\Dynamic DST" - (char *)v11);
          do
          {
            if ( !v13 )
              break;
            v15 = *(wchar_t *)((char *)v11 + (_QWORD)v14);
            if ( !v15 )
              break;
            *v11 = v15;
            --v13;
            ++v11;
            --v12;
          }
          while ( v12 );
        }
        v16 = v11 - 1;
        if ( v12 )
          v16 = v11;
        *v16 = 0;
        result = v12 == 0 ? 0x80000005 : 0;
      }
      if ( result >= 0 )
        return RtlpGetRegistryHandle(3, pszDest, 0, a2);
    }
  }
  return result;
}
