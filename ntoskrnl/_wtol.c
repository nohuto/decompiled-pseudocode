/*
 * XREFs of _wtol @ 0x1403D4250
 * Callers:
 *     _wtoi @ 0x1403D4230 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x1407E4C2C (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403D633C (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
