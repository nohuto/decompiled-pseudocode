NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  __int64 v6; // r10
  size_t v7; // r11

  result = 0;
  v6 = 0x7FFFLL;
  v7 = 0LL;
  if ( cchDest )
  {
    while ( v6 )
    {
      if ( *pszSrc )
      {
        *pszDest++ = *pszSrc++;
        --v6;
        ++v7;
        if ( --cchDest )
          continue;
      }
      if ( cchDest || !v6 )
        break;
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( *pszSrc )
      result = -2147483643;
  }
  *pcchNewDestLength = v7;
  return result;
}
