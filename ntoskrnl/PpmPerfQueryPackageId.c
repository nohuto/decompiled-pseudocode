/*
 * XREFs of PpmPerfQueryPackageId @ 0x1403B15B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 34856);
}
