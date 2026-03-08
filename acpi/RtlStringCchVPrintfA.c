/*
 * XREFs of RtlStringCchVPrintfA @ 0x1C0047260
 * Callers:
 *     CatError @ 0x1C004D728 (CatError.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchVPrintfA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCSTR pszFormat,
        va_list argList)
{
  NTSTATUS v5; // ebx
  size_t v6; // rdi
  int v7; // eax

  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v6 = cchDest - 1;
    v5 = 0;
    v7 = _vsnprintf(pszDest, cchDest - 1, pszFormat, argList);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  else
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  return v5;
}
