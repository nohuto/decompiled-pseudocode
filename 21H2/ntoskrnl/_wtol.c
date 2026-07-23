/*
 * XREFs of _wtol @ 0x1403D25C0
 * Callers:
 *     _wtoi @ 0x1403D25A0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x14067A010 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403D4634 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
