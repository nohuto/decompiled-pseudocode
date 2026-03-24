/*
 * XREFs of iswspace @ 0x1403D2850
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x140927488 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x140927EF4 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409285E0 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403D496C (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
