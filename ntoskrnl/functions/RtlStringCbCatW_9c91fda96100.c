NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v4; // r9
  size_t v5; // rdx
  NTSTRSAFE_PWSTR v6; // rax
  NTSTATUS result; // eax
  size_t v8; // r8
  wchar_t *v9; // rdx
  size_t v10; // rcx
  __int64 v11; // rax
  char *v12; // r11
  wchar_t v13; // r8
  wchar_t *v14; // rax

  v4 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    return -1073741811;
  v5 = cbDest >> 1;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v8 = v4 - v5;
  else
    v8 = 0LL;
  if ( v5 )
  {
    v9 = &pszDest[v8];
    v10 = v4 - v8;
    if ( v4 != v8 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)pszSrc - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(wchar_t *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
    return v10 == 0 ? 0x80000005 : 0;
  }
  return result;
}
