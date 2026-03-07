NTSTATUS __stdcall RtlStringCchCatExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  const wchar_t *v9; // r11
  size_t v10; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  pcchLength = 0LL;
  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  result = RtlStringLengthWorkerW(pszDest, cchDest, &pcchLength);
  if ( result >= 0 )
  {
    result = 0;
    if ( cchDest - pcchLength <= 1 )
    {
      if ( !*v9 )
        return result;
      result = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    else
    {
      result = RtlStringCopyWorkerW_1(&pszDest[pcchLength], cchDest - pcchLength, &pcchLength, v9, v10);
      if ( result >= 0 )
        return result;
    }
    if ( (cchDest & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      *pszDest = 0;
  }
  return result;
}
