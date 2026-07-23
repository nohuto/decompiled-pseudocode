/*
 * XREFs of RtlStringCbVPrintfA @ 0x14037141C
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 *     KsepLogEtwMessage @ 0x140371328 (KsepLogEtwMessage.c)
 * Callees:
 *     _vsnprintf @ 0x1403D1300 (_vsnprintf.c)
 */

NTSTATUS __stdcall RtlStringCbVPrintfA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCSTR pszFormat,
        va_list argList)
{
  NTSTATUS v4; // esi
  size_t v6; // rbx
  int v7; // eax

  v4 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v6 = cbDest - 1;
    v4 = 0;
    v7 = vsnprintf(pszDest, cbDest - 1, pszFormat, argList);
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
  return v4;
}
