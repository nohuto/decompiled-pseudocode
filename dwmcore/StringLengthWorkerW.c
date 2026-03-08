/*
 * XREFs of StringLengthWorkerW @ 0x18027D36C
 * Callers:
 *     ?StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18027D210 (-StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  HRESULT result; // eax

  for ( i = cchMax; cchMax; --cchMax )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = cchMax == 0 ? 0x80070057 : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = i - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
