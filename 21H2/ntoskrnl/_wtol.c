/*
 * XREFs of _wtol @ 0x1403D2450
 * Callers:
 *     _wtoi @ 0x1403D2430 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x1406CB720 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403D44C4 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
