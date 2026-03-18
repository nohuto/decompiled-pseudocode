/*
 * XREFs of PpmPerfQueryPackageId @ 0x1403B6240
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140257210 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 34856);
}
