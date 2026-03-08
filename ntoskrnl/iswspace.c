/*
 * XREFs of iswspace @ 0x1403D4650
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1409D0760 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1409D1B24 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D2214 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403D67C4 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
