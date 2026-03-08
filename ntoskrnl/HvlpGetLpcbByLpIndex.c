/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1403C8E08
 * Callers:
 *     HvlEnlightenProcessor @ 0x14037F430 (HvlEnlightenProcessor.c)
 *     HvlReadPerformanceStateCounters @ 0x1403C8DB0 (HvlReadPerformanceStateCounters.c)
 *     HvlSharedIsr @ 0x140456D60 (HvlSharedIsr.c)
 *     HvlGetApicIdFromLpIndex @ 0x14053DB70 (HvlGetApicIdFromLpIndex.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x14053DC90 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x14053DFB0 (HvlQueryProcessorTopologyEx.c)
 *     HvlGetStatsUpdateCounter @ 0x1405443E4 (HvlGetStatsUpdateCounter.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x14059DC74 (PpmHvSnapPerformanceAccumulation.c)
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
