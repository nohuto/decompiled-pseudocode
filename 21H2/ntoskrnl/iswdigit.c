/*
 * XREFs of iswdigit @ 0x1403E1BF0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1407DC794 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403E3CE0 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
