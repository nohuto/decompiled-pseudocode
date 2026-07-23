/*
 * XREFs of PpmPerfQueryPackageId @ 0x14056EA70
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 33848);
}
