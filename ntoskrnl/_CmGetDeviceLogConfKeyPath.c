NTSTATUS __fastcall CmGetDeviceLogConfKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  if ( (a3 & 0xFFFFFFEB) != 0 )
    return -1073741811;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a2 + 2 * v8) );
  v9 = v8 + 39;
  if ( v9 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v9;
  if ( (unsigned int)v9 > (unsigned int)cchDest )
    return -1073741789;
  else
    return RtlStringCchPrintfExW(
             pszDest,
             (unsigned int)cchDest,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s\\%s",
             L"System\\CurrentControlSet\\Enum",
             a2,
             L"LogConf");
}
