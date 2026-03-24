/*
 * XREFs of iswdigit @ 0x1403D2130
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140630B74 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403D426C (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
