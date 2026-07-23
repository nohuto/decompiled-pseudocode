/*
 * XREFs of strtoul @ 0x1403D1670
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140A46CF4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A47580 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140A48370 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140A4868C (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140A5A980 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403D13E0 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
