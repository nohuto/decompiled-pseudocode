/*
 * XREFs of RtlStringExHandleOtherFlagsA @ 0x1404FBB90
 * Callers:
 *     RtlStringCbPrintfExA @ 0x1404FB9CC (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleOtherFlagsA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  char *v10; // rax

  if ( cbDest && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = &pszDest[cchOriginalDestLength];
    *pcchRemaining = cbDest - cchOriginalDestLength;
    pszDest[cchOriginalDestLength] = 0;
  }
  if ( (dwFlags & 0x400) == 0 )
  {
LABEL_7:
    if ( !cbDest )
      return 0;
    goto LABEL_8;
  }
  memset(pszDest, (unsigned __int8)dwFlags, cbDest);
  if ( !(_BYTE)dwFlags )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cbDest;
    goto LABEL_7;
  }
  if ( !cbDest )
    return 0;
  *pcchRemaining = 1LL;
  v10 = &pszDest[cbDest - 1];
  *ppszDestEnd = v10;
  *v10 = 0;
LABEL_8:
  if ( (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cbDest;
    *pszDest = 0;
  }
  return 0;
}
