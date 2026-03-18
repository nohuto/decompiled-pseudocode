/*
 * XREFs of _wtol @ 0x1403E1810
 * Callers:
 *     _wtoi @ 0x1403E17F0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x1407DC794 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403E3850 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
