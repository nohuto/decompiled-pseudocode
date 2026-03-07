int __fastcall CmGetCommonClassRegKeyPath(
        __int64 a1,
        const WCHAR *a2,
        __int16 a3,
        int a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  int v11; // ebp
  int result; // eax
  const wchar_t *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx

  if ( (a3 & 0x60) == 0x60 )
    return -1073741811;
  if ( (unsigned __int8)a3 == 32 )
  {
    result = CmValidateInstallerClassName(a1, a2);
    v11 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return -1073741811;
    v11 = 4;
    result = CmValidateInstallerClassName(a1, a2);
  }
  if ( result < 0 )
    return result;
  v13 = L"System\\CurrentControlSet\\Control\\Class";
  if ( v11 != 2 )
    v13 = L"System\\CurrentControlSet\\Control\\DeviceClasses";
  if ( (a3 & 0x200) == 0 )
  {
    v14 = -1LL;
    v15 = -1LL;
    do
      ++v15;
    while ( v13[v15] );
    v16 = v15 + 1;
    if ( a2 )
    {
      do
        ++v14;
      while ( a2[v14] );
      v16 += v14 + 1;
    }
    if ( v16 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v16;
      if ( (unsigned int)v16 <= (unsigned int)cchDest )
      {
        if ( a2 )
          return RtlStringCchPrintfExW(pszDest, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s", v13, a2);
        else
          return RtlStringCchPrintfExW(pszDest, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s", v13);
      }
      return -1073741789;
    }
    return -1073741675;
  }
  if ( a4 )
  {
    if ( a4 != -1 )
    {
      v20 = -1LL;
      v21 = -1LL;
      do
        ++v21;
      while ( v13[v21] );
      v22 = v21 + 49;
      if ( a2 )
      {
        do
          ++v20;
        while ( a2[v20] );
        v22 += v20 + 1;
      }
      if ( v22 > 0xFFFFFFFF )
        return -1073741675;
      if ( a8 )
        *a8 = v22;
      if ( (unsigned int)v22 > (unsigned int)cchDest )
        return -1073741789;
      if ( a2 )
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%04u\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles",
                 a4,
                 v13,
                 a2);
      else
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%04u\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles",
                 a4,
                 v13);
    }
    return -1073741811;
  }
  v17 = -1LL;
  v18 = -1LL;
  do
    ++v18;
  while ( v13[v18] );
  v19 = v18 + 52;
  if ( a2 )
  {
    do
      ++v17;
    while ( a2[v17] );
    v19 += v17 + 1;
  }
  if ( v19 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v19;
  if ( (unsigned int)v19 > (unsigned int)cchDest )
    return -1073741789;
  if ( a2 )
    return RtlStringCchPrintfExW(
             pszDest,
             (unsigned int)cchDest,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s\\%s",
             L"System\\CurrentControlSet\\Hardware Profiles\\Current",
             v13,
             a2);
  else
    return RtlStringCchPrintfExW(
             pszDest,
             (unsigned int)cchDest,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s",
             L"System\\CurrentControlSet\\Hardware Profiles\\Current",
             v13);
}
