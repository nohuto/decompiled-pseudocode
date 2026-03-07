NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r9
  NTSTATUS v4; // r11d
  signed __int64 v5; // r8
  wchar_t v6; // ax
  NTSTATUS result; // eax

  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v3 = 2147483646 - cchDest;
    v4 = 0;
    v5 = (char *)pszSrc - (char *)pszDest;
    while ( v3 + cchDest )
    {
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
      {
        if ( !cchDest )
        {
LABEL_6:
          --pszDest;
          v4 = -2147483643;
          break;
        }
        break;
      }
      *pszDest++ = v6;
      if ( !--cchDest )
        goto LABEL_6;
    }
    result = v4;
    goto LABEL_9;
  }
  result = -1073741811;
  if ( cchDest )
LABEL_9:
    *pszDest = 0;
  return result;
}
