/*
 * XREFs of iswdigit @ 0x1403D4630
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1407E4C2C (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403D67C4 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
