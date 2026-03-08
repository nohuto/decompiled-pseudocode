/*
 * XREFs of HvlQueryProcessorTopology @ 0x14053DF50
 * Callers:
 *     <none>
 * Callees:
 *     HvlQueryProcessorTopologyEx @ 0x14053DFB0 (HvlQueryProcessorTopologyEx.c)
 */

__int64 __fastcall HvlQueryProcessorTopology(int a1, int a2, int a3, int a4)
{
  return HvlQueryProcessorTopologyEx(a1, a2, a3, a4, 0LL);
}
