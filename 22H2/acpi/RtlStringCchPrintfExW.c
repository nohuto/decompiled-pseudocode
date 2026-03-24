/*
 * XREFs of RtlStringCchPrintfExW @ 0x1C0028C9C
 * Callers:
 *     ACPIGetPnpLocationString @ 0x1C00A0750 (ACPIGetPnpLocationString.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACD30 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     memset @ 0x1C0032480 (memset.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004B068 (RtlStringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v8; // ebx
  NTSTRSAFE_PWSTR v9; // r13
  size_t v10; // r15
  const wchar_t *v11; // r8
  size_t v12; // rsi
  int v13; // eax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t v16[2]; // [rsp+38h] [rbp-10h] BYREF
  size_t *v18; // [rsp+A8h] [rbp+60h]
  va_list Args; // [rsp+C0h] [rbp+78h] BYREF

  va_start(Args, pszFormat);
  v18 = pcchRemaining;
  v8 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v8 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
    return v8;
  }
  ppszDestEnda = pszDest;
  v9 = pszDest;
  v16[0] = cchDest;
  v10 = cchDest;
  if ( (dwFlags & 0x100) != 0 )
  {
    v11 = &word_1C006F7EC;
    if ( pszFormat )
      v11 = pszFormat;
  }
  else
  {
    v11 = pszFormat;
  }
  v8 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v8 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    if ( cchDest )
    {
      v16[0] = 0LL;
      v12 = cchDest - 1;
      v13 = _vsnwprintf(pszDest, cchDest - 1, v11, Args);
      if ( v13 < 0 || v13 > v12 )
      {
        v8 = -2147483643;
      }
      else if ( v13 != v12 )
      {
        v12 = v13;
        goto LABEL_13;
      }
      pszDest[v12] = 0;
LABEL_13:
      v10 = cchDest - v12;
      v9 = &pszDest[v12];
      ppszDestEnda = v9;
      v16[0] = cchDest - v12;
      if ( v8 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v10 > 1 && 2 * v10 > 2 )
          memset(v9 + 1, (unsigned __int8)dwFlags, 2 * v10 - 2);
LABEL_18:
        pcchRemaining = v18;
LABEL_19:
        if ( ppszDestEnd )
          *ppszDestEnd = v9;
        if ( pcchRemaining )
          *pcchRemaining = v10;
        return v8;
      }
      goto LABEL_33;
    }
    if ( !*v11 )
      goto LABEL_19;
    v8 = pszDest != 0LL ? -2147483643 : -1073741811;
  }
LABEL_33:
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v11, &ppszDestEnda, v16, dwFlags);
    v9 = ppszDestEnda;
    v10 = v16[0];
  }
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    goto LABEL_18;
  return v8;
}
