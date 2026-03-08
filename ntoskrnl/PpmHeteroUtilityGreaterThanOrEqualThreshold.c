/*
 * XREFs of PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14059553C
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140593FE0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroComputeUnparkCount @ 0x140594CD0 (PpmHeteroComputeUnparkCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroUtilityGreaterThanOrEqualThreshold(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  unsigned __int64 v5; // r9
  unsigned int v6; // ecx

  if ( a2 * a1 > a3 )
    a3 = a2 * a1;
  v5 = a1 * ((10000 * a4 * (unsigned __int64)(unsigned int)PpmHeteroMinRelativePerformance) >> 16);
  v6 = 0;
  if ( 100 * a3 >= v5 )
    return a1 != 0;
  return v6;
}
