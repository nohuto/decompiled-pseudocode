/*
 * XREFs of iswdigit @ 0x1403D2830
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1406CB720 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403D496C (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
