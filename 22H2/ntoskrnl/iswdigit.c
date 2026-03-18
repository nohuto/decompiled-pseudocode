/*
 * XREFs of iswdigit @ 0x1403D9B50
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1407C2DA0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403DBCE4 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
