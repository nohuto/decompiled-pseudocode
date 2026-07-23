/*
 * XREFs of RtlStringExHandleOtherFlagsA @ 0x1404B6578
 * Callers:
 *     RtlStringCbPrintfExA @ 0x1404B63C4 (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleOtherFlagsA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  char *v9; // rax

  if ( cbDest && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = &pszDest[cchOriginalDestLength];
    *pcchRemaining = cbDest - cchOriginalDestLength;
    pszDest[cchOriginalDestLength] = 0;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, cbDest);
    if ( (_BYTE)dwFlags )
    {
      if ( !cbDest )
        return 0;
      *pcchRemaining = 1LL;
      v9 = &pszDest[cbDest - 1];
      *ppszDestEnd = v9;
      *v9 = 0;
    }
    else
    {
      *ppszDestEnd = pszDest;
      *pcchRemaining = cbDest;
    }
  }
  if ( cbDest && (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cbDest;
    *pszDest = 0;
  }
  return 0;
}
