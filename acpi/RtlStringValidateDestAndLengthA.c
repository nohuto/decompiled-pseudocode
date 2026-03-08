/*
 * XREFs of RtlStringValidateDestAndLengthA @ 0x1C003BE88
 * Callers:
 *     RtlStringCchCatA @ 0x1C003BD94 (RtlStringCchCatA.c)
 *     RtlStringCchCatNA @ 0x1C003BDE4 (RtlStringCchCatNA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringValidateDestAndLengthA(
        NTSTRSAFE_PCSTR pszDest,
        size_t cchDest,
        size_t *pcchDestLength,
        const size_t cchMax)
{
  size_t v4; // r9
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
LABEL_9:
    *pcchDestLength = 0LL;
    return result;
  }
  v4 = cchDest;
  do
  {
    if ( !*pszDest )
      break;
    ++pszDest;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( pcchDestLength )
  {
    if ( v4 )
    {
      *pcchDestLength = cchDest - v4;
      return result;
    }
    goto LABEL_9;
  }
  return result;
}
