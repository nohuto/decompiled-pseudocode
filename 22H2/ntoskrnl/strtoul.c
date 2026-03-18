/*
 * XREFs of strtoul @ 0x1403D87D8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140B5560C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B55E80 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140B56C78 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140B57088 (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140B9947C (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403D8550 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
