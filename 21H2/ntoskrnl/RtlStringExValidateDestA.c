/*
 * XREFs of RtlStringExValidateDestA @ 0x1403CD808
 * Callers:
 *     RtlStringCbCopyExA @ 0x1403CD790 (RtlStringCbCopyExA.c)
 *     RtlStringCbPrintfExA @ 0x1404B6184 (RtlStringCbPrintfExA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringExValidateDestA(STRSAFE_PCNZCH pszDest, size_t cchDest, const size_t cchMax, ULONG dwFlags)
{
  NTSTATUS result; // eax

  result = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      return -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    return -1073741811;
  }
  return result;
}
