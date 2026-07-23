/*
 * XREFs of iswdigit @ 0x1403D29A0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x14067A010 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403D4ADC (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
