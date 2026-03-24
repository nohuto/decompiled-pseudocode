/*
 * XREFs of PpmPerfQueryPackageId @ 0x14056E830
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140228E30 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 33848);
}
