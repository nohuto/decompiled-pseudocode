/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1403CE3B8
 * Callers:
 *     HvlEnlightenProcessor @ 0x140382F20 (HvlEnlightenProcessor.c)
 *     HvlReadPerformanceStateCounters @ 0x1403CE360 (HvlReadPerformanceStateCounters.c)
 *     HvlSharedIsr @ 0x14045ED00 (HvlSharedIsr.c)
 *     HvlGetApicIdFromLpIndex @ 0x140540010 (HvlGetApicIdFromLpIndex.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x140540130 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140540450 (HvlQueryProcessorTopologyEx.c)
 *     HvlGetStatsUpdateCounter @ 0x140546884 (HvlGetStatsUpdateCounter.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405A0194 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByLpIndex(unsigned int a1)
{
  int *v1; // rdx
  int *result; // rax
  unsigned int v3; // r9d

  v1 = HvlpLogicalProcessorRegions;
  if ( a1 >= (unsigned int)HvlpLogicalProcessorCount
    || (result = &HvlpLogicalProcessorRegions[30 * a1], result[1] != a1) )
  {
    result = 0LL;
    v3 = 0;
    if ( (_DWORD)HvlpLogicalProcessorCount )
    {
      while ( v1[1] != a1 )
      {
        ++v3;
        v1 += 30;
        if ( v3 >= (unsigned int)HvlpLogicalProcessorCount )
          goto LABEL_6;
      }
      return v1;
    }
    else
    {
LABEL_6:
      if ( !a1 )
        return v1;
    }
  }
  return result;
}
