/*
 * XREFs of PoGetFrequencyBucket @ 0x14031CAB8
 * Callers:
 *     KiAccumulateProcessorCycleStats @ 0x1403F2CC0 (KiAccumulateProcessorCycleStats.c)
 *     KiEndDebugAccumulation @ 0x14051DCF0 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14031CCEC (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  unsigned int CurrentFrequency; // r9d

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
  if ( CurrentFrequency < 0x4B )
    return CurrentFrequency / 0x19;
  else
    return 3;
}
