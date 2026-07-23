/*
 * XREFs of _strtoi64 @ 0x1403D1990
 * Callers:
 *     _atoi64 @ 0x1403D1A4C (_atoi64.c)
 * Callees:
 *     strtoxq @ 0x1403D176C (strtoxq.c)
 */

__int64 __cdecl strtoi64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq((__int64)&_initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0);
}
