/*
 * XREFs of PpmPerfQueryPackageId @ 0x1403DF410
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 34840);
}
