/*
 * XREFs of _wtol @ 0x1403D1D50
 * Callers:
 *     _wtoi @ 0x1403D1D30 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140630B74 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403D3DC4 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
