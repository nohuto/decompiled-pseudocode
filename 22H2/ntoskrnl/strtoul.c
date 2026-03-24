/*
 * XREFs of strtoul @ 0x1403D0E00
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140A45CF4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A46580 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140A47370 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140A4768C (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140A59980 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403D0B70 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
