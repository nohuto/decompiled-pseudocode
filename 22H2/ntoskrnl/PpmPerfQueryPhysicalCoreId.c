/*
 * XREFs of PpmPerfQueryPhysicalCoreId @ 0x1403B6220
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140257210 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPhysicalCoreId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 34844);
}
