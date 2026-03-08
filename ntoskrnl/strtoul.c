/*
 * XREFs of strtoul @ 0x1403D32B8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140B4D34C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140B4E9B8 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140B4EDC8 (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140B9526C (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403D3030 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
