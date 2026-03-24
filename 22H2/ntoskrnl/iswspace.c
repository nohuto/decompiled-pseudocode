/*
 * XREFs of iswspace @ 0x1403D2150
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1409274D8 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x140927F44 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140928630 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403D426C (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
