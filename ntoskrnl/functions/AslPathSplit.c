__int64 __fastcall AslPathSplit(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR a4,
        int a5,
        NTSTRSAFE_PWSTR a6)
{
  unsigned int v8; // esi
  wchar_t *v10; // rax
  NTSTATUS v11; // ebx
  STRSAFE_PCNZWCH v12; // r11
  const wchar_t *v13; // r8
  wchar_t *v14; // rax
  const wchar_t *v15; // rsi
  __int64 v16; // r11
  wchar_t pszDesta[264]; // [rsp+30h] [rbp-258h] BYREF

  *pszDest = 0;
  v8 = cchDest;
  pszDesta[0] = 0;
  *a6 = 0;
  *a4 = 0;
  v10 = wcsrchr(pszSrc, 0x5Cu);
  if ( v10 )
  {
    v11 = RtlStringCchCopyNW(pszDest, v8, pszSrc, v10 - pszSrc + 1);
    if ( v11 < 0 )
      goto LABEL_12;
  }
  else
  {
    v12 = pszSrc;
  }
  v13 = v12 + 1;
  if ( *v12 != 92 )
    v13 = v12;
  v11 = RtlStringCchCopyW(pszDesta, 0x105uLL, v13);
  if ( v11 < 0 )
    goto LABEL_12;
  v14 = wcsrchr(pszDesta, 0x2Eu);
  v15 = v14;
  if ( v14 )
  {
    v11 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v14 - pszDesta);
    if ( v11 >= 0 )
    {
      a4[v16] = 0;
      v11 = RtlStringCchCopyW(a6, 0x104uLL, v15);
      if ( v11 >= 0 )
        return 0;
    }
LABEL_12:
    AslLogCallPrintf(1LL);
    return (unsigned int)v11;
  }
  v11 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
  if ( v11 < 0 )
    goto LABEL_12;
  return 0;
}
