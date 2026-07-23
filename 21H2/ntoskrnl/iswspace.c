/*
 * XREFs of iswspace @ 0x1403D29C0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1409275E8 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x140928054 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140928740 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403D4ADC (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
