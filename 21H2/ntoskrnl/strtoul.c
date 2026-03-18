/*
 * XREFs of strtoul @ 0x1403E08C8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140B0C004 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B0C87C (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140B0D658 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140B0D974 (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140B18084 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403E0640 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
