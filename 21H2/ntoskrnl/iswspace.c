/*
 * XREFs of iswspace @ 0x1403E1C10
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1409D09E4 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1409D1D04 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D23E8 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403E3CE0 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
